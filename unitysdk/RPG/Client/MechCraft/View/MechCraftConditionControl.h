#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class PMCMFJMFOCH;
namespace RPG::Client::MechCraft::View { class MechCraftConditionControlBinder; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCONDITIONCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD5ED6D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCONDITIONCONTROL_HEHMNGANAJO_OFFSET UNITYSDK_OFFSET(0xD5ED410)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCONDITIONCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD5ED470)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCONDITIONCONTROL_KCEDLPGDJLN_OFFSET UNITYSDK_OFFSET(0xD5ED3D0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftConditionControl_TypeDefinitionIndex = 79988;

	class MechCraftConditionControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::PMCMFJMFOCH* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftConditionControlBinder* _Binder; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCONDITIONCONTROL_CTOR_OFFSET))(this);
		}

		::PMCMFJMFOCH* KCEDLPGDJLN()
		{
			return ((::PMCMFJMFOCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCONDITIONCONTROL_KCEDLPGDJLN_OFFSET))(this);
		}

		::System::Void HEHMNGANAJO(::PMCMFJMFOCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMCMFJMFOCH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCONDITIONCONTROL_HEHMNGANAJO_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::PMCMFJMFOCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMCMFJMFOCH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCONDITIONCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
