#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHFOAJNBOP;
namespace Foundation::Unreal { class SerializableGameplayTagQuery; }

#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTGAMEPLAYTAGEXPRESSIONCONFIG_CREATEEFFECTEXPRESSIONCONFIG_OFFSET UNITYSDK_OFFSET(0x13EEA050)
#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTGAMEPLAYTAGEXPRESSIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13EEA450)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int EffectGameplayTagExpressionConfig_TypeDefinitionIndex = 93008;

	class EffectGameplayTagExpressionConfig : public ::System::Object
	{
	public:
		::Foundation::Unreal::SerializableGameplayTagQuery* PreGameplayTagQuery; // 0x10
		::Foundation::Unreal::SerializableGameplayTagQuery* CurGameplayTagQuery; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTGAMEPLAYTAGEXPRESSIONCONFIG__CTOR_OFFSET))(this);
		}

		::BPHFOAJNBOP* CreateEffectExpressionConfig()
		{
			return ((::BPHFOAJNBOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTGAMEPLAYTAGEXPRESSIONCONFIG_CREATEEFFECTEXPRESSIONCONFIG_OFFSET))(this);
		}
	};
}
