#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGICFAFGCPA.h"
class CCFBPCBMINH;
namespace RPG::Client { class SolarSystemConfig; }
namespace System { class String; }

#define ONLODOCLGPF_BIHKNODHIDI_OFFSET UNITYSDK_OFFSET(0xC85BDE0)
#define ONLODOCLGPF_CTOR_1_OFFSET UNITYSDK_OFFSET(0xC85BD80)
#define ONLODOCLGPF_CTOR_OFFSET UNITYSDK_OFFSET(0xC85BD70)
#define ONLODOCLGPF_DGPLBNAIIGN_OFFSET UNITYSDK_OFFSET(0xC85BD90)
#define ONLODOCLGPF_GMFKFFBMACL_OFFSET UNITYSDK_OFFSET(0xC85BF30)
#define ONLODOCLGPF_KBFDFOGDILL_OFFSET UNITYSDK_OFFSET(0xC85BE80)
#define ONLODOCLGPF_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC85BFD0)

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
