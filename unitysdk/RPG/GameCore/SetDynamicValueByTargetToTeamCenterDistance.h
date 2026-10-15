#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByTargetToTeamCenterDistance; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYTARGETTOTEAMCENTERDISTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7E380)
#define RPG_GAMECORE_SETDYNAMICVALUEBYTARGETTOTEAMCENTERDISTANCE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA7E5A0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYTARGETTOTEAMCENTERDISTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7E390)
#define RPG_GAMECORE_SETDYNAMICVALUEBYTARGETTOTEAMCENTERDISTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7E340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByTargetToTeamCenterDistance_TypeDefinitionIndex = 22773;

	class SetDynamicValueByTargetToTeamCenterDistance : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Boolean AliveOnly; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTARGETTOTEAMCENTERDISTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByTargetToTeamCenterDistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByTargetToTeamCenterDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTARGETTOTEAMCENTERDISTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByTargetToTeamCenterDistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByTargetToTeamCenterDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTARGETTOTEAMCENTERDISTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTARGETTOTEAMCENTERDISTANCE_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
