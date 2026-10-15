#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"
class IOCEFINCMMO;
namespace RPG::Client { class NotifyHandler; }

#define IOCEFINCMMO_CTOR_OFFSET UNITYSDK_OFFSET(0x164FE110)
#define IOCEFINCMMO_FFHNOMIDEDE_OFFSET UNITYSDK_OFFSET(0x164FE120)
#define IOCEFINCMMO_HOAMFPDLAMG_OFFSET UNITYSDK_OFFSET(0x164FE070)

inline static constexpr unsigned int IOCEFINCMMO_TypeDefinitionIndex = 68239;

	class IOCEFINCMMO : public ::System::Object
	{
	public:
		::RPG::Client::NotifyHandler* MBOEDFCNCJF; // 0x10
		::RPG::Client::NotifyType GMCNLFICNOB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCEFINCMMO_CTOR_OFFSET))(this);
		}

		static ::IOCEFINCMMO* HOAMFPDLAMG(::RPG::Client::NotifyType a1, ::RPG::Client::NotifyHandler* a2)
		{
			return ((::IOCEFINCMMO*(*)(::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + IOCEFINCMMO_HOAMFPDLAMG_OFFSET))(a1, a2);
		}

		::System::Void FFHNOMIDEDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCEFINCMMO_FFHNOMIDEDE_OFFSET))(this);
		}

	};
