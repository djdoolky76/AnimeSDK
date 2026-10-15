#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Attribute.h"

#define IMJLNAHPPOO_CTOR_OFFSET UNITYSDK_OFFSET(0x164DD240)
#define IMJLNAHPPOO_GET_TARGETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x164DD250)

	class IMJLNAHPPOO : public ::System::Attribute
	{
	public:
		::RPG::GameCore::EventType _TargetEventType_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::GameCore::EventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventType))((::PBYTE)hIl2Cpp + IMJLNAHPPOO_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::EventType get_TargetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJLNAHPPOO_GET_TARGETEVENTTYPE_OFFSET))(this);
		}

	};
