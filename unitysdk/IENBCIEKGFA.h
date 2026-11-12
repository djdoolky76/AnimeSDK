#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IENBCIEKGFA_GridFightPropertyDisplayType.h"
#include "unitysdk/RPG/Client/GridFightRichTextNodeCompiler.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
namespace System { class String; }

#define IENBCIEKGFA_COMPILE_OFFSET UNITYSDK_OFFSET(0x16E74530)
#define IENBCIEKGFA_CTOR_OFFSET UNITYSDK_OFFSET(0x16E74A60)
#define IENBCIEKGFA_GET_TAG_OFFSET UNITYSDK_OFFSET(0x16E744E0)
#define IENBCIEKGFA_HPKMLKKCCOP_OFFSET UNITYSDK_OFFSET(0x16E74610)
#define IENBCIEKGFA_KGJGHKHLIHA_OFFSET UNITYSDK_OFFSET(0x16E747F0)

inline static constexpr unsigned int IENBCIEKGFA_TypeDefinitionIndex = 67050;

	class IENBCIEKGFA : public ::RPG::Client::GridFightRichTextNodeCompiler
	{
	public:
		::DNGMCNPJHBJ* EEFMDEHLLFI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IENBCIEKGFA_CTOR_OFFSET))(this);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IENBCIEKGFA_GET_TAG_OFFSET))(this);
		}

		::System::String* Compile(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + IENBCIEKGFA_COMPILE_OFFSET))(this, a1, a2);
		}

		::System::Boolean HPKMLKKCCOP(::FMKEJLGKEMH* a1, ::RPG::GameCore::AvatarPropertyType a2, ::IENBCIEKGFA_GridFightPropertyDisplayType a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::FMKEJLGKEMH*, ::RPG::GameCore::AvatarPropertyType, ::IENBCIEKGFA_GridFightPropertyDisplayType))((::PBYTE)hIl2Cpp + IENBCIEKGFA_HPKMLKKCCOP_OFFSET))(this, a1, a2, a3);
		}

		::System::String* KGJGHKHLIHA(::RPG::GameCore::AvatarPropertyType a1, ::IENBCIEKGFA_GridFightPropertyDisplayType a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::IENBCIEKGFA_GridFightPropertyDisplayType))((::PBYTE)hIl2Cpp + IENBCIEKGFA_KGJGHKHLIHA_OFFSET))(this, a1, a2);
		}

	};
