#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace RPG::Client { class Effect_WingInstanceManagerMonoPlugin; }
namespace RPG::Client { class Effect_WingInstanceMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_ANFFLAJPOMN_OFFSET UNITYSDK_OFFSET(0xCD78680)
#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_CBJBIPNAAKF_OFFSET UNITYSDK_OFFSET(0xCD78430)
#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xCD788D0)
#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xCD787A0)
#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCD788C0)
#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xCD783B0)
#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xCD78800)
#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCD77C80)
#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xCD780C0)
#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCD78060)
#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_MMFIOKJJMJO_OFFSET UNITYSDK_OFFSET(0xCD77D50)
#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xCD78860)
#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xCD77CE0)

namespace RPG::Client
{
	class Effect_WingInstanceManagerBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Effect_WingInstanceMonoPlugin*>* _InstanceList; // 0x38
		::UnityEngine::MaterialPropertyBlock* _MPB; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* _MatrixList; // 0x48
		::System::Collections::Generic::List_1<::System::Single>* _TimeLocationList; // 0x50
		static ::System::Int32* StaticGet__TimeLocationProp()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_WingInstanceManagerBehavior")->GetStaticField(0xD9A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void MMFIOKJJMJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_MMFIOKJJMJO_OFFSET))(this);
		}

		::System::Void CBJBIPNAAKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_CBJBIPNAAKF_OFFSET))(this);
		}

		::System::Void ANFFLAJPOMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_ANFFLAJPOMN_OFFSET))(this);
		}

		::RPG::Client::Effect_WingInstanceManagerMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::Effect_WingInstanceManagerMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

	};
}
