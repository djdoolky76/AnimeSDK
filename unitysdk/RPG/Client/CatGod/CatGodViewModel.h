#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"
class OBJANKHLNGO;
namespace Sofa::Core { class SimpleCommand; }

#define RPG_CLIENT_CATGOD_CATGODVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD2A1C70)
#define RPG_CLIENT_CATGOD_CATGODVIEWMODEL_GET_ONBTNGO_OFFSET UNITYSDK_OFFSET(0xD2A1E20)
#define RPG_CLIENT_CATGOD_CATGODVIEWMODEL_GET_ONBTNSTAY_OFFSET UNITYSDK_OFFSET(0xD2A1E00)
#define RPG_CLIENT_CATGOD_CATGODVIEWMODEL_SET_ONBTNGO_OFFSET UNITYSDK_OFFSET(0xD2A1E30)
#define RPG_CLIENT_CATGOD_CATGODVIEWMODEL_SET_ONBTNSTAY_OFFSET UNITYSDK_OFFSET(0xD2A1E10)

namespace RPG::Client::CatGod
{
	inline static constexpr unsigned int CatGodViewModel_TypeDefinitionIndex = 84437;

	class CatGodViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Sofa::Core::SimpleCommand* _OnBtnGo_k__BackingField; // 0x20
		::OBJANKHLNGO* _Messenger; // 0x28
		::Sofa::Core::SimpleCommand* _OnBtnStay_k__BackingField; // 0x30
		::System::Void _ctor(::OBJANKHLNGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODVIEWMODEL_CTOR_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnStay()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODVIEWMODEL_GET_ONBTNSTAY_OFFSET))(this);
		}

		::System::Void set_OnBtnStay(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODVIEWMODEL_SET_ONBTNSTAY_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnGo()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODVIEWMODEL_GET_ONBTNGO_OFFSET))(this);
		}

		::System::Void set_OnBtnGo(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODVIEWMODEL_SET_ONBTNGO_OFFSET))(this, a1);
		}

	};
}
