#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class DOBOKPCPHCF;
class FCOEMCEDLNL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AGGJENPNKBG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCBD000)
#define AGGJENPNKBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCBD5D0)
#define AGGJENPNKBG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCBD170)
#define AGGJENPNKBG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCBCA70)
#define AGGJENPNKBG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCBCD00)
#define AGGJENPNKBG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCBD210)
#define AGGJENPNKBG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCBD260)
#define AGGJENPNKBG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCBD040)
#define AGGJENPNKBG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCBCCA0)
#define AGGJENPNKBG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCBCE70)
#define AGGJENPNKBG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCBD0D0)
#define AGGJENPNKBG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCBC9F0)

	class AGGJENPNKBG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DOBOKPCPHCF*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DOBOKPCPHCF*>**)UnitySDK::FromName("", "AGGJENPNKBG")->GetStaticField(0x38210);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AGGJENPNKBG")->GetStaticField(0x38218);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "AGGJENPNKBG")->GetStaticField(0x38220);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AGGJENPNKBG")->GetStaticField(0xBF90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AGGJENPNKBG")->GetStaticField(0xBF91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGGJENPNKBG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DOBOKPCPHCF*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DOBOKPCPHCF*>*(*)())((::PBYTE)hIl2Cpp + AGGJENPNKBG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AGGJENPNKBG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::DOBOKPCPHCF*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::DOBOKPCPHCF*>(*)())((::PBYTE)hIl2Cpp + AGGJENPNKBG_FPHGMAMDFHE_OFFSET))();
		}

		static ::DOBOKPCPHCF* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::DOBOKPCPHCF*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AGGJENPNKBG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AGGJENPNKBG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGGJENPNKBG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGGJENPNKBG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AGGJENPNKBG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AGGJENPNKBG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AGGJENPNKBG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::DOBOKPCPHCF* a1)
		{
			return ((::System::Void(*)(::DOBOKPCPHCF*))((::PBYTE)hIl2Cpp + AGGJENPNKBG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
