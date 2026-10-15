#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByStatusCount; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAB510)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSCOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAAB750)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAB520)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAB4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByStatusCount_TypeDefinitionIndex = 23087;

	class SetDynamicValueByStatusCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::TargetEvaluator* CasterFilter; // 0x30
		::RPG::GameCore::EnumStatusType StatusType; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByStatusCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByStatusCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByStatusCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByStatusCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSCOUNT_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
