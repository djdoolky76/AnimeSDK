#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByWaitUltraCount; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYWAITULTRACOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAACFC0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWAITULTRACOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAAD140)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWAITULTRACOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAACFD0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWAITULTRACOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAACF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByWaitUltraCount_TypeDefinitionIndex = 23701;

	class SetDynamicValueByWaitUltraCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWAITULTRACOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByWaitUltraCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByWaitUltraCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWAITULTRACOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByWaitUltraCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByWaitUltraCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWAITULTRACOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWAITULTRACOUNT_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
