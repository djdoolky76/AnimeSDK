#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class BCBBIEHANAD;
class FCOEMCEDLNL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define INJCFKNGCAE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CF27900)
#define INJCFKNGCAE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF27ED0)
#define INJCFKNGCAE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CF27A70)
#define INJCFKNGCAE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF27370)
#define INJCFKNGCAE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CF27600)
#define INJCFKNGCAE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CF27B10)
#define INJCFKNGCAE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CF27B60)
#define INJCFKNGCAE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CF27940)
#define INJCFKNGCAE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CF275A0)
#define INJCFKNGCAE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CF27770)
#define INJCFKNGCAE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CF279D0)
#define INJCFKNGCAE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CF272F0)

	class INJCFKNGCAE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BCBBIEHANAD*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BCBBIEHANAD*>**)UnitySDK::FromName("", "INJCFKNGCAE")->GetStaticField(0x24790);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "INJCFKNGCAE")->GetStaticField(0x24798);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "INJCFKNGCAE")->GetStaticField(0x247A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "INJCFKNGCAE")->GetStaticField(0x8030);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "INJCFKNGCAE")->GetStaticField(0x8031);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INJCFKNGCAE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BCBBIEHANAD*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BCBBIEHANAD*>*(*)())((::PBYTE)hIl2Cpp + INJCFKNGCAE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INJCFKNGCAE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::BCBBIEHANAD*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::BCBBIEHANAD*>(*)())((::PBYTE)hIl2Cpp + INJCFKNGCAE_FPHGMAMDFHE_OFFSET))();
		}

		static ::BCBBIEHANAD* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::BCBBIEHANAD*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + INJCFKNGCAE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INJCFKNGCAE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INJCFKNGCAE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INJCFKNGCAE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + INJCFKNGCAE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + INJCFKNGCAE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + INJCFKNGCAE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::BCBBIEHANAD* a1)
		{
			return ((::System::Void(*)(::BCBBIEHANAD*))((::PBYTE)hIl2Cpp + INJCFKNGCAE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
