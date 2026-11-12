#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IncreaseMissionCustomValue; }

#define RPG_GAMECORE_INCREASEMISSIONCUSTOMVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9999B0)
#define RPG_GAMECORE_INCREASEMISSIONCUSTOMVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9999C0)
#define RPG_GAMECORE_INCREASEMISSIONCUSTOMVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E999980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IncreaseMissionCustomValue_TypeDefinitionIndex = 20779;

	class IncreaseMissionCustomValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubmissionID; // 0x18
		::System::Int32 CustomValue; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCREASEMISSIONCUSTOMVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::IncreaseMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IncreaseMissionCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCREASEMISSIONCUSTOMVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::IncreaseMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IncreaseMissionCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCREASEMISSIONCUSTOMVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
