#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class AnimatorBridgeControllerMonoPlugin; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xC679880)
#define RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_CKEEPAEHKFJ_OFFSET UNITYSDK_OFFSET(0xC679A40)
#define RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_CNPDFGNAAGO_OFFSET UNITYSDK_OFFSET(0xC679BB0)
#define RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xC67A000)
#define RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xC679760)
#define RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_IPPNFJMNOJJ_OFFSET UNITYSDK_OFFSET(0xC679D20)
#define RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_JOCMGCCEDDN_OFFSET UNITYSDK_OFFSET(0xC679EA0)
#define RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xC6798E0)
#define RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC679480)
#define RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xC679820)
#define RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xC6799E0)
#define RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xC679940)
#define RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xC6797A0)
#define RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xC6799A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AnimatorBridgeControllerBehavior_TypeDefinitionIndex = 70278;

	class AnimatorBridgeControllerBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::Animator* _RootAnimator; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Animator*>* _ChildAnimators; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void CKEEPAEHKFJ(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_CKEEPAEHKFJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CNPDFGNAAGO(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_CNPDFGNAAGO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IPPNFJMNOJJ(::System::String* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_IPPNFJMNOJJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JOCMGCCEDDN(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_JOCMGCCEDDN_OFFSET))(this, a1, a2);
		}

		::RPG::Client::AnimatorBridgeControllerMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::AnimatorBridgeControllerMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBRIDGECONTROLLERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
