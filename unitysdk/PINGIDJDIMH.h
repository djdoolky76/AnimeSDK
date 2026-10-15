#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatIgnoreDefendPointType.h"
#include "unitysdk/System/Object.h"

#define PINGIDJDIMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7BF3B0)

inline static constexpr unsigned int PINGIDJDIMH_TypeDefinitionIndex = 36467;

	class PINGIDJDIMH : public ::System::Object
	{
	public:
		::RPG::GameCore::DiceCombatIgnoreDefendPointType PCBNGAJDNGD; // 0x10
		::System::Int32 CIIBJHAMJCK; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PINGIDJDIMH_CTOR_OFFSET))(this);
		}

	};
