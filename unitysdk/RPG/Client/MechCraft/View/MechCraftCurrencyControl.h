#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class DILIKOIGENM;
namespace RPG::Client::MechCraft::View { class MechCraftCurrencyControlBinder; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCURRENCYCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE0C94F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCURRENCYCONTROL_HEHMNGANAJO_OFFSET UNITYSDK_OFFSET(0xE0C9090)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCURRENCYCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xE0C90F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCURRENCYCONTROL_KCEDLPGDJLN_OFFSET UNITYSDK_OFFSET(0xE0C9050)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCurrencyControl_TypeDefinitionIndex = 82592;

	class MechCraftCurrencyControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::DILIKOIGENM* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftCurrencyControlBinder* _Binder; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCURRENCYCONTROL_CTOR_OFFSET))(this);
		}

		::DILIKOIGENM* KCEDLPGDJLN()
		{
			return ((::DILIKOIGENM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCURRENCYCONTROL_KCEDLPGDJLN_OFFSET))(this);
		}

		::System::Void HEHMNGANAJO(::DILIKOIGENM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DILIKOIGENM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCURRENCYCONTROL_HEHMNGANAJO_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::DILIKOIGENM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DILIKOIGENM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCURRENCYCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
