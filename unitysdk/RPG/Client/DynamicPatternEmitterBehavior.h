#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
class CADDDIKDHBJ;
namespace RPG::Client { class DynamicPatternEmitterMonoPlugin; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xCD02210)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xCCFE180)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0xCD01500)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_CJHMMEAKMGP_OFFSET UNITYSDK_OFFSET(0xCD01DE0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCD021E0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_EFCHDBOJAAP_OFFSET UNITYSDK_OFFSET(0xCCFF990)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_FKKCKPIMHJO_OFFSET UNITYSDK_OFFSET(0xCD020D0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_FNOBJKFKDFH_OFFSET UNITYSDK_OFFSET(0xCD01CD0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_FPGHCHHBJHD_OFFSET UNITYSDK_OFFSET(0xCD01C80)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_GET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0xCD014E0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xCCFDCA0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_JEPGOJGADHI_OFFSET UNITYSDK_OFFSET(0xCD00F90)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xCCFE1E0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xCCFDCE0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCCFD610)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_LDECEONJMGB_OFFSET UNITYSDK_OFFSET(0xCD01660)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_MDDMOALLNAK_OFFSET UNITYSDK_OFFSET(0xCD00240)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCCFE120)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0xCCFF390)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_MLMMAOCMFKH_OFFSET UNITYSDK_OFFSET(0xCD01BE0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xCCFE300)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xCCFE250)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_ONSAMPLE_OFFSET UNITYSDK_OFFSET(0xCD015C0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xCCFD6A0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xCCFE2C0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_SAMPLEDELAY_OFFSET UNITYSDK_OFFSET(0xCD01580)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_SET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0xCD014F0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xCCFF470)

namespace RPG::Client
{
	class DynamicPatternEmitterBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Boolean _IsVisiable; // 0x38
		::System::Byte _padding0[0x3];
		::System::Single _SignalOpacity; // 0x3C
		::UnityEngine::Vector3 _CameraPos; // 0x40
		::UnityEngine::Vector3 _PlayerPos; // 0x4C
		::UnityEngine::MaterialPropertyBlock* _MaterialPropertyBlock; // 0x58
		::Il2CppArray<::UnityEngine::Matrix4x4>* _MatrixList; // 0x60
		::Il2CppArray<::UnityEngine::Vector4>* _CustomDatas; // 0x68
		::System::Boolean _IfPreviewAudio; // 0x70
		::System::Byte _padding1[0x3];
		::System::Single _Timer; // 0x74
		::System::Boolean _IfPostAudio; // 0x78
		::System::Boolean _IfInUse; // 0x79
		::System::Boolean _IfStopPlay; // 0x7A
		::System::Boolean _IfInDistRangeBefore; // 0x7B
		::System::Int32 _ActivePatternCount; // 0x7C
		::System::Int32 _VisiablePatternCount; // 0x80
		::UnityEngine::Bounds _PatternBounds; // 0x84
		::System::Byte _padding2[0x4];
		::CADDDIKDHBJ* _OwnerFMSystem_k__BackingField; // 0xA0
		static ::System::Int32* StaticGet__CustomDataID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DynamicPatternEmitterBehavior")->GetStaticField(0xAD60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::CADDDIKDHBJ* get_OwnerFMSystem()
		{
			return ((::CADDDIKDHBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_GET_OWNERFMSYSTEM_OFFSET))(this);
		}

		::System::Void set_OwnerFMSystem(::CADDDIKDHBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CADDDIKDHBJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_SET_OWNERFMSYSTEM_OFFSET))(this, a1);
		}

		::System::String* ChannelName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_CHANNELNAME_OFFSET))(this);
		}

		::System::Single SampleDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_SAMPLEDELAY_OFFSET))(this);
		}

		::System::Void OnSample(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_ONSAMPLE_OFFSET))(this, a1);
		}

		::RPG::Client::DynamicPatternEmitterMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::DynamicPatternEmitterMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void MDDMOALLNAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_MDDMOALLNAK_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void FPGHCHHBJHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_FPGHCHHBJHD_OFFSET))(this);
		}

		::System::Void FNOBJKFKDFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_FNOBJKFKDFH_OFFSET))(this);
		}

		::System::Void EFCHDBOJAAP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_EFCHDBOJAAP_OFFSET))(this, a1);
		}

		::System::Void LDECEONJMGB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_LDECEONJMGB_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::Bounds CJHMMEAKMGP()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_CJHMMEAKMGP_OFFSET))(this);
		}

		::UnityEngine::Vector4 MLMMAOCMFKH(::System::Single a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_MLMMAOCMFKH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JEPGOJGADHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_JEPGOJGADHI_OFFSET))(this);
		}

		::System::Void FKKCKPIMHJO(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_FKKCKPIMHJO_OFFSET))(this, a1, a2);
		}

	};
}
