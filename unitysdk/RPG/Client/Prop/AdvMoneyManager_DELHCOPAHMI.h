#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop { class AdvMoneyManager; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_ADVMONEYMANAGER_DELHCOPAHMI_BNEPHIHMELG_OFFSET UNITYSDK_OFFSET(0xDC0DC10)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_DELHCOPAHMI_CTOR_OFFSET UNITYSDK_OFFSET(0xDC0D550)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_DELHCOPAHMI_ECPPFHICNGC_OFFSET UNITYSDK_OFFSET(0xDC11800)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_DELHCOPAHMI_JLPOMHNGJEP_OFFSET UNITYSDK_OFFSET(0xDC0F020)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AdvMoneyManager_DELHCOPAHMI_TypeDefinitionIndex = 78190;

	class AdvMoneyManager_DELHCOPAHMI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Prop::AdvMoneyManager*>* AFDMPGPMMAB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_DELHCOPAHMI_CTOR_OFFSET))(this);
		}

		::System::Void BNEPHIHMELG(::RPG::Client::Prop::AdvMoneyManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::AdvMoneyManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_DELHCOPAHMI_BNEPHIHMELG_OFFSET))(this, a1);
		}

		::System::Void JLPOMHNGJEP(::RPG::Client::Prop::AdvMoneyManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::AdvMoneyManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_DELHCOPAHMI_JLPOMHNGJEP_OFFSET))(this, a1);
		}

		::System::Void ECPPFHICNGC(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_DELHCOPAHMI_ECPPFHICNGC_OFFSET))(this, a1);
		}

	};
}
