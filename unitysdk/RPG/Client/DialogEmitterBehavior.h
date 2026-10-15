#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Color.h"
namespace RPG::Client { class DialogEmitterBehavior_DialogData; }
namespace RPG::Client { class DialogEmitterMonoPlugin; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_FontAsset; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xCBFB8D0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_CEMNHBOPMBM_OFFSET UNITYSDK_OFFSET(0xCBF98E0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xCBF5250)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCBFB8B0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DCFOPJENLPA_OFFSET UNITYSDK_OFFSET(0xCBF28F0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_EAKKKLCHJCG_OFFSET UNITYSDK_OFFSET(0xCBF20D0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_EDABMAENGBN_OFFSET UNITYSDK_OFFSET(0xCBFAA00)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_FDAFLPCLCEJ_OFFSET UNITYSDK_OFFSET(0xCBF23A0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_GDFLDFDEALE_OFFSET UNITYSDK_OFFSET(0xCBFAFB0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_GET_IFINSTANCENEEDREFRESH_OFFSET UNITYSDK_OFFSET(0xCBF1F00)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_GET_IFUSESIMULATE_OFFSET UNITYSDK_OFFSET(0xCBF1E70)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xCBF1EC0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_GET__USELOCALMATRIXCACHE_OFFSET UNITYSDK_OFFSET(0xCBF1F20)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_GJMGIGIHGCC_OFFSET UNITYSDK_OFFSET(0xCBF7C70)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_IAPIKCOAEMG_OFFSET UNITYSDK_OFFSET(0xCBF88B0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_JCGIEIAAOMM_OFFSET UNITYSDK_OFFSET(0xCBF2A50)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_JJPDIMGIBKL_OFFSET UNITYSDK_OFFSET(0xCBFB5E0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xCBF53F0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCBF1FC0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xCBF5610)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_LJLMNFBAKHF_OFFSET UNITYSDK_OFFSET(0xCBF9420)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_LKOMLDKAJBG_OFFSET UNITYSDK_OFFSET(0xCBF91C0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_LMHPCFOALCC_OFFSET UNITYSDK_OFFSET(0xCBF9140)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCBF51F0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_MGCKLJJPMGF_OFFSET UNITYSDK_OFFSET(0xCBF9740)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xCBF5510)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_OGHEFKFJDFA_OFFSET UNITYSDK_OFFSET(0xCBFB7A0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xCBF5460)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_OKDOCLACFHA_OFFSET UNITYSDK_OFFSET(0xCBF6050)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xCBF22A0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_PCPIIAEKIKP_OFFSET UNITYSDK_OFFSET(0xCBFAF20)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xCBF54D0)
#define RPG_CLIENT_DIALOGEMITTERBEHAVIOR_SET_IFINSTANCENEEDREFRESH_OFFSET UNITYSDK_OFFSET(0xCBF1F10)

namespace RPG::Client
{
	class DialogEmitterBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Boolean _IsVisiable; // 0x38
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::System::Object*>* _SimulateAgents; // 0x40
		::System::Single _Timer; // 0x48
		::System::Int32 _CurrentIndex; // 0x4C
		::System::Single _CurrentInterval; // 0x50
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::Single>* _HorizionDistanceBuffer; // 0x58
		::System::Int32 _StaticEmojiCounter; // 0x60
		::System::Int32 _TextCounter; // 0x64
		::System::Int32 _BackboardCounter; // 0x68
		::System::Byte _padding2[0x4];
		::UnityEngine::MaterialPropertyBlock* _StaticEmojiMPB; // 0x70
		::UnityEngine::MaterialPropertyBlock* _TextMPB; // 0x78
		::UnityEngine::MaterialPropertyBlock* _BackboardMPB; // 0x80
		::Il2CppArray<::UnityEngine::Matrix4x4>* _StaticEmojiMatrixList; // 0x88
		::Il2CppArray<::UnityEngine::Matrix4x4>* _TextMatrixList; // 0x90
		::Il2CppArray<::UnityEngine::Matrix4x4>* _BackboardMatrixList; // 0x98
		::Il2CppArray<::UnityEngine::Vector4>* _StaticEmojiCustomDatas; // 0xA0
		::Il2CppArray<::UnityEngine::Vector4>* _TextCustomDatas; // 0xA8
		::Il2CppArray<::UnityEngine::Vector4>* _BackboardCustomDatas; // 0xB0
		::Il2CppArray<::UnityEngine::Matrix4x4>* _StaticEmojiLocalMatrixList; // 0xB8
		::Il2CppArray<::UnityEngine::Matrix4x4>* _TextLocalMatrixList; // 0xC0
		::Il2CppArray<::UnityEngine::Matrix4x4>* _BackboardLocalMatrixList; // 0xC8
		::System::Boolean _LocalCacheDirty; // 0xD0
		::System::Byte _padding3[0x7];
		::TMPro::TMP_FontAsset* _FontAsset; // 0xD8
		::System::Boolean _IfInstanceNeedRefresh_k__BackingField; // 0xE0
		::System::Byte _padding4[0x3];
		::UnityEngine::Bounds _PatternBounds; // 0xE4
		static ::System::Int32* StaticGet__MainTexID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogEmitterBehavior")->GetStaticField(0x7720);
		}

		static ::System::Int32* StaticGet_CustomDataID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogEmitterBehavior")->GetStaticField(0x7724);
		}

		// static const ::System::Object _InitStaticEmojiCount; // 0x0
		// static const ::System::Object _InitTextCount; // 0x0
		// static const ::System::Object _InitBackboardCount; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Boolean get_IfUseSimulate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_GET_IFUSESIMULATE_OFFSET))(this);
		}

		::System::Boolean get_IfInstanceNeedRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_GET_IFINSTANCENEEDREFRESH_OFFSET))(this);
		}

		::System::Void set_IfInstanceNeedRefresh(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_SET_IFINSTANCENEEDREFRESH_OFFSET))(this, a1);
		}

		::System::Boolean get__UseLocalMatrixCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_GET__USELOCALMATRIXCACHE_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Object*>* LMHPCFOALCC()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_LMHPCFOALCC_OFFSET))(this);
		}

		::System::Void LKOMLDKAJBG(::RPG::Client::DialogEmitterBehavior_DialogData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DialogEmitterBehavior_DialogData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_LKOMLDKAJBG_OFFSET))(this, a1);
		}

		::System::Void LJLMNFBAKHF(::RPG::Client::DialogEmitterBehavior_DialogData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DialogEmitterBehavior_DialogData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_LJLMNFBAKHF_OFFSET))(this, a1);
		}

		::RPG::Client::DialogEmitterMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::DialogEmitterMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void OKDOCLACFHA(::RPG::Client::DialogEmitterBehavior_DialogData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DialogEmitterBehavior_DialogData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_OKDOCLACFHA_OFFSET))(this, a1);
		}

		::System::Void DCFOPJENLPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_DCFOPJENLPA_OFFSET))(this);
		}

		::System::Void JCGIEIAAOMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_JCGIEIAAOMM_OFFSET))(this);
		}

		::System::Void CEMNHBOPMBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_CEMNHBOPMBM_OFFSET))(this);
		}

		::System::Void EDABMAENGBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_EDABMAENGBN_OFFSET))(this);
		}

		::System::Void OGHEFKFJDFA(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_OGHEFKFJDFA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FDAFLPCLCEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_FDAFLPCLCEJ_OFFSET))(this);
		}

		::System::Void EAKKKLCHJCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_EAKKKLCHJCG_OFFSET))(this);
		}

		::UnityEngine::Vector4 PCPIIAEKIKP(::System::Single a1, ::System::UInt32 a2)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_PCPIIAEKIKP_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector4 JJPDIMGIBKL(::System::Single a1, ::System::UInt32 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_JJPDIMGIBKL_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector4 GDFLDFDEALE(::UnityEngine::Vector4 a1, ::UnityEngine::Color a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_GDFLDFDEALE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MGCKLJJPMGF(::System::Char a1, ::TMPro::TMP_FontAsset* a2, ::UnityEngine::Vector4 a3, ::UnityEngine::Vector4 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::TMPro::TMP_FontAsset*, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_MGCKLJJPMGF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IAPIKCOAEMG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_IAPIKCOAEMG_OFFSET))(this, a1);
		}

		::System::Void GJMGIGIHGCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERBEHAVIOR_GJMGIGIHGCC_OFFSET))(this);
		}

	};
}
