#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class MonoEffect; }

#define EAPGFKLGCDH_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0x2309240)
#define EAPGFKLGCDH_CTOR_OFFSET UNITYSDK_OFFSET(0xE590)
#define EAPGFKLGCDH_DPDJBAPAJPK_OFFSET UNITYSDK_OFFSET(0x2309190)
#define EAPGFKLGCDH_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x23091F0)

inline static constexpr unsigned int EAPGFKLGCDH_TypeDefinitionIndex = 69921;

	struct alignas(8) EAPGFKLGCDH
	{
		::System::UInt32 GDBJDAOOCOH; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::MonoEffect* LNGIDPGDHCL; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::MonoEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + EAPGFKLGCDH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean DPDJBAPAJPK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPGFKLGCDH_DPDJBAPAJPK_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPGFKLGCDH_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void AALCFBOGFKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPGFKLGCDH_AALCFBOGFKP_OFFSET))(this);
		}

	};
