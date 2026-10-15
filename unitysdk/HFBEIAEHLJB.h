#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFBEIAEHLJB;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define HFBEIAEHLJB_CCTOR_OFFSET UNITYSDK_OFFSET(0x15C5BF60)
#define HFBEIAEHLJB_CLEAR_OFFSET UNITYSDK_OFFSET(0x15C5BED0)
#define HFBEIAEHLJB_CTOR_OFFSET UNITYSDK_OFFSET(0x15C5BF50)
#define HFBEIAEHLJB_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x15C5BF20)
#define HFBEIAEHLJB_OCDEKPOLHOM_OFFSET UNITYSDK_OFFSET(0x15C5BE40)

inline static constexpr unsigned int HFBEIAEHLJB_TypeDefinitionIndex = 59028;

	class HFBEIAEHLJB : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* AMOFODFOLMI; // 0x10
		::UnityEngine::Transform* LAJLLONHPIN; // 0x18
		::UnityEngine::Animator* GGGAOBEGLMF; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* LLOJAIPHMJF; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Collider*>* HOMINEFDDAH; // 0x30
		::System::Boolean AHCKLBHFBNF; // 0x38
		::System::Boolean MDFJGHEHHJG; // 0x39
		::System::Boolean PGMGKJFDEBJ; // 0x3A
		static ::HFBEIAEHLJB** StaticGet__Default_k__BackingField()
		{
			return (::HFBEIAEHLJB**)UnitySDK::FromName("", "HFBEIAEHLJB")->GetStaticField(0x111D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBEIAEHLJB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFBEIAEHLJB_CCTOR_OFFSET))();
		}

		::System::Int32 OCDEKPOLHOM(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HFBEIAEHLJB_OCDEKPOLHOM_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBEIAEHLJB_CLEAR_OFFSET))(this);
		}

		static ::HFBEIAEHLJB* get_Default()
		{
			return ((::HFBEIAEHLJB*(*)())((::PBYTE)hIl2Cpp + HFBEIAEHLJB_GET_DEFAULT_OFFSET))();
		}

	};
