#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetTargetDamageTextVisible; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETTARGETDAMAGETEXTVISIBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC51F0)
#define RPG_GAMECORE_SETTARGETDAMAGETEXTVISIBLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC5200)
#define RPG_GAMECORE_SETTARGETDAMAGETEXTVISIBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC51C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetDamageTextVisible_TypeDefinitionIndex = 23215;

	class SetTargetDamageTextVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Visible; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* UniqueName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETDAMAGETEXTVISIBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetDamageTextVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetDamageTextVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETDAMAGETEXTVISIBLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetDamageTextVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetDamageTextVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETDAMAGETEXTVISIBLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
