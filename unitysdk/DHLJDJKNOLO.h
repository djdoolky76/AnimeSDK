#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNCLNAFILDC.h"
#include "unitysdk/RPG/Client/NotifyType.h"
namespace RPG::Client { class NotifyHandler; }
namespace System { class Object; }

#define DHLJDJKNOLO_CMMHAKEAFAC_OFFSET UNITYSDK_OFFSET(0xEBE8A30)
#define DHLJDJKNOLO_CTOR_OFFSET UNITYSDK_OFFSET(0xEBE8A80)
#define DHLJDJKNOLO_GNDEALGPILP_OFFSET UNITYSDK_OFFSET(0xEBE8940)
#define DHLJDJKNOLO_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0xEBE8900)
#define DHLJDJKNOLO_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0xEBE86D0)
#define DHLJDJKNOLO_MHDCDNHDBKB_OFFSET UNITYSDK_OFFSET(0xEBE89D0)

inline static constexpr unsigned int DHLJDJKNOLO_TypeDefinitionIndex = 58862;

	class DHLJDJKNOLO : public ::CNCLNAFILDC
	{
	public:
		::RPG::Client::NotifyHandler* EIFAJHFPECJ; // 0x40
		::RPG::Client::NotifyType NNENGKADBBN; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLJDJKNOLO_CTOR_OFFSET))(this);
		}

		::System::Void LHJBPEBMKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLJDJKNOLO_LHJBPEBMKDN_OFFSET))(this);
		}

		::System::Void KOHOGMCJHBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLJDJKNOLO_KOHOGMCJHBH_OFFSET))(this);
		}

		::System::Void GNDEALGPILP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLJDJKNOLO_GNDEALGPILP_OFFSET))(this);
		}

		::System::Void MHDCDNHDBKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLJDJKNOLO_MHDCDNHDBKB_OFFSET))(this);
		}

		::System::Void CMMHAKEAFAC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHLJDJKNOLO_CMMHAKEAFAC_OFFSET))(this, a1);
		}

	};
