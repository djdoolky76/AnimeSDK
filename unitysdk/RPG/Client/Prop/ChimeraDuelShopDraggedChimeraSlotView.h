#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client::Prop { class ChimeraDuelShopChimeraInstanceView; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOTVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xDC72F90)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOTVIEW_KEBEIGGJIPA_OFFSET UNITYSDK_OFFSET(0xDC722E0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelShopDraggedChimeraSlotView_TypeDefinitionIndex = 78358;

	class ChimeraDuelShopDraggedChimeraSlotView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single DragZ; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* DragHandle; // 0x20
		::UnityEngine::Vector2 PickOffset; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOTVIEW_CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelShopChimeraInstanceView* KEBEIGGJIPA()
		{
			return ((::RPG::Client::Prop::ChimeraDuelShopChimeraInstanceView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOTVIEW_KEBEIGGJIPA_OFFSET))(this);
		}

	};
}
