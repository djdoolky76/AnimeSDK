#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByHitSplitRatio; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYHITSPLITRATIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA6910)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHITSPLITRATIO_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAA6A90)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHITSPLITRATIO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA6920)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHITSPLITRATIO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA68E0)

namespace RPG::GameCore
{
	class SetDynamicValueByHitSplitRatio : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHITSPLITRATIO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByHitSplitRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByHitSplitRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHITSPLITRATIO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByHitSplitRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByHitSplitRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHITSPLITRATIO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHITSPLITRATIO_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
