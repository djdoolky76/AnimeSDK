#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropSetupHitBox; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PROPSETUPHITBOX_CTOR_OFFSET UNITYSDK_OFFSET(0x1D954F50)
#define RPG_GAMECORE_PROPSETUPHITBOX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D954F80)
#define RPG_GAMECORE_PROPSETUPHITBOX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D954F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetupHitBox_TypeDefinitionIndex = 20392;

	class PropSetupHitBox : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ColliderRelativePath; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeHit; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPHITBOX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetupHitBox* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetupHitBox*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPHITBOX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetupHitBox* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetupHitBox*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPHITBOX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
