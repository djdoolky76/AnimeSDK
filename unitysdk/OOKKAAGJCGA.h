#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeV2TipsRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OOKKAAGJCGA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2B8A30)
#define OOKKAAGJCGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2B9000)
#define OOKKAAGJCGA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2B8BA0)
#define OOKKAAGJCGA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2B84A0)
#define OOKKAAGJCGA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2B8730)
#define OOKKAAGJCGA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2B8C40)
#define OOKKAAGJCGA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2B8C90)
#define OOKKAAGJCGA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2B8A70)
#define OOKKAAGJCGA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2B86D0)
#define OOKKAAGJCGA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2B88A0)
#define OOKKAAGJCGA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2B8B00)
#define OOKKAAGJCGA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2B8420)

	class OOKKAAGJCGA : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "OOKKAAGJCGA")->GetStaticField(0x3CF30);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OOKKAAGJCGA")->GetStaticField(0x3CF38);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2TipsRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2TipsRow*>**)UnitySDK::FromName("", "OOKKAAGJCGA")->GetStaticField(0x3CF40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OOKKAAGJCGA")->GetStaticField(0xD140);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OOKKAAGJCGA")->GetStaticField(0xD141);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOKKAAGJCGA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2TipsRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2TipsRow*>*(*)())((::PBYTE)hIl2Cpp + OOKKAAGJCGA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OOKKAAGJCGA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2TipsRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2TipsRow*>(*)())((::PBYTE)hIl2Cpp + OOKKAAGJCGA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeV2TipsRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MatchThreeV2TipsRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OOKKAAGJCGA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OOKKAAGJCGA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOKKAAGJCGA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOKKAAGJCGA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OOKKAAGJCGA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OOKKAAGJCGA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OOKKAAGJCGA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MatchThreeV2TipsRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeV2TipsRow*))((::PBYTE)hIl2Cpp + OOKKAAGJCGA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
