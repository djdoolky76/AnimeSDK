#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class FOACJPEHDKO;
namespace RPG::Client::MechCraft::View { class MechCraftTalentPathControlBinder; }
namespace RPG::Client::MechCraft::View { class MechCraftTalentPointControl; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD66A8B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROL_FINDFIRSTREADYPOINT_OFFSET UNITYSDK_OFFSET(0xD66A6A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROL_FINDPOINTCONTROL_OFFSET UNITYSDK_OFFSET(0xD66A3A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROL_HEHMNGANAJO_OFFSET UNITYSDK_OFFSET(0xD669DE0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD669E40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROL_KCEDLPGDJLN_OFFSET UNITYSDK_OFFSET(0xD669DA0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentPathControl_TypeDefinitionIndex = 80069;

	class MechCraftTalentPathControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::FOACJPEHDKO* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftTalentPathControlBinder* _Binder; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MechCraft::View::MechCraftTalentPointControl*>* _PointControls; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROL_CTOR_OFFSET))(this);
		}

		::FOACJPEHDKO* KCEDLPGDJLN()
		{
			return ((::FOACJPEHDKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROL_KCEDLPGDJLN_OFFSET))(this);
		}

		::System::Void HEHMNGANAJO(::FOACJPEHDKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOACJPEHDKO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROL_HEHMNGANAJO_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::FOACJPEHDKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOACJPEHDKO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::View::MechCraftTalentPointControl* FindPointControl(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
		{
			return ((::RPG::Client::MechCraft::View::MechCraftTalentPointControl*(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROL_FINDPOINTCONTROL_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::View::MechCraftTalentPointControl* FindFirstReadyPoint()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftTalentPointControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROL_FINDFIRSTREADYPOINT_OFFSET))(this);
		}

	};
}
