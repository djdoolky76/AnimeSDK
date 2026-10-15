#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/BasePixAirView.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectManager; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_APHCNHJPGAB_OFFSET UNITYSDK_OFFSET(0xD47F1A0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_CCNAPHOBJDD_OFFSET UNITYSDK_OFFSET(0xD47FD50)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_CCTOR_OFFSET UNITYSDK_OFFSET(0xD4806D0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_CEPJHGNMKJD_OFFSET UNITYSDK_OFFSET(0xD47F730)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_CGLNLANJPEI_OFFSET UNITYSDK_OFFSET(0xD4803D0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD4806B0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_DESTROYVIEWONLY_OFFSET UNITYSDK_OFFSET(0xD47F850)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_EBBPLPBNOOM_OFFSET UNITYSDK_OFFSET(0xD47ED90)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_GET_EFFECTID_OFFSET UNITYSDK_OFFSET(0xD480610)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_GET_EFFECTSCALE_OFFSET UNITYSDK_OFFSET(0xD480630)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_GET_LOCALRIGHT_OFFSET UNITYSDK_OFFSET(0xD480680)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_GET_NORMALIZEDCONTROLPOINT_OFFSET UNITYSDK_OFFSET(0xD480650)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_HAOBJNHJFGM_OFFSET UNITYSDK_OFFSET(0xD47E650)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_JBFHIKIKCMF_OFFSET UNITYSDK_OFFSET(0xD47EC90)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_JILJMMDLFAL_OFFSET UNITYSDK_OFFSET(0xD47F4A0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_LFOIAJNIEGE_OFFSET UNITYSDK_OFFSET(0xD47F980)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_LLBDFDBIOEE_OFFSET UNITYSDK_OFFSET(0xD4801E0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_MMFONMOONPE_OFFSET UNITYSDK_OFFSET(0xD47F310)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_SETHITEFFECTPATH_OFFSET UNITYSDK_OFFSET(0xD47F930)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_SETTARGET_OFFSET UNITYSDK_OFFSET(0xD47F8E0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_SET_EFFECTID_OFFSET UNITYSDK_OFFSET(0xD480620)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_SET_EFFECTSCALE_OFFSET UNITYSDK_OFFSET(0xD480640)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_SET_LOCALRIGHT_OFFSET UNITYSDK_OFFSET(0xD4806A0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_SET_NORMALIZEDCONTROLPOINT_OFFSET UNITYSDK_OFFSET(0xD480670)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0xD47E5F0)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirProjectileView_TypeDefinitionIndex = 77325;

	class PixAirProjectileView : public ::RPG::Client::LittleGame::PixAir::BasePixAirView
	{
	public:
		::System::UInt32 _EffectID_k__BackingField; // 0x38
		::System::Single _EffectScale_k__BackingField; // 0x3C
		::UnityEngine::Vector3 _NormalizedControlPoint_k__BackingField; // 0x40
		::UnityEngine::Vector3 _LocalRight_k__BackingField; // 0x4C
		::System::String* LIJIGHDFAFI; // 0x58
		::UnityEngine::Transform* OIGGFCOBKCG; // 0x60
		::System::Boolean KNHBEOOFEMC; // 0x68
		static ::RPG::Client::MonoEffectManager** StaticGet_AKEEKBEFNIG()
		{
			return (::RPG::Client::MonoEffectManager**)UnitySDK::FromName("RPG.Client.LittleGame.PixAir", "PixAirProjectileView")->GetStaticField(0x2D5E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::LinkedListNode_1<::System::UInt32>*>** StaticGet_GOGNNNBPNHL()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::LinkedListNode_1<::System::UInt32>*>**)UnitySDK::FromName("RPG.Client.LittleGame.PixAir", "PixAirProjectileView")->GetStaticField(0x2D5E8);
		}

		static ::System::Collections::Generic::LinkedList_1<::System::UInt32>** StaticGet_DFPLBOHHFJL()
		{
			return (::System::Collections::Generic::LinkedList_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client.LittleGame.PixAir", "PixAirProjectileView")->GetStaticField(0x2D5F0);
		}

		// static const ::System::Object DMDNMNMBNPA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_CCTOR_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_UPDATE_OFFSET))(this);
		}

		::System::Void HAOBJNHJFGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_HAOBJNHJFGM_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 EBBPLPBNOOM(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_EBBPLPBNOOM_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void JBFHIKIKCMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_JBFHIKIKCMF_OFFSET))(this);
		}

		::System::Void DestroyViewOnly()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_DESTROYVIEWONLY_OFFSET))(this);
		}

		::System::Boolean CEPJHGNMKJD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_CEPJHGNMKJD_OFFSET))(this);
		}

		::System::Void SetTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_SETTARGET_OFFSET))(this, a1);
		}

		::System::Void SetHitEffectPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_SETHITEFFECTPATH_OFFSET))(this, a1);
		}

		::System::Void JILJMMDLFAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_JILJMMDLFAL_OFFSET))(this);
		}

		static ::System::Void LFOIAJNIEGE(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_LFOIAJNIEGE_OFFSET))(a1);
		}

		static ::System::Void LLBDFDBIOEE()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_LLBDFDBIOEE_OFFSET))();
		}

		static ::System::Void CCNAPHOBJDD()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_CCNAPHOBJDD_OFFSET))();
		}

		static ::System::Void CGLNLANJPEI(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_CGLNLANJPEI_OFFSET))(a1);
		}

		::UnityEngine::Vector3 APHCNHJPGAB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_APHCNHJPGAB_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 MMFONMOONPE(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_MMFONMOONPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 get_EffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_GET_EFFECTID_OFFSET))(this);
		}

		::System::Void set_EffectID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_SET_EFFECTID_OFFSET))(this, a1);
		}

		::System::Single get_EffectScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_GET_EFFECTSCALE_OFFSET))(this);
		}

		::System::Void set_EffectScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_SET_EFFECTSCALE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_NormalizedControlPoint()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_GET_NORMALIZEDCONTROLPOINT_OFFSET))(this);
		}

		::System::Void set_NormalizedControlPoint(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_SET_NORMALIZEDCONTROLPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_LocalRight()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_GET_LOCALRIGHT_OFFSET))(this);
		}

		::System::Void set_LocalRight(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_SET_LOCALRIGHT_OFFSET))(this, a1);
		}

	};
}
