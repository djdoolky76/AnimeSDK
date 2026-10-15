#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CheckLastPhotoGraphResult; }
namespace RPG::GameCore { class PhotoGraphResultContainer; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_CHECKLASTPHOTOGRAPHRESULT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54E360)
#define RPG_GAMECORE_CHECKLASTPHOTOGRAPHRESULT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54E370)
#define RPG_GAMECORE_CHECKLASTPHOTOGRAPHRESULT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54E330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckLastPhotoGraphResult_TypeDefinitionIndex = 21622;

	class CheckLastPhotoGraphResult : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PhotoGraphResultContainer* LastResultContainer; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFail; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKLASTPHOTOGRAPHRESULT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckLastPhotoGraphResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckLastPhotoGraphResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKLASTPHOTOGRAPHRESULT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckLastPhotoGraphResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckLastPhotoGraphResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKLASTPHOTOGRAPHRESULT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
