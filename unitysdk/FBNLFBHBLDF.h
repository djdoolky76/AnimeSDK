#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityFindTrotterConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FBNLFBHBLDF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDCDC70)
#define FBNLFBHBLDF_CBFLGNHHFHP_OFFSET UNITYSDK_OFFSET(0x1CDCE7B0)
#define FBNLFBHBLDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDCECB0)
#define FBNLFBHBLDF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDCDDE0)
#define FBNLFBHBLDF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDCD6A0)
#define FBNLFBHBLDF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDCD930)
#define FBNLFBHBLDF_GAIEOHNJIEO_OFFSET UNITYSDK_OFFSET(0x1CDCE8F0)
#define FBNLFBHBLDF_HFBAFEEPOLN_OFFSET UNITYSDK_OFFSET(0x1CDCEB60)
#define FBNLFBHBLDF_HIHCFCDFMPF_OFFSET UNITYSDK_OFFSET(0x1CDCE310)
#define FBNLFBHBLDF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDCDE80)
#define FBNLFBHBLDF_IKMPPMFBKCH_OFFSET UNITYSDK_OFFSET(0x1CDCE850)
#define FBNLFBHBLDF_JFBAHNNHOMP_OFFSET UNITYSDK_OFFSET(0x1CDCE270)
#define FBNLFBHBLDF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDCDED0)
#define FBNLFBHBLDF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDCDCB0)
#define FBNLFBHBLDF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDCD8D0)
#define FBNLFBHBLDF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDCDAA0)
#define FBNLFBHBLDF_OBADNDIOLCE_OFFSET UNITYSDK_OFFSET(0x1CDCE990)
#define FBNLFBHBLDF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDCDD40)
#define FBNLFBHBLDF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDCD620)

	class FBNLFBHBLDF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet_BKLPOABMOBG()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)UnitySDK::FromName("", "FBNLFBHBLDF")->GetStaticField(0xFC20);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "FBNLFBHBLDF")->GetStaticField(0xFC28);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet_BEFBNIFMIEO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)UnitySDK::FromName("", "FBNLFBHBLDF")->GetStaticField(0xFC30);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FBNLFBHBLDF")->GetStaticField(0xFC38);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet_GMBGDDHGOGA()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)UnitySDK::FromName("", "FBNLFBHBLDF")->GetStaticField(0xFC40);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet_AGGJIJJACDF()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)UnitySDK::FromName("", "FBNLFBHBLDF")->GetStaticField(0xFC48);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFindTrotterConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFindTrotterConfigRow*>**)UnitySDK::FromName("", "FBNLFBHBLDF")->GetStaticField(0xFC50);
		}

		static ::System::Boolean* StaticGet_LINNHMPNCJG()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FBNLFBHBLDF")->GetStaticField(0x35A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FBNLFBHBLDF")->GetStaticField(0x35A1);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FBNLFBHBLDF")->GetStaticField(0x35A2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBNLFBHBLDF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFindTrotterConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFindTrotterConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FBNLFBHBLDF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FBNLFBHBLDF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFindTrotterConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFindTrotterConfigRow*>(*)())((::PBYTE)hIl2Cpp + FBNLFBHBLDF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityFindTrotterConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ActivityFindTrotterConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FBNLFBHBLDF_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FBNLFBHBLDF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBNLFBHBLDF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBNLFBHBLDF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FBNLFBHBLDF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FBNLFBHBLDF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FBNLFBHBLDF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityFindTrotterConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityFindTrotterConfigRow*))((::PBYTE)hIl2Cpp + FBNLFBHBLDF_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* JFBAHNNHOMP(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FBNLFBHBLDF_JFBAHNNHOMP_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* CBFLGNHHFHP(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FBNLFBHBLDF_CBFLGNHHFHP_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* IKMPPMFBKCH(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FBNLFBHBLDF_IKMPPMFBKCH_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GAIEOHNJIEO(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FBNLFBHBLDF_GAIEOHNJIEO_OFFSET))(a1);
		}

		static ::System::Void HIHCFCDFMPF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBNLFBHBLDF_HIHCFCDFMPF_OFFSET))();
		}

		static ::System::Void OBADNDIOLCE(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FBNLFBHBLDF_OBADNDIOLCE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void HFBAFEEPOLN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBNLFBHBLDF_HFBAFEEPOLN_OFFSET))();
		}

	};
