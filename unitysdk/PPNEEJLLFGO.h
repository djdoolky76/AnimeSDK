#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define PPNEEJLLFGO_AEOAJANLCMF_OFFSET UNITYSDK_OFFSET(0xC3952C0)
#define PPNEEJLLFGO_BHBHABIGGDI_OFFSET UNITYSDK_OFFSET(0xC3952D0)
#define PPNEEJLLFGO_CTOR_OFFSET UNITYSDK_OFFSET(0xC395210)
#define PPNEEJLLFGO_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xC395270)
#define PPNEEJLLFGO_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xC395220)
#define PPNEEJLLFGO_JFCHEALPNIA_OFFSET UNITYSDK_OFFSET(0xC3952E0)

	class PPNEEJLLFGO : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* JFCIBPBJFGC; // 0x10
		::System::Boolean MLEPOBBCOKI; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::TeamType GJHCMKBNING; // 0x1C
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TeamType a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamType, ::System::Boolean))((::PBYTE)hIl2Cpp + PPNEEJLLFGO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNEEJLLFGO_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNEEJLLFGO_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* AEOAJANLCMF()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNEEJLLFGO_AEOAJANLCMF_OFFSET))(this);
		}

		::RPG::GameCore::TeamType BHBHABIGGDI()
		{
			return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNEEJLLFGO_BHBHABIGGDI_OFFSET))(this);
		}

		::System::Boolean JFCHEALPNIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNEEJLLFGO_JFCHEALPNIA_OFFSET))(this);
		}

	};
