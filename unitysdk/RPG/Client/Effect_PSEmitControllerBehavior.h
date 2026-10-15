#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/RPG/Client/Effect_PSEmitControllerBehavior_ParticleEmitData.h"
namespace RPG::Client { class Effect_PSEmitControllerMonoPlugin; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_AIKHJFHOHEN_OFFSET UNITYSDK_OFFSET(0xCD45010)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCD452D0)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_DOEBKDFNPKN_OFFSET UNITYSDK_OFFSET(0xCD44C40)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_EADMFPPBEJB_OFFSET UNITYSDK_OFFSET(0xCD44960)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xCD44D70)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_GBMHPNMMOFK_OFFSET UNITYSDK_OFFSET(0xCD44DD0)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xCD44F90)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xCD44CB0)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCD44850)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCD44B90)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_NOEOJKMGHIF_OFFSET UNITYSDK_OFFSET(0xCD45070)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xCD44D10)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xCD448C0)
#define RPG_CLIENT_EFFECT_PSEMITCONTROLLERBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xCD44F50)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PSEmitControllerBehavior_TypeDefinitionIndex = 70516;

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
