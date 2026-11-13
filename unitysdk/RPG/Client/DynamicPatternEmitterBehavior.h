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

#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0x17BB4E80)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0x17BB0DF0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0x17BB4170)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_CJHMMEAKMGP_OFFSET UNITYSDK_OFFSET(0x17BB4A50)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0x17BB4E50)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_EFCHDBOJAAP_OFFSET UNITYSDK_OFFSET(0x17BB2600)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_FKKCKPIMHJO_OFFSET UNITYSDK_OFFSET(0x17BB4D40)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_FNOBJKFKDFH_OFFSET UNITYSDK_OFFSET(0x17BB4940)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_FPGHCHHBJHD_OFFSET UNITYSDK_OFFSET(0x17BB48F0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_GET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x17BB4150)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x17BB0910)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_JEPGOJGADHI_OFFSET UNITYSDK_OFFSET(0x17BB3C00)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0x17BB0E50)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x17BB0950)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x17BB0280)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_LDECEONJMGB_OFFSET UNITYSDK_OFFSET(0x17BB42D0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_MDDMOALLNAK_OFFSET UNITYSDK_OFFSET(0x17BB2EB0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x17BB0D90)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0x17BB2000)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_MLMMAOCMFKH_OFFSET UNITYSDK_OFFSET(0x17BB4850)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0x17BB0F70)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0x17BB0EC0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_ONSAMPLE_OFFSET UNITYSDK_OFFSET(0x17BB4230)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x17BB0310)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0x17BB0F30)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_SAMPLEDELAY_OFFSET UNITYSDK_OFFSET(0x17BB41F0)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_SET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x17BB4160)
#define RPG_CLIENT_DYNAMICPATTERNEMITTERBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x17BB20E0)

namespace RPG::Client
{
	inline static constexpr unsigned int DynamicPatternEmitterBehavior_TypeDefinitionIndex = 72873;

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
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DynamicPatternEmitterBehavior")->GetStaticField(0xBA70);
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
