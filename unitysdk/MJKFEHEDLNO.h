#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IENBCIEKGFA_GridFightPropertyDisplayType.h"
#include "unitysdk/RPG/Client/GridFightRichTextNodeCompiler.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
namespace System { class String; }

#define MJKFEHEDLNO_COMPILE_OFFSET UNITYSDK_OFFSET(0x1A3ACCF0)
#define MJKFEHEDLNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3AD230)
#define MJKFEHEDLNO_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1A3ACC80)
#define MJKFEHEDLNO_HPKMLKKCCOP_OFFSET UNITYSDK_OFFSET(0x1A3ACDE0)
#define MJKFEHEDLNO_KGJGHKHLIHA_OFFSET UNITYSDK_OFFSET(0x1A3ACFC0)

inline static constexpr unsigned int MJKFEHEDLNO_TypeDefinitionIndex = 67073;

	class MJKFEHEDLNO : public ::RPG::Client::GridFightRichTextNodeCompiler
	{
	public:
		::DNGMCNPJHBJ* EEFMDEHLLFI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJKFEHEDLNO_CTOR_OFFSET))(this);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJKFEHEDLNO_GET_TAG_OFFSET))(this);
		}

		::System::String* Compile(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + MJKFEHEDLNO_COMPILE_OFFSET))(this, a1, a2);
		}

		::System::Boolean HPKMLKKCCOP(::FMKEJLGKEMH* a1, ::System::String* a2, ::IENBCIEKGFA_GridFightPropertyDisplayType a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::FMKEJLGKEMH*, ::System::String*, ::IENBCIEKGFA_GridFightPropertyDisplayType))((::PBYTE)hIl2Cpp + MJKFEHEDLNO_HPKMLKKCCOP_OFFSET))(this, a1, a2, a3);
		}

		::System::String* KGJGHKHLIHA(::System::String* a1, ::IENBCIEKGFA_GridFightPropertyDisplayType a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::IENBCIEKGFA_GridFightPropertyDisplayType))((::PBYTE)hIl2Cpp + MJKFEHEDLNO_KGJGHKHLIHA_OFFSET))(this, a1, a2);
		}

	};
