#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class JMNAGCHOAKN;
namespace RPG::Client { class EmoBlendShapesConfig; }
namespace RPG::Client { class MonoEmoBlendShapeBlink; }
namespace RPG::Client { class MonoEmoBlendShapesMouth; }
namespace System { class String; }
namespace System { class WeakReference; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_AAGEPPPFHHD_OFFSET UNITYSDK_OFFSET(0xD81AA80)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_ANDOAKCOJDP_OFFSET UNITYSDK_OFFSET(0xD818CD0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xD81B390)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_BIEFAGFIDGN_OFFSET UNITYSDK_OFFSET(0xD81A860)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_CCTOR_OFFSET UNITYSDK_OFFSET(0xD81B9A0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_COMIDOJBDPE_OFFSET UNITYSDK_OFFSET(0xD819C30)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xD81B8E0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GETBLENDSHAPECONFIGNAMES_OFFSET UNITYSDK_OFFSET(0xD8182A0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GETBLENDSHAPEDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0xD818AB0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GETBLENDSHAPEINDEXBYNAME_OFFSET UNITYSDK_OFFSET(0xD818A10)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GETBLENDSHAPEVALUE_OFFSET UNITYSDK_OFFSET(0xD817AA0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_BLENDSHAPENAMES_OFFSET UNITYSDK_OFFSET(0xD8183C0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_BLINK_OFFSET UNITYSDK_OFFSET(0xD818640)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_CACHEDBLENDSHAPECOUNT_OFFSET UNITYSDK_OFFSET(0xD818240)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_CACHEDBLENDSHAPENAMES_OFFSET UNITYSDK_OFFSET(0xD818290)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_CONTROLENABLED_OFFSET UNITYSDK_OFFSET(0xD818220)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xD818630)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_ISSTORYMODE_OFFSET UNITYSDK_OFFSET(0xD818660)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_MOUTH_OFFSET UNITYSDK_OFFSET(0xD818650)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_HFKPDBKJJAA_OFFSET UNITYSDK_OFFSET(0xD819FB0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_HIBMEBCBDHI_OFFSET UNITYSDK_OFFSET(0xD81A100)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_HKBOHFLEOKK_OFFSET UNITYSDK_OFFSET(0xD818440)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_IEGEFNHABMB_OFFSET UNITYSDK_OFFSET(0xD819770)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_IGCAIMNLJDL_OFFSET UNITYSDK_OFFSET(0xD81A1E0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_IOOOBBNNHBK_OFFSET UNITYSDK_OFFSET(0xD819510)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_KHNOLFJMCKE_OFFSET UNITYSDK_OFFSET(0xD819BC0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD81B7F0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD81B720)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_RESETADDITIVEVALUES_OFFSET UNITYSDK_OFFSET(0xD818C20)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xD819690)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SETCONTROLENABLED_OFFSET UNITYSDK_OFFSET(0xD818680)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SETUPAUTOBLINK_OFFSET UNITYSDK_OFFSET(0xD818BB0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SETUPBLENDSHAPECONFIG_OFFSET UNITYSDK_OFFSET(0xD819340)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SETUPDEFAULTBLENDSHAPES_OFFSET UNITYSDK_OFFSET(0xD8186D0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SET_CONTROLENABLED_OFFSET UNITYSDK_OFFSET(0xD818230)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SET_ISSTORYMODE_OFFSET UNITYSDK_OFFSET(0xD818670)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SNAPSHOTCURRENTBLENDSHAPES_OFFSET UNITYSDK_OFFSET(0xD818E60)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_UPDATEBLENDSHAPECONFIG_OFFSET UNITYSDK_OFFSET(0xD819120)

namespace RPG::Client
{
	class MonoEmoBlendShapesController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::SkinnedMeshRenderer* meshRenderer; // 0x18
		::System::Boolean _ControlEnabled_k__BackingField; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::Client::EmoBlendShapesConfig* configAsset; // 0x28
		::System::Boolean _IsStoryMode_k__BackingField; // 0x30
		::System::Boolean BCJNNBCMHCA; // 0x31
		::System::Byte _padding1[0x6];
		::System::WeakReference* FKFKIFBFHOH; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* ACNIFALMDMK; // 0x40
		::JMNAGCHOAKN* BAHDHNANBBA; // 0x48
		::JMNAGCHOAKN* EGDBHAOGIHK; // 0x50
		::JMNAGCHOAKN* LMOBEBCANPC; // 0x58
		::System::Int32 GFHNNAMNKAC; // 0x60
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::List_1<::JMNAGCHOAKN*>* DBCKGPCCMBP; // 0x68
		::RPG::Client::MonoEmoBlendShapeBlink* IAEKDGAJIPA; // 0x70
		::RPG::Client::MonoEmoBlendShapesMouth* DMBNEGIIFAB; // 0x78
		::System::Single AIDLABFACAB; // 0x80
		::System::Single IPCHKEOCHCD; // 0x84
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* DKHPNCAIGGA; // 0x88
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>** StaticGet_LJNMPBHBJKD()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>**)UnitySDK::FromName("RPG.Client", "MonoEmoBlendShapesController")->GetStaticField(0x64E20);
		}

		// static const ::System::Object MaxWeight; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_CCTOR_OFFSET))();
		}

		::System::Boolean get_ControlEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_CONTROLENABLED_OFFSET))(this);
		}

		::System::Void set_ControlEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SET_CONTROLENABLED_OFFSET))(this, a1);
		}

		::System::Int32 get_CachedBlendShapeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_CACHEDBLENDSHAPECOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_CachedBlendShapeNames()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_CACHEDBLENDSHAPENAMES_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* GetBlendShapeConfigNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GETBLENDSHAPECONFIGNAMES_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_BlendShapeNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_BLENDSHAPENAMES_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_ISACTIVE_OFFSET))(this);
		}

		::RPG::Client::MonoEmoBlendShapeBlink* get_Blink()
		{
			return ((::RPG::Client::MonoEmoBlendShapeBlink*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_BLINK_OFFSET))(this);
		}

		::RPG::Client::MonoEmoBlendShapesMouth* get_Mouth()
		{
			return ((::RPG::Client::MonoEmoBlendShapesMouth*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_MOUTH_OFFSET))(this);
		}

		::System::Boolean get_IsStoryMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_ISSTORYMODE_OFFSET))(this);
		}

		::System::Void set_IsStoryMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SET_ISSTORYMODE_OFFSET))(this, a1);
		}

		::System::Void SetControlEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SETCONTROLENABLED_OFFSET))(this, a1);
		}

		::System::Void SetupDefaultBlendShapes(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SETUPDEFAULTBLENDSHAPES_OFFSET))(this, a1);
		}

		::System::Int32 GetBlendShapeIndexByName(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GETBLENDSHAPEINDEXBYNAME_OFFSET))(this, a1);
		}

		::System::Single GetBlendShapeDefaultValue(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GETBLENDSHAPEDEFAULTVALUE_OFFSET))(this, a1);
		}

		::System::Single GetBlendShapeValue(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GETBLENDSHAPEVALUE_OFFSET))(this, a1);
		}

		::System::Void SetupAutoBlink(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SETUPAUTOBLINK_OFFSET))(this, a1);
		}

		::System::Void ResetAdditiveValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_RESETADDITIVEVALUES_OFFSET))(this);
		}

		::System::Void SnapshotCurrentBlendShapes(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SNAPSHOTCURRENTBLENDSHAPES_OFFSET))(this, a1);
		}

		::System::Boolean UpdateBlendShapeConfig(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_UPDATEBLENDSHAPECONFIG_OFFSET))(this, a1, a2);
		}

		::System::UInt32 SetupBlendShapeConfig(::System::Single a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Single, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SETUPBLENDSHAPECONFIG_OFFSET))(this, a1, a2);
		}

		::JMNAGCHOAKN* IOOOBBNNHBK()
		{
			return ((::JMNAGCHOAKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_IOOOBBNNHBK_OFFSET))(this);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void KHNOLFJMCKE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_KHNOLFJMCKE_OFFSET))(this, a1);
		}

		::System::Void HFKPDBKJJAA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_HFKPDBKJJAA_OFFSET))(this, a1);
		}

		::System::Void HIBMEBCBDHI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_HIBMEBCBDHI_OFFSET))(this, a1);
		}

		::System::Void IGCAIMNLJDL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_IGCAIMNLJDL_OFFSET))(this, a1);
		}

		::System::Void ANDOAKCOJDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_ANDOAKCOJDP_OFFSET))(this);
		}

		::System::Void BIEFAGFIDGN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_BIEFAGFIDGN_OFFSET))(this, a1);
		}

		::System::Void AAGEPPPFHHD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_AAGEPPPFHHD_OFFSET))(this, a1);
		}

		::System::Void IEGEFNHABMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_IEGEFNHABMB_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void COMIDOJBDPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_COMIDOJBDPE_OFFSET))(this);
		}

		::System::Void HKBOHFLEOKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_HKBOHFLEOKK_OFFSET))(this);
		}

	};
}
