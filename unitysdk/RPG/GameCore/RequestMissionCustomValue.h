#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class RequestMissionCustomValue; }

#define RPG_GAMECORE_REQUESTMISSIONCUSTOMVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D989300)
#define RPG_GAMECORE_REQUESTMISSIONCUSTOMVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D989370)
#define RPG_GAMECORE_REQUESTMISSIONCUSTOMVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D989270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RequestMissionCustomValue_TypeDefinitionIndex = 20445;

	class RequestMissionCustomValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* DynamicMainMissionID; // 0x18
		::RPG::GameCore::DynamicString* DynamicMcvName; // 0x20
		::System::UInt32 CustomValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTMISSIONCUSTOMVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RequestMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RequestMissionCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTMISSIONCUSTOMVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RequestMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RequestMissionCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTMISSIONCUSTOMVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
