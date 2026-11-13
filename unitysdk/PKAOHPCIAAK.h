#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournContentExhibitionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PKAOHPCIAAK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E735460)
#define PKAOHPCIAAK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7359E0)
#define PKAOHPCIAAK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E7355D0)
#define PKAOHPCIAAK_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1E7352B0)
#define PKAOHPCIAAK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E734EF0)
#define PKAOHPCIAAK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E735180)
#define PKAOHPCIAAK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E735670)
#define PKAOHPCIAAK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E7356C0)
#define PKAOHPCIAAK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E7354A0)
#define PKAOHPCIAAK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E735120)
#define PKAOHPCIAAK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E735310)
#define PKAOHPCIAAK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E735530)
#define PKAOHPCIAAK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E734E70)

inline static constexpr unsigned int PKAOHPCIAAK_TypeDefinitionIndex = 15192;

	class PKAOHPCIAAK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PKAOHPCIAAK")->GetStaticField(0x40460);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PKAOHPCIAAK")->GetStaticField(0x40468);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*>**)UnitySDK::FromName("", "PKAOHPCIAAK")->GetStaticField(0x40470);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PKAOHPCIAAK")->GetStaticField(0xCF10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PKAOHPCIAAK")->GetStaticField(0xCF11);
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

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*>, ::RPG::GameCore::RogueTournContentExhibitionRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*>, ::RPG::GameCore::RogueTournContentExhibitionRow*>(*)())((::PBYTE)hIl2Cpp + PKAOHPCIAAK_EHAFELPCLKB_OFFSET))();
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
