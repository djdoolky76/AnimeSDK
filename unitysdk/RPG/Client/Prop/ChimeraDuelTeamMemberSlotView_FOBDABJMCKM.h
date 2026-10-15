#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop { class ChimeraDuelShopChimeraInstanceView; }
namespace System { class Action; }

#define RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_FOBDABJMCKM_CTOR_OFFSET UNITYSDK_OFFSET(0xDC74AF0)

namespace RPG::Client::Prop
{
	class ChimeraDuelTeamMemberSlotView_FOBDABJMCKM : public ::System::Object
	{
	public:
		::System::Action* MGJLINFADJK; // 0x10
		::RPG::Client::Prop::ChimeraDuelShopChimeraInstanceView* FMJPMFEDIJL; // 0x18
		::UnityEngine::Quaternion HDEPGDKCFJK; // 0x20
		::UnityEngine::Quaternion IBAPNDLNFMO; // 0x30
		::System::Boolean CAGCHKJHMPD; // 0x40
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 PGJJCGGBCKK; // 0x44
		::UnityEngine::Vector3 OAKCBDDKNKL; // 0x50
		::System::Single GAFENHHEBPG; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_FOBDABJMCKM_CTOR_OFFSET))(this);
		}

	};
}
