#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client::LittleGame::ComicDessert { class BasketConfigEntry; }
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertDeviceView; }
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertUpgradeBlankClickCatcher; }
namespace RPG::Client::LittleGame::ComicDessert { class DeviceServeConfigEntry; }
namespace RPG::Client::LittleGame::ComicDessert { class MakingConfigEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_AEHNMGLIDOP_OFFSET UNITYSDK_OFFSET(0xDE8EC40)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_AKLLFCBDDNE_OFFSET UNITYSDK_OFFSET(0xDE8F380)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_AOIEAJKGNPF_OFFSET UNITYSDK_OFFSET(0xDE8E240)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_BMAIPHJONBN_OFFSET UNITYSDK_OFFSET(0xDE8E390)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_CCCHGLCKNDA_OFFSET UNITYSDK_OFFSET(0xDE8E2D0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_CNEGBCOKJFL_OFFSET UNITYSDK_OFFSET(0xDE8E310)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_CTOR_OFFSET UNITYSDK_OFFSET(0xDE8FEB0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_DCBCFPKMMOC_OFFSET UNITYSDK_OFFSET(0xDE8EF80)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_EDBCFKAAAAH_OFFSET UNITYSDK_OFFSET(0xDE8F330)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_ELEBMKLFABB_OFFSET UNITYSDK_OFFSET(0xDE8F530)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_FPKJIIMPJBL_OFFSET UNITYSDK_OFFSET(0xDE8E450)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_GEOKIBNGGAH_OFFSET UNITYSDK_OFFSET(0xDE8E200)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_GKFEIHKFMKL_OFFSET UNITYSDK_OFFSET(0xDE8E350)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_GNPNDMOGGNB_OFFSET UNITYSDK_OFFSET(0xDE8E1C0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_GOKKCHOKNML_OFFSET UNITYSDK_OFFSET(0xDE8E290)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_HCCHMDPELAJ_OFFSET UNITYSDK_OFFSET(0xDE8E3D0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_HGCMIKDMHKJ_OFFSET UNITYSDK_OFFSET(0xDE8EE40)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_IPNGBPOGGAD_OFFSET UNITYSDK_OFFSET(0xDE8E180)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_JFIKHLMNEOA_OFFSET UNITYSDK_OFFSET(0xDE8EED0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_JILJECPJBJH_OFFSET UNITYSDK_OFFSET(0xDE8ECF0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_KIACCPGPKCM_OFFSET UNITYSDK_OFFSET(0xDE8FCE0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_KIPFNKPEKJP_OFFSET UNITYSDK_OFFSET(0xDE8FB40)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_LLDMEFPKPIA_OFFSET UNITYSDK_OFFSET(0xDE8F730)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_MCMDALPPIKA_OFFSET UNITYSDK_OFFSET(0xDE8E410)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_MNDCMLOAEBI_OFFSET UNITYSDK_OFFSET(0xDE8E4A0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_MOFLOCLJEHH_OFFSET UNITYSDK_OFFSET(0xDE8F020)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_OHAHDEHIBOL_OFFSET UNITYSDK_OFFSET(0xDE8E140)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xDE8FE60)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_PILPCMNAENO_OFFSET UNITYSDK_OFFSET(0xDE8F5F0)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertSceneRoot_TypeDefinitionIndex = 80096;

	class ComicDessertSceneRoot : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceView*>* _Devices; // 0x18
		::Cinemachine::CinemachineVirtualCamera* _GameVCamera; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ComicDessert::BasketConfigEntry*>* _Baskets; // 0x28
		::System::Single _RestockStepInterval; // 0x30
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ComicDessert::DeviceServeConfigEntry*>* _Serves; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ComicDessert::DeviceServeConfigEntry*>* _SpecialServes; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ComicDessert::MakingConfigEntry*>* _Makings; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _UpgradeHiddenObjects; // 0x50
		::RPG::Client::LittleGame::ComicDessert::ComicDessertUpgradeBlankClickCatcher* _BlankClickCatcher; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _DimTargets; // 0x60
		::System::String* _DimEffectPath; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _FlashRedTargets; // 0x70
		::System::String* _FlashRedEffectPath; // 0x78
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* _TableOccluderRenderers; // 0x80
		::UnityEngine::AnimationClip* NMDMAKJHKCN; // 0x88
		::System::Single JNIFNBBHKLO; // 0x90
		::System::Byte _padding1[0x4];
		::Cinemachine::CinemachineBrain* IEAFFDHFGEP; // 0x98
		::UnityEngine::Vector3 AODNHFIEFHG; // 0xA0
		::UnityEngine::Quaternion FHIAIPICFIC; // 0xAC
		::System::Byte _padding2[0x4];
		::Il2CppArray<::UnityEngine::GameObject*>* PCPFDLAGAPK; // 0xC0
		::Il2CppArray<::UnityEngine::Vector3>* KNEBPNKMFCI; // 0xC8
		::Il2CppArray<::UnityEngine::Transform*>* JGJECLLCDJM; // 0xD0
		::Il2CppArray<::UnityEngine::Vector3>* FKACEMHPEGG; // 0xD8
		::UnityEngine::GameObject* DMPJKGAGIMD; // 0xE0
		::UnityEngine::Transform* HOEOMKLDDFG; // 0xE8
		::UnityEngine::Animation* MKFHPDMAJEE; // 0xF0
		::RPG::Client::MonoAnimationTrigger* JEEOINFFFOK; // 0xF8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceView*>* OHAHDEHIBOL()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceView*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_OHAHDEHIBOL_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCamera* IPNGBPOGGAD()
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_IPNGBPOGGAD_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ComicDessert::ComicDessertUpgradeBlankClickCatcher* GNPNDMOGGNB()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::ComicDessertUpgradeBlankClickCatcher*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_GNPNDMOGGNB_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::BasketConfigEntry*>* GEOKIBNGGAH()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::BasketConfigEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_GEOKIBNGGAH_OFFSET))(this);
		}

		::System::Single AOIEAJKGNPF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_AOIEAJKGNPF_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::DeviceServeConfigEntry*>* GOKKCHOKNML()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::DeviceServeConfigEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_GOKKCHOKNML_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::DeviceServeConfigEntry*>* CCCHGLCKNDA()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::DeviceServeConfigEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_CCCHGLCKNDA_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::MakingConfigEntry*>* CNEGBCOKJFL()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::MakingConfigEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_CNEGBCOKJFL_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>* GKFEIHKFMKL()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_GKFEIHKFMKL_OFFSET))(this);
		}

		::System::String* BMAIPHJONBN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_BMAIPHJONBN_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>* HCCHMDPELAJ()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_HCCHMDPELAJ_OFFSET))(this);
		}

		::System::String* MCMDALPPIKA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_MCMDALPPIKA_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* FPKJIIMPJBL()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_FPKJIIMPJBL_OFFSET))(this);
		}

		::System::Void MNDCMLOAEBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_MNDCMLOAEBI_OFFSET))(this);
		}

		::System::Void AEHNMGLIDOP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_AEHNMGLIDOP_OFFSET))(this, a1);
		}

		::System::Void HGCMIKDMHKJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_HGCMIKDMHKJ_OFFSET))(this, a1);
		}

		::System::Void JFIKHLMNEOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_JFIKHLMNEOA_OFFSET))(this);
		}

		::System::Void DCBCFPKMMOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_DCBCFPKMMOC_OFFSET))(this);
		}

		::System::Void JILJECPJBJH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_JILJECPJBJH_OFFSET))(this, a1);
		}

		::System::Void MOFLOCLJEHH(::System::Nullable_1<::UnityEngine::Vector2> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_MOFLOCLJEHH_OFFSET))(this, a1);
		}

		::RPG::Client::MonoAnimationTrigger* EDBCFKAAAAH()
		{
			return ((::RPG::Client::MonoAnimationTrigger*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_EDBCFKAAAAH_OFFSET))(this);
		}

		::System::Nullable_1<::UnityEngine::Vector2> AKLLFCBDDNE()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector2>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_AKLLFCBDDNE_OFFSET))(this);
		}

		::System::Void ELEBMKLFABB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_ELEBMKLFABB_OFFSET))(this, a1);
		}

		::System::Void PILPCMNAENO(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_PILPCMNAENO_OFFSET))(this, a1, a2);
		}

		::System::Boolean LLDMEFPKPIA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_LLDMEFPKPIA_OFFSET))(this, a1);
		}

		::System::Boolean KIPFNKPEKJP(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_KIPFNKPEKJP_OFFSET))(this, a1, a2);
		}

		::System::Void KIACCPGPKCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_KIACCPGPKCM_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSCENEROOT_ONDISABLE_OFFSET))(this);
		}

	};
}
