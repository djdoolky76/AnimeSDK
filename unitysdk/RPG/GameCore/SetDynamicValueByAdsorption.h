#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/ParamRoundingType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropertyAdsorptionConfig; }
namespace RPG::GameCore { class SetDynamicValueByAdsorption; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYADSORPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA73830)
#define RPG_GAMECORE_SETDYNAMICVALUEBYADSORPTION_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA73A40)
#define RPG_GAMECORE_SETDYNAMICVALUEBYADSORPTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA73840)
#define RPG_GAMECORE_SETDYNAMICVALUEBYADSORPTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA73800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByAdsorption_TypeDefinitionIndex = 23836;

	class SetDynamicValueByAdsorption : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::ParamRoundingType RoundingType; // 0x24
		::RPG::GameCore::PropertyAdsorptionConfig* AdsorptionConfig; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYADSORPTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByAdsorption* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByAdsorption*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYADSORPTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByAdsorption* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByAdsorption*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYADSORPTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYADSORPTION_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
