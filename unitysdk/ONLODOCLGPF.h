#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGICFAFGCPA.h"
class CCFBPCBMINH;
namespace RPG::Client { class SolarSystemConfig; }
namespace System { class String; }

#define ONLODOCLGPF_BIHKNODHIDI_OFFSET UNITYSDK_OFFSET(0x17D859D0)
#define ONLODOCLGPF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D85970)
#define ONLODOCLGPF_CTOR_OFFSET UNITYSDK_OFFSET(0x17D85960)
#define ONLODOCLGPF_DGPLBNAIIGN_OFFSET UNITYSDK_OFFSET(0x17D85980)
#define ONLODOCLGPF_GMFKFFBMACL_OFFSET UNITYSDK_OFFSET(0x17D85B20)
#define ONLODOCLGPF_KBFDFOGDILL_OFFSET UNITYSDK_OFFSET(0x17D85A70)
#define ONLODOCLGPF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D85BC0)

inline static constexpr unsigned int ONLODOCLGPF_TypeDefinitionIndex = 50437;

	class ONLODOCLGPF : public ::DGICFAFGCPA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLODOCLGPF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::SolarSystemConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SolarSystemConfig*))((::PBYTE)hIl2Cpp + ONLODOCLGPF_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void DGPLBNAIIGN(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*))((::PBYTE)hIl2Cpp + ONLODOCLGPF_DGPLBNAIIGN_OFFSET))(this, a1, a2);
		}

		::System::Void BIHKNODHIDI(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*))((::PBYTE)hIl2Cpp + ONLODOCLGPF_BIHKNODHIDI_OFFSET))(this, a1, a2);
		}

		::System::Void KBFDFOGDILL(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*, ::System::Single))((::PBYTE)hIl2Cpp + ONLODOCLGPF_KBFDFOGDILL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GMFKFFBMACL(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*))((::PBYTE)hIl2Cpp + ONLODOCLGPF_GMFKFFBMACL_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLODOCLGPF_TOSTRING_OFFSET))(this);
		}

	};
