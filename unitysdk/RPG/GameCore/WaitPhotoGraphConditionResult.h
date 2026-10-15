#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitPhotoGraphConditionResult; }

#define RPG_GAMECORE_WAITPHOTOGRAPHCONDITIONRESULT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9D430)
#define RPG_GAMECORE_WAITPHOTOGRAPHCONDITIONRESULT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9D440)
#define RPG_GAMECORE_WAITPHOTOGRAPHCONDITIONRESULT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9D3F0)

namespace RPG::GameCore
{
	class WaitPhotoGraphConditionResult : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* PhotoName; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFail; // 0x28
		::System::Boolean IsLoop; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPHOTOGRAPHCONDITIONRESULT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPhotoGraphConditionResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPhotoGraphConditionResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPHOTOGRAPHCONDITIONRESULT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPhotoGraphConditionResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPhotoGraphConditionResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPHOTOGRAPHCONDITIONRESULT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
