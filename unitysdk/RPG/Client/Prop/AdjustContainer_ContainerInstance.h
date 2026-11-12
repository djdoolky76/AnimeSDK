#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::Prop { class AdjustContainer; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_CBFPCGALLEP_OFFSET UNITYSDK_OFFSET(0xE6AFCA0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0xE6B28B0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xE6ABB60)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_HDJHDKLHLAM_OFFSET UNITYSDK_OFFSET(0xE6AFEB0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_IAMBACMHHHJ_OFFSET UNITYSDK_OFFSET(0xE6B22B0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_IEBLKLMPKAK_OFFSET UNITYSDK_OFFSET(0xE6AFBF0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_ILHMIIBGBCB_OFFSET UNITYSDK_OFFSET(0xE6AE6D0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_JJCMGLAGJHE_OFFSET UNITYSDK_OFFSET(0xE6B1760)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xE6AC1F0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_JNGOHOONBAK_OFFSET UNITYSDK_OFFSET(0xE6B2800)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xE6ACB50)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_NJOBMENFBFJ_OFFSET UNITYSDK_OFFSET(0xE6ADD10)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xE6AD440)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_PPEANEDLNDF_OFFSET UNITYSDK_OFFSET(0xE6AFD00)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE___REGENERATENOREUSE_B__11_0_OFFSET UNITYSDK_OFFSET(0xE6B2960)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE___REGENERATENOREUSE_B__11_1_OFFSET UNITYSDK_OFFSET(0xE6B2970)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AdjustContainer_ContainerInstance_TypeDefinitionIndex = 80929;

	class AdjustContainer_ContainerInstance : public ::System::Object
	{
	public:
		::UnityEngine::Transform* ContainerRoot; // 0x10
		::UnityEngine::GameObject* ContainerItem; // 0x18
		::System::String* ContainerPrefabAssetPath; // 0x20
		::System::Single ContainerLength; // 0x28
		::System::Single ContainerMoveLength; // 0x2C
		::System::Int32 AdjustRange; // 0x30
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Int32>* ContainerIndexArr; // 0x38
		::System::Single SpeedUpDistance; // 0x40
		::System::Single SpeedUpRatio; // 0x44
		::RPG::Client::Prop::AdjustContainer* OwnerAdjustContainerRef; // 0x48
		::System::Single CurStep; // 0x50
		::System::Boolean IsMoveRight; // 0x54
		::System::Byte _padding1[0x3];
		::System::Int32 CurrentPosIndex; // 0x58
		::UnityEngine::Vector3 _UnitOffset; // 0x5C
		::UnityEngine::Vector3 _OriginPosition; // 0x68
		::System::Nullable_1<::UnityEngine::Vector3> _NextPosition; // 0x74
		::System::Byte _padding2[0x8];
		::System::Single _CurSpeed; // 0x84
		::System::Single _SpeedUpStep; // 0x88
		::System::Single _MovedDistance; // 0x8C
		::System::Single _TotalDistance; // 0x90
		::System::Byte _padding3[0x4];
		::System::Action* _MoveFinishCallback; // 0x98
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* _StreamingItem; // 0xA0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB(::RPG::Client::Prop::AdjustContainer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::AdjustContainer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_KHGIKBFDLFB_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void HDJHDKLHLAM(::System::Boolean a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_HDJHDKLHLAM_OFFSET))(this, a1, a2);
		}

		::System::Void ILHMIIBGBCB(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_ILHMIIBGBCB_OFFSET))(this, a1, a2);
		}

		::System::Void NJOBMENFBFJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_NJOBMENFBFJ_OFFSET))(this, a1);
		}

		::System::Boolean IEBLKLMPKAK(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_IEBLKLMPKAK_OFFSET))(this, a1);
		}

		::System::Int32 CBFPCGALLEP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_CBFPCGALLEP_OFFSET))(this);
		}

		::System::Int32 PPEANEDLNDF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_PPEANEDLNDF_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void IAMBACMHHHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_IAMBACMHHHJ_OFFSET))(this);
		}

		::System::Void JJCMGLAGJHE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_JJCMGLAGJHE_OFFSET))(this, a1);
		}

		::System::Void JNGOHOONBAK(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_JNGOHOONBAK_OFFSET))(this, a1, a2);
		}

		::System::Void __ReGenerateNoReUse_b__11_0(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE___REGENERATENOREUSE_B__11_0_OFFSET))(this, a1, a2);
		}

		::System::Void __ReGenerateNoReUse_b__11_1(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE___REGENERATENOREUSE_B__11_1_OFFSET))(this, a1, a2, a3);
		}

	};
}
