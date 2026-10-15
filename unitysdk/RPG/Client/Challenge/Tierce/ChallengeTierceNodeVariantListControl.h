#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceNodeVariantListControl_KHIAAPEMPMN; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_BFELJNIEENB_OFFSET UNITYSDK_OFFSET(0xC94B700)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_BINDVIEWMODEL_1_OFFSET UNITYSDK_OFFSET(0xC94B260)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_BINDVIEWMODEL_2_OFFSET UNITYSDK_OFFSET(0xC94B340)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_BINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC94B160)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xC94C9A0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_GETBOUNDOBJECT_OFFSET UNITYSDK_OFFSET(0xC94B540)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0xC94AFD0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_GET_VARIANTPROVIDER_OFFSET UNITYSDK_OFFSET(0xC94B140)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_HDMAPOPEICI_OFFSET UNITYSDK_OFFSET(0xC94B4A0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_HPMAIAFCNEK_OFFSET UNITYSDK_OFFSET(0xC94B5C0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_IHBKFNGIFCJ_OFFSET UNITYSDK_OFFSET(0xC94C7B0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xC94B070)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_KPPAINPHLGN_OFFSET UNITYSDK_OFFSET(0xC94C880)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0xC94B010)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_SET_VARIANTPROVIDER_OFFSET UNITYSDK_OFFSET(0xC94B150)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceNodeVariantListControl_TypeDefinitionIndex = 81526;

	class ChallengeTierceNodeVariantListControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* GCIKKMGIPIO; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* OKABDJNGLBI; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* KCEOMKFBICF; // 0x28
		::System::Collections::Generic::List_1<::System::Action*>* FOOLPPOKOPJ; // 0x30
		::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_KHIAAPEMPMN* _VariantProvider_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* get_Items()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_GET_ITEMS_OFFSET))(this);
		}

		::System::Void set_Items(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_SET_ITEMS_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_KHIAAPEMPMN* get_VariantProvider()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_KHIAAPEMPMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_GET_VARIANTPROVIDER_OFFSET))(this);
		}

		::System::Void set_VariantProvider(::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_KHIAAPEMPMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_KHIAAPEMPMN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_SET_VARIANTPROVIDER_OFFSET))(this, a1);
		}

		::System::Void BindViewModel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_BINDVIEWMODEL_OFFSET))(this, a1);
		}

		::System::Void BindViewModel_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_BINDVIEWMODEL_1_OFFSET))(this, a1, a2);
		}

		::System::Void BindViewModel_2(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_BINDVIEWMODEL_2_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* GetBoundObject(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_GETBOUNDOBJECT_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Object*>* HDMAPOPEICI(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a1, ::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_KHIAAPEMPMN* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*, ::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_KHIAAPEMPMN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_HDMAPOPEICI_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* BFELJNIEENB(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_BFELJNIEENB_OFFSET))(this, a1);
		}

		::System::Void IHBKFNGIFCJ(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_IHBKFNGIFCJ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Action*>* KPPAINPHLGN(::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Action*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_KPPAINPHLGN_OFFSET))(this, a1, a2);
		}

		::System::Void HPMAIAFCNEK(::System::Collections::Generic::List_1<::System::Action*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Action*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_HPMAIAFCNEK_OFFSET))(this, a1);
		}

	};
}
