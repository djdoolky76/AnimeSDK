#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceNodeVariantListControl_HFPNHKBKHDM_GFNIIPJFIFE; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_HFPNHKBKHDM_CTOR_OFFSET UNITYSDK_OFFSET(0xC945D80)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_HFPNHKBKHDM_GET_BINDITEM_OFFSET UNITYSDK_OFFSET(0xC945F10)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_HFPNHKBKHDM_GET_CREATEITEM_OFFSET UNITYSDK_OFFSET(0xC945F00)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceNodeVariantListControl_HFPNHKBKHDM_TypeDefinitionIndex = 81528;

	class ChallengeTierceNodeVariantListControl_HFPNHKBKHDM : public ::System::Object
	{
	public:
		::System::Func_1<::UnityEngine::GameObject*>* _CreateItem_k__BackingField; // 0x10
		::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_HFPNHKBKHDM_GFNIIPJFIFE* _BindItem_k__BackingField; // 0x18
		::System::Int32 LINLNNHIBAK; // 0x20
		::System::Void _ctor(::System::Int32 a1, ::System::Func_1<::UnityEngine::GameObject*>* a2, ::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_HFPNHKBKHDM_GFNIIPJFIFE* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_1<::UnityEngine::GameObject*>*, ::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_HFPNHKBKHDM_GFNIIPJFIFE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_HFPNHKBKHDM_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Func_1<::UnityEngine::GameObject*>* get_CreateItem()
		{
			return ((::System::Func_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_HFPNHKBKHDM_GET_CREATEITEM_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_HFPNHKBKHDM_GFNIIPJFIFE* get_BindItem()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_HFPNHKBKHDM_GFNIIPJFIFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_HFPNHKBKHDM_GET_BINDITEM_OFFSET))(this);
		}

	};
}
