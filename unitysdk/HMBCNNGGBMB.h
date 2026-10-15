#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"
class PEFKPJNGCMI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HMBCNNGGBMB_CCTOR_OFFSET UNITYSDK_OFFSET(0x15D6BFF0)
#define HMBCNNGGBMB_HKIDAHLOPBM_OFFSET UNITYSDK_OFFSET(0x15D6BF10)

inline static constexpr unsigned int HMBCNNGGBMB_TypeDefinitionIndex = 59056;

	class HMBCNNGGBMB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>** StaticGet_LFNKPBCGKCI()
		{
			return (::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>**)UnitySDK::FromName("", "HMBCNNGGBMB")->GetStaticField(0x2C510);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::PEFKPJNGCMI*>** StaticGet_ACLPBLGLFNK()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::PEFKPJNGCMI*>**)UnitySDK::FromName("", "HMBCNNGGBMB")->GetStaticField(0x2C518);
		}

		static ::System::UInt32* StaticGet_HCKLOHHIBFB()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "HMBCNNGGBMB")->GetStaticField(0x94F0);
		}

		static ::System::UInt32* StaticGet_EDOCNFBOPOA()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "HMBCNNGGBMB")->GetStaticField(0x94F4);
		}

		static ::System::UInt32* StaticGet_HJHIHAGLAAE()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "HMBCNNGGBMB")->GetStaticField(0x94F8);
		}

		static ::System::UInt32* StaticGet_DPLIKGABGAM()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "HMBCNNGGBMB")->GetStaticField(0x94FC);
		}

		static ::System::UInt32* StaticGet_JBMOMLJPJOC()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "HMBCNNGGBMB")->GetStaticField(0x9500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMBCNNGGBMB_CCTOR_OFFSET))();
		}

		static ::System::Void HKIDAHLOPBM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMBCNNGGBMB_HKIDAHLOPBM_OFFSET))();
		}

	};
