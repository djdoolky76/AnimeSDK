#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/RPG/Client/Effect_PSEmitControllerBehavior_ParticleEmitData.h"
namespace RPG::Client { class Effect_PSEmitControllerMonoPlugin; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_AIKHJFHOHEN_OFFSET UNITYSDK_OFFSET(0x1898A220)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1898A4E0)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_DOEBKDFNPKN_OFFSET UNITYSDK_OFFSET(0x18989E20)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_EADMFPPBEJB_OFFSET UNITYSDK_OFFSET(0x18989B30)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x18989F50)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_GBMHPNMMOFK_OFFSET UNITYSDK_OFFSET(0x18989FB0)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x1898A1A0)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0x18989E90)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x18989A20)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x18989D60)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_NOEOJKMGHIF_OFFSET UNITYSDK_OFFSET(0x1898A280)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0x18989EF0)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x18989A90)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0x1898A160)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PSEmitControllerBehavior_TypeDefinitionIndex = 72491;

	class Effect_PSEmitControllerBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Collections::Generic::Queue_1<::System::Object*>* _EmissionQueue; // 0x38
		::System::Boolean _IsPlaying; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::RPG::Client::Effect_PSEmitControllerMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::Effect_PSEmitControllerMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void EADMFPPBEJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_EADMFPPBEJB_OFFSET))(this);
		}

		::System::Void DOEBKDFNPKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_DOEBKDFNPKN_OFFSET))(this);
		}

		::System::Void GBMHPNMMOFK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_GBMHPNMMOFK_OFFSET))(this, a1);
		}

		static ::System::Boolean AIKHJFHOHEN(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_AIKHJFHOHEN_OFFSET))(a1);
		}

		::System::Void NOEOJKMGHIF(::RPG::Client::Effect_PSEmitControllerBehavior_ParticleEmitData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Effect_PSEmitControllerBehavior_ParticleEmitData))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_NOEOJKMGHIF_OFFSET))(this, a1);
		}

	};
}
