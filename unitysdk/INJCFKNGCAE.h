#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class BCBBIEHANAD;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define INJCFKNGCAE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEF98C0)
#define INJCFKNGCAE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEF9E90)
#define INJCFKNGCAE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEF9A30)
#define INJCFKNGCAE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEF9330)
#define INJCFKNGCAE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEF95C0)
#define INJCFKNGCAE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEF9AD0)
#define INJCFKNGCAE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEF9B20)
#define INJCFKNGCAE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEF9900)
#define INJCFKNGCAE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEF9560)
#define INJCFKNGCAE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEF9730)
#define INJCFKNGCAE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEF9990)
#define INJCFKNGCAE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEF92B0)

inline static constexpr unsigned int INJCFKNGCAE_TypeDefinitionIndex = 11316;

	class INJCFKNGCAE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "INJCFKNGCAE")->GetStaticField(0x23C80);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "INJCFKNGCAE")->GetStaticField(0x23C88);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BCBBIEHANAD*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BCBBIEHANAD*>**)UnitySDK::FromName("", "INJCFKNGCAE")->GetStaticField(0x23C90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "INJCFKNGCAE")->GetStaticField(0x7BB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "INJCFKNGCAE")->GetStaticField(0x7BB1);
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
