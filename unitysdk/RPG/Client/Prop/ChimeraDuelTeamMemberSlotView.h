#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop { class ChimeraArrangementModelInstance_MotionConfig; }
namespace RPG::Client::Prop { class ChimeraDuelShopChimeraInstanceView; }
namespace RPG::Client::Prop { class ChimeraDuelTeamMemberSlotView_FOBDABJMCKM; }
namespace System { class Action; }

#define RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xDC74AB0)
#define RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_DDAIPBEGPJE_OFFSET UNITYSDK_OFFSET(0xDC74830)
#define RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_EPCCCIKOHJI_OFFSET UNITYSDK_OFFSET(0xDC6D9C0)
#define RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_GMFPJBHDMJF_OFFSET UNITYSDK_OFFSET(0xDC74540)
#define RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_IEFINBICOGM_OFFSET UNITYSDK_OFFSET(0xDC74630)
#define RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_KEBEIGGJIPA_OFFSET UNITYSDK_OFFSET(0xDC74200)
#define RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0xDC747E0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelTeamMemberSlotView_TypeDefinitionIndex = 78360;

	class ChimeraDuelTeamMemberSlotView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Prop::ChimeraDuelTeamMemberSlotView_FOBDABJMCKM* EPKIDMNCGAA; // 0x18
		::RPG::Client::Prop::ChimeraArrangementModelInstance_MotionConfig* CMKFBCIKJIC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_CTOR_OFFSET))(this);
		}

		::System::Void EPCCCIKOHJI(::RPG::Client::Prop::ChimeraArrangementModelInstance_MotionConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraArrangementModelInstance_MotionConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_EPCCCIKOHJI_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_UPDATE_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelShopChimeraInstanceView* KEBEIGGJIPA()
		{
			return ((::RPG::Client::Prop::ChimeraDuelShopChimeraInstanceView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_KEBEIGGJIPA_OFFSET))(this);
		}

		::System::Void IEFINBICOGM(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_IEFINBICOGM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DDAIPBEGPJE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_DDAIPBEGPJE_OFFSET))(this, a1);
		}

		::System::Void GMFPJBHDMJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_GMFPJBHDMJF_OFFSET))(this);
		}

	};
}
