#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/RPG/Client/TAUtils/QuaternionTransform.h"
namespace RPG::Client { class Effect_InstanceArrayMonoPlugin; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_AGLCCJHOKNM_OFFSET UNITYSDK_OFFSET(0xCD3A4E0)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_AKNMPKDGMNC_OFFSET UNITYSDK_OFFSET(0xCD36C50)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_AODAHAFDMKM_OFFSET UNITYSDK_OFFSET(0xCD38680)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xCD387C0)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCD3BB50)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xCD3A4A0)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0xCD389E0)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xCD38820)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCD36B90)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_LNMLKHICCPL_OFFSET UNITYSDK_OFFSET(0xCD3AD50)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCD386E0)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_MFPLOPBPAHL_OFFSET UNITYSDK_OFFSET(0xCD3B590)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_NBHKFKFHICJ_OFFSET UNITYSDK_OFFSET(0xCD3AB10)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xCD38920)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xCD38880)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xCD36C00)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xCD388E0)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_PPKNKHBHFCG_OFFSET UNITYSDK_OFFSET(0xCD38740)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xCD38980)

namespace RPG::Client
{
	class Effect_InstanceArrayBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::Il2CppArray<::Il2CppArray<::UnityEngine::Matrix4x4>*>* _Matrices; // 0x38
		::Il2CppArray<::UnityEngine::MaterialPropertyBlock*>* _MPB; // 0x40
		::Il2CppArray<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Single>*>*>* _PropertiesFloat; // 0x48
		::Il2CppArray<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>*>* _PropertiesVector; // 0x50
		::System::Int32 _TotalAmount; // 0x58
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::Matrix4x4>* _RendererPackageTransforms; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void AODAHAFDMKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_AODAHAFDMKM_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void PPKNKHBHFCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_PPKNKHBHFCG_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void IKOHLHDGFKH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_IKOHLHDGFKH_OFFSET))(this, a1);
		}

		::System::Void AKNMPKDGMNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_AKNMPKDGMNC_OFFSET))(this);
		}

		::System::Void LNMLKHICCPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_LNMLKHICCPL_OFFSET))(this);
		}

		::System::Void MFPLOPBPAHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_MFPLOPBPAHL_OFFSET))(this);
		}

		::RPG::Client::TAUtils::QuaternionTransform AGLCCJHOKNM(::System::Int32 a1)
		{
			return ((::RPG::Client::TAUtils::QuaternionTransform(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_AGLCCJHOKNM_OFFSET))(this, a1);
		}

		::System::Single NBHKFKFHICJ(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_NBHKFKFHICJ_OFFSET))(this, a1);
		}

		::RPG::Client::Effect_InstanceArrayMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::Effect_InstanceArrayMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

	};
}
