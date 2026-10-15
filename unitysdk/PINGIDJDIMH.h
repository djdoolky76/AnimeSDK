#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatIgnoreDefendPointType.h"
#include "unitysdk/System/Object.h"

#define PINGIDJDIMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7ED520)

	class PINGIDJDIMH : public ::System::Object
	{
	public:
		::System::Int32 CIIBJHAMJCK; // 0x10
		::RPG::GameCore::DiceCombatIgnoreDefendPointType PCBNGAJDNGD; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PINGIDJDIMH_CTOR_OFFSET))(this);
		}

	};
