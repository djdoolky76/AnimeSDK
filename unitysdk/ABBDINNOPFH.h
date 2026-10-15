#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DirectDeliveryNoticeRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ABBDINNOPFH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CC9C430)
#define ABBDINNOPFH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC9C9B0)
#define ABBDINNOPFH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CC9C5A0)
#define ABBDINNOPFH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CC9BEE0)
#define ABBDINNOPFH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CC9C170)
#define ABBDINNOPFH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CC9C640)
#define ABBDINNOPFH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CC9C690)
#define ABBDINNOPFH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CC9C470)
#define ABBDINNOPFH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CC9C110)
#define ABBDINNOPFH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CC9C2A0)
#define ABBDINNOPFH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CC9C500)
#define ABBDINNOPFH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CC9BE60)

	class ABBDINNOPFH : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ABBDINNOPFH")->GetStaticField(0x35AA0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DirectDeliveryNoticeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DirectDeliveryNoticeRow*>**)UnitySDK::FromName("", "ABBDINNOPFH")->GetStaticField(0x35AA8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "ABBDINNOPFH")->GetStaticField(0x35AB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ABBDINNOPFH")->GetStaticField(0xB530);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ABBDINNOPFH")->GetStaticField(0xB531);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABBDINNOPFH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DirectDeliveryNoticeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DirectDeliveryNoticeRow*>*(*)())((::PBYTE)hIl2Cpp + ABBDINNOPFH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ABBDINNOPFH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DirectDeliveryNoticeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DirectDeliveryNoticeRow*>(*)())((::PBYTE)hIl2Cpp + ABBDINNOPFH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DirectDeliveryNoticeRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DirectDeliveryNoticeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ABBDINNOPFH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ABBDINNOPFH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABBDINNOPFH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABBDINNOPFH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ABBDINNOPFH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABBDINNOPFH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ABBDINNOPFH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DirectDeliveryNoticeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DirectDeliveryNoticeRow*))((::PBYTE)hIl2Cpp + ABBDINNOPFH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
