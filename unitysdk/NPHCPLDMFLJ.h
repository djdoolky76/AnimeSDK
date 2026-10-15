#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
class NPHCPLDMFLJ;
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class OnEventCallBack; }

#define NPHCPLDMFLJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBCFDE20)
#define NPHCPLDMFLJ_ECGALHNIEOC_OFFSET UNITYSDK_OFFSET(0xBCFDE30)
#define NPHCPLDMFLJ_FFHNOMIDEDE_OFFSET UNITYSDK_OFFSET(0xBCFDE90)
#define NPHCPLDMFLJ_ONFCJOECHHJ_OFFSET UNITYSDK_OFFSET(0xBCFDD30)

inline static constexpr unsigned int NPHCPLDMFLJ_TypeDefinitionIndex = 68238;

	class NPHCPLDMFLJ : public ::System::Object
	{
	public:
		::RPG::GameCore::EventManager* BIOMICKJCKG; // 0x10
		::RPG::GameCore::OnEventCallBack* DALPPBMDAMD; // 0x18
		::System::UInt32 LEMGPNFEFJD; // 0x20
		::RPG::GameCore::EventType JNPBFPGIMOC; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHCPLDMFLJ_CTOR_OFFSET))(this);
		}

		static ::NPHCPLDMFLJ* ONFCJOECHHJ(::RPG::GameCore::EventType a1, ::System::UInt32 a2, ::RPG::GameCore::OnEventCallBack* a3, ::RPG::GameCore::EventManager* a4)
		{
			return ((::NPHCPLDMFLJ*(*)(::RPG::GameCore::EventType, ::System::UInt32, ::RPG::GameCore::OnEventCallBack*, ::RPG::GameCore::EventManager*))((::PBYTE)hIl2Cpp + NPHCPLDMFLJ_ONFCJOECHHJ_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void ECGALHNIEOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHCPLDMFLJ_ECGALHNIEOC_OFFSET))(this);
		}

		::System::Void FFHNOMIDEDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHCPLDMFLJ_FFHNOMIDEDE_OFFSET))(this);
		}

	};
