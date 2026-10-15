#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournContentExhibitionRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define PKAOHPCIAAK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2F6CB0)
#define PKAOHPCIAAK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2F7230)
#define PKAOHPCIAAK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2F6E20)
#define PKAOHPCIAAK_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D2F6B00)
#define PKAOHPCIAAK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2F6740)
#define PKAOHPCIAAK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2F69D0)
#define PKAOHPCIAAK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2F6EC0)
#define PKAOHPCIAAK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2F6F10)
#define PKAOHPCIAAK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2F6CF0)
#define PKAOHPCIAAK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2F6970)
#define PKAOHPCIAAK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2F6B60)
#define PKAOHPCIAAK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2F6D80)
#define PKAOHPCIAAK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2F66C0)

	class PKAOHPCIAAK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*>**)UnitySDK::FromName("", "PKAOHPCIAAK")->GetStaticField(0x448A0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PKAOHPCIAAK")->GetStaticField(0x448A8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PKAOHPCIAAK")->GetStaticField(0x448B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PKAOHPCIAAK")->GetStaticField(0x10520);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PKAOHPCIAAK")->GetStaticField(0x10521);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKAOHPCIAAK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*>*(*)())((::PBYTE)hIl2Cpp + PKAOHPCIAAK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PKAOHPCIAAK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*>(*)())((::PBYTE)hIl2Cpp + PKAOHPCIAAK_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + PKAOHPCIAAK_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournContentExhibitionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournContentExhibitionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PKAOHPCIAAK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PKAOHPCIAAK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKAOHPCIAAK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKAOHPCIAAK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PKAOHPCIAAK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PKAOHPCIAAK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PKAOHPCIAAK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournContentExhibitionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournContentExhibitionRow*))((::PBYTE)hIl2Cpp + PKAOHPCIAAK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
