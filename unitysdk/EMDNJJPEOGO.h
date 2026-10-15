#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class BKJNLHCOLGI;
class FCOEMCEDLNL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EMDNJJPEOGO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDA5100)
#define EMDNJJPEOGO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDA56D0)
#define EMDNJJPEOGO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDA5270)
#define EMDNJJPEOGO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDA4B70)
#define EMDNJJPEOGO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDA4E00)
#define EMDNJJPEOGO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDA5310)
#define EMDNJJPEOGO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDA5360)
#define EMDNJJPEOGO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDA5140)
#define EMDNJJPEOGO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDA4DA0)
#define EMDNJJPEOGO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDA4F70)
#define EMDNJJPEOGO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDA51D0)
#define EMDNJJPEOGO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDA4AF0)

	class EMDNJJPEOGO : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "EMDNJJPEOGO")->GetStaticField(0xB2B0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EMDNJJPEOGO")->GetStaticField(0xB2B8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BKJNLHCOLGI*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BKJNLHCOLGI*>**)UnitySDK::FromName("", "EMDNJJPEOGO")->GetStaticField(0xB2C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EMDNJJPEOGO")->GetStaticField(0x2630);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EMDNJJPEOGO")->GetStaticField(0x2631);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMDNJJPEOGO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BKJNLHCOLGI*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BKJNLHCOLGI*>*(*)())((::PBYTE)hIl2Cpp + EMDNJJPEOGO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EMDNJJPEOGO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::BKJNLHCOLGI*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::BKJNLHCOLGI*>(*)())((::PBYTE)hIl2Cpp + EMDNJJPEOGO_FPHGMAMDFHE_OFFSET))();
		}

		static ::BKJNLHCOLGI* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::BKJNLHCOLGI*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EMDNJJPEOGO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EMDNJJPEOGO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMDNJJPEOGO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMDNJJPEOGO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EMDNJJPEOGO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EMDNJJPEOGO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EMDNJJPEOGO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::BKJNLHCOLGI* a1)
		{
			return ((::System::Void(*)(::BKJNLHCOLGI*))((::PBYTE)hIl2Cpp + EMDNJJPEOGO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
