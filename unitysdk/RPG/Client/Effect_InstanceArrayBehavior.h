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

#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_AGLCCJHOKNM_OFFSET UNITYSDK_OFFSET(0xCD31690)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_AKNMPKDGMNC_OFFSET UNITYSDK_OFFSET(0xCD2DE00)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_AODAHAFDMKM_OFFSET UNITYSDK_OFFSET(0xCD2F830)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xCD2F970)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCD32D00)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xCD31650)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0xCD2FB90)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xCD2F9D0)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCD2DD40)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_LNMLKHICCPL_OFFSET UNITYSDK_OFFSET(0xCD31F00)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCD2F890)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_MFPLOPBPAHL_OFFSET UNITYSDK_OFFSET(0xCD32740)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_NBHKFKFHICJ_OFFSET UNITYSDK_OFFSET(0xCD31CC0)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xCD2FAD0)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xCD2FA30)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xCD2DDB0)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xCD2FA90)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_PPKNKHBHFCG_OFFSET UNITYSDK_OFFSET(0xCD2F8F0)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xCD2FB30)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_InstanceArrayBehavior_TypeDefinitionIndex = 70608;

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
