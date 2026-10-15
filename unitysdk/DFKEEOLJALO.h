#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class CEBMNLPNKFL;
class DFKEEOLJALO;
namespace RPG::GameCore { class GameEntity; }

#define DFKEEOLJALO_AEOAJANLCMF_OFFSET UNITYSDK_OFFSET(0xE826320)
#define DFKEEOLJALO_CTOR_OFFSET UNITYSDK_OFFSET(0xE826340)
#define DFKEEOLJALO_DIHJGCDENCI_OFFSET UNITYSDK_OFFSET(0xE826330)
#define DFKEEOLJALO_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE8262D0)
#define DFKEEOLJALO_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE826280)
#define DFKEEOLJALO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE826220)

inline static constexpr unsigned int DFKEEOLJALO_TypeDefinitionIndex = 56687;

	class DFKEEOLJALO : public ::CMPGEAFHHDC
	{
	public:
		::CEBMNLPNKFL* IOCCPIBBCNA; // 0x18
		::RPG::GameCore::GameEntity* JFCIBPBJFGC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKEEOLJALO_CTOR_OFFSET))(this);
		}

		::DFKEEOLJALO* KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::CEBMNLPNKFL* a2)
		{
			return ((::DFKEEOLJALO*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::CEBMNLPNKFL*))((::PBYTE)hIl2Cpp + DFKEEOLJALO_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKEEOLJALO_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKEEOLJALO_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* AEOAJANLCMF()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKEEOLJALO_AEOAJANLCMF_OFFSET))(this);
		}

		::CEBMNLPNKFL* DIHJGCDENCI()
		{
			return ((::CEBMNLPNKFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKEEOLJALO_DIHJGCDENCI_OFFSET))(this);
		}

	};
