#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MessageContactsConditionRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FPNBNBKKAAP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE1CDF0)
#define FPNBNBKKAAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE1D370)
#define FPNBNBKKAAP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE1CF60)
#define FPNBNBKKAAP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE1C8A0)
#define FPNBNBKKAAP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE1CB30)
#define FPNBNBKKAAP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE1D000)
#define FPNBNBKKAAP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE1D050)
#define FPNBNBKKAAP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE1CE30)
#define FPNBNBKKAAP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE1CAD0)
#define FPNBNBKKAAP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE1CCA0)
#define FPNBNBKKAAP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE1CEC0)
#define FPNBNBKKAAP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE1C820)

	class FPNBNBKKAAP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactsConditionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactsConditionRow*>**)UnitySDK::FromName("", "FPNBNBKKAAP")->GetStaticField(0x156C0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FPNBNBKKAAP")->GetStaticField(0x156C8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "FPNBNBKKAAP")->GetStaticField(0x156D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FPNBNBKKAAP")->GetStaticField(0x51B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FPNBNBKKAAP")->GetStaticField(0x51B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPNBNBKKAAP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactsConditionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactsConditionRow*>*(*)())((::PBYTE)hIl2Cpp + FPNBNBKKAAP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FPNBNBKKAAP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactsConditionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactsConditionRow*>(*)())((::PBYTE)hIl2Cpp + FPNBNBKKAAP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MessageContactsConditionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MessageContactsConditionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FPNBNBKKAAP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FPNBNBKKAAP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPNBNBKKAAP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPNBNBKKAAP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FPNBNBKKAAP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FPNBNBKKAAP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FPNBNBKKAAP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MessageContactsConditionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MessageContactsConditionRow*))((::PBYTE)hIl2Cpp + FPNBNBKKAAP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
