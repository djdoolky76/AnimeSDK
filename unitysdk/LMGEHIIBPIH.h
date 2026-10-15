#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnniversaryCollectionTabConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LMGEHIIBPIH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D114440)
#define LMGEHIIBPIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D114A10)
#define LMGEHIIBPIH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1145B0)
#define LMGEHIIBPIH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D113EB0)
#define LMGEHIIBPIH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D114140)
#define LMGEHIIBPIH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D114650)
#define LMGEHIIBPIH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1146A0)
#define LMGEHIIBPIH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D114480)
#define LMGEHIIBPIH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1140E0)
#define LMGEHIIBPIH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1142B0)
#define LMGEHIIBPIH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D114510)
#define LMGEHIIBPIH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D113E30)

	class LMGEHIIBPIH : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LMGEHIIBPIH")->GetStaticField(0x447F0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LMGEHIIBPIH")->GetStaticField(0x447F8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AnniversaryCollectionTabConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AnniversaryCollectionTabConfigRow*>**)UnitySDK::FromName("", "LMGEHIIBPIH")->GetStaticField(0x44800);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LMGEHIIBPIH")->GetStaticField(0x10500);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LMGEHIIBPIH")->GetStaticField(0x10501);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMGEHIIBPIH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AnniversaryCollectionTabConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AnniversaryCollectionTabConfigRow*>*(*)())((::PBYTE)hIl2Cpp + LMGEHIIBPIH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LMGEHIIBPIH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AnniversaryCollectionTabConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AnniversaryCollectionTabConfigRow*>(*)())((::PBYTE)hIl2Cpp + LMGEHIIBPIH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AnniversaryCollectionTabConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AnniversaryCollectionTabConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LMGEHIIBPIH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LMGEHIIBPIH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMGEHIIBPIH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMGEHIIBPIH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LMGEHIIBPIH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LMGEHIIBPIH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LMGEHIIBPIH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AnniversaryCollectionTabConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AnniversaryCollectionTabConfigRow*))((::PBYTE)hIl2Cpp + LMGEHIIBPIH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
