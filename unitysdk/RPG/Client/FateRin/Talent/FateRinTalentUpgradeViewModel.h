#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
class AFBIFEGDJMM;
namespace RPG::Client::FateRin::Talent { class FateRinTalentViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define RPG_CLIENT_FATERIN_TALENT_FATERINTALENTUPGRADEVIEWMODEL_ASYNCINITIALIZE_OFFSET UNITYSDK_OFFSET(0xCFB1B60)
#define RPG_CLIENT_FATERIN_TALENT_FATERINTALENTUPGRADEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCFB1AE0)
#define RPG_CLIENT_FATERIN_TALENT_FATERINTALENTUPGRADEVIEWMODEL_GET_TALENT_OFFSET UNITYSDK_OFFSET(0xCFB1F50)
#define RPG_CLIENT_FATERIN_TALENT_FATERINTALENTUPGRADEVIEWMODEL_SET_TALENT_OFFSET UNITYSDK_OFFSET(0xCFB1F60)

namespace RPG::Client::FateRin::Talent
{
	inline static constexpr unsigned int FateRinTalentUpgradeViewModel_TypeDefinitionIndex = 80726;

	class FateRinTalentUpgradeViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::AFBIFEGDJMM* _Service; // 0x20
		::RPG::Client::FateRin::Talent::FateRinTalentViewModel* _Talent_k__BackingField; // 0x28
		::System::Void _ctor(::AFBIFEGDJMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFBIFEGDJMM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TALENT_FATERINTALENTUPGRADEVIEWMODEL_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* AsyncInitialize(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TALENT_FATERINTALENTUPGRADEVIEWMODEL_ASYNCINITIALIZE_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Talent::FateRinTalentViewModel* get_Talent()
		{
			return ((::RPG::Client::FateRin::Talent::FateRinTalentViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TALENT_FATERINTALENTUPGRADEVIEWMODEL_GET_TALENT_OFFSET))(this);
		}

		::System::Void set_Talent(::RPG::Client::FateRin::Talent::FateRinTalentViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Talent::FateRinTalentViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TALENT_FATERINTALENTUPGRADEVIEWMODEL_SET_TALENT_OFFSET))(this, a1);
		}

	};
}
