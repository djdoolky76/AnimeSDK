#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace RPG::Client { class AssemNPC; }
namespace RPG::Client { class IdentityData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_ASSEMNPCCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xC69C550)
#define RPG_CLIENT_ASSEMNPCCONFIG_DAIFBIGIMHD_OFFSET UNITYSDK_OFFSET(0xC69C1F0)
#define RPG_CLIENT_ASSEMNPCCONFIG_DEFPONAHHEO_OFFSET UNITYSDK_OFFSET(0xC69BFC0)
#define RPG_CLIENT_ASSEMNPCCONFIG_GKGBNLAOFLE_OFFSET UNITYSDK_OFFSET(0xC69AA20)
#define RPG_CLIENT_ASSEMNPCCONFIG_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xC69C4C0)
#define RPG_CLIENT_ASSEMNPCCONFIG_HLACMMMBAAC_OFFSET UNITYSDK_OFFSET(0xC69B9B0)
#define RPG_CLIENT_ASSEMNPCCONFIG_LFFEIGAGLLB_OFFSET UNITYSDK_OFFSET(0xC69B0C0)
#define RPG_CLIENT_ASSEMNPCCONFIG_OHCHIBCOGAN_OFFSET UNITYSDK_OFFSET(0xC69BDD0)

namespace RPG::Client
{
	inline static constexpr unsigned int AssemNPCConfig_TypeDefinitionIndex = 60004;

	class AssemNPCConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IdentityData*>* IdentityData; // 0x18
		::UnityEngine::AnimationCurve* EmittrRatioCurve; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::Client::AssemNPC*>*>* AssemNpcFeatureDic; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG_CTOR_OFFSET))(this);
		}

		::System::Void GKGBNLAOFLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG_GKGBNLAOFLE_OFFSET))(this);
		}

		::System::Void LFFEIGAGLLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG_LFFEIGAGLLB_OFFSET))(this);
		}

		::System::Void HLACMMMBAAC(::System::String* a1, ::RPG::Client::AssemNPC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG_HLACMMMBAAC_OFFSET))(this, a1, a2);
		}

		::System::Boolean OHCHIBCOGAN(::System::String* a1, ::System::String* a2, ::RPG::Client::AssemNPC* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG_OHCHIBCOGAN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DEFPONAHHEO(::System::String* a1, ::RPG::Client::AssemNPC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG_DEFPONAHHEO_OFFSET))(this, a1, a2);
		}

		::System::Boolean DAIFBIGIMHD(::System::String* a1, ::System::String* a2, ::RPG::Client::AssemNPC* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG_DAIFBIGIMHD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG_HADOHLNHHGB_OFFSET))(this);
		}

	};
}
