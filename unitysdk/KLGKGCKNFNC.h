#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRichTextNodeCompiler.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
class OLHPNPEHEON;
namespace System { class String; }

#define KLGKGCKNFNC_COMPILE_OFFSET UNITYSDK_OFFSET(0x17B7E610)
#define KLGKGCKNFNC_CTOR_OFFSET UNITYSDK_OFFSET(0x17B7E600)
#define KLGKGCKNFNC_GET_TAG_OFFSET UNITYSDK_OFFSET(0x17B7E590)

inline static constexpr unsigned int KLGKGCKNFNC_TypeDefinitionIndex = 67024;

	class KLGKGCKNFNC : public ::RPG::Client::GridFightRichTextNodeCompiler
	{
	public:
		::OLHPNPEHEON* GAJHLFGLCCK; // 0x10
		::System::Void _ctor(::OLHPNPEHEON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLHPNPEHEON*))((::PBYTE)hIl2Cpp + KLGKGCKNFNC_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGKGCKNFNC_GET_TAG_OFFSET))(this);
		}

		::System::String* Compile(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + KLGKGCKNFNC_COMPILE_OFFSET))(this, a1, a2);
		}

	};
