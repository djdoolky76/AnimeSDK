#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitPhotoGraphResult; }
namespace System { class String; }

#define RPG_GAMECORE_WAITPHOTOGRAPHRESULT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9D690)
#define RPG_GAMECORE_WAITPHOTOGRAPHRESULT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9D6A0)
#define RPG_GAMECORE_WAITPHOTOGRAPHRESULT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9D650)

namespace RPG::GameCore
{
	class WaitPhotoGraphResult : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* WaitPhotoResult; // 0x18
		::System::Boolean CompleteMatch; // 0x20
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFail; // 0x30
		::System::Boolean IsLoop; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPHOTOGRAPHRESULT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPhotoGraphResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPhotoGraphResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPHOTOGRAPHRESULT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPhotoGraphResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPhotoGraphResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPHOTOGRAPHRESULT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
