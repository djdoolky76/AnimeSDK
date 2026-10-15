#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define OFIOOHMOGEC_AEOAJANLCMF_OFFSET UNITYSDK_OFFSET(0xBE43200)
#define OFIOOHMOGEC_BHBHABIGGDI_OFFSET UNITYSDK_OFFSET(0xBE43210)
#define OFIOOHMOGEC_CTOR_OFFSET UNITYSDK_OFFSET(0xBE43150)
#define OFIOOHMOGEC_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xBE431B0)
#define OFIOOHMOGEC_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBE43160)
#define OFIOOHMOGEC_JFCHEALPNIA_OFFSET UNITYSDK_OFFSET(0xBE43220)

	class OFIOOHMOGEC : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* JFCIBPBJFGC; // 0x10
		::RPG::GameCore::TeamType GJHCMKBNING; // 0x18
		::System::Boolean MLEPOBBCOKI; // 0x1C
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TeamType a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamType, ::System::Boolean))((::PBYTE)hIl2Cpp + OFIOOHMOGEC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIOOHMOGEC_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIOOHMOGEC_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* AEOAJANLCMF()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIOOHMOGEC_AEOAJANLCMF_OFFSET))(this);
		}

		::RPG::GameCore::TeamType BHBHABIGGDI()
		{
			return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIOOHMOGEC_BHBHABIGGDI_OFFSET))(this);
		}

		::System::Boolean JFCHEALPNIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIOOHMOGEC_JFCHEALPNIA_OFFSET))(this);
		}

	};
