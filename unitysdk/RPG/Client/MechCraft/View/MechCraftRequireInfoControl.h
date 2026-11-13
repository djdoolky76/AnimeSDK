#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class CELAKJDDDOH;
namespace RPG::Client::MechCraft::View { class MechCraftRequireInfoControlBinder; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREQUIREINFOCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF2D50)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREQUIREINFOCONTROL_HEHMNGANAJO_OFFSET UNITYSDK_OFFSET(0x1DED8860)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREQUIREINFOCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1DEF2A50)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREQUIREINFOCONTROL_KCEDLPGDJLN_OFFSET UNITYSDK_OFFSET(0x1DEF2A10)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftRequireInfoControl_TypeDefinitionIndex = 82774;

	class MechCraftRequireInfoControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::CELAKJDDDOH* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftRequireInfoControlBinder* _Binder; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREQUIREINFOCONTROL_CTOR_OFFSET))(this);
		}

		::CELAKJDDDOH* KCEDLPGDJLN()
		{
			return ((::CELAKJDDDOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREQUIREINFOCONTROL_KCEDLPGDJLN_OFFSET))(this);
		}

		::System::Void HEHMNGANAJO(::CELAKJDDDOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CELAKJDDDOH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREQUIREINFOCONTROL_HEHMNGANAJO_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::CELAKJDDDOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CELAKJDDDOH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREQUIREINFOCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
