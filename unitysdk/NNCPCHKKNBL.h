#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournExpScoreRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define NNCPCHKKNBL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D20D330)
#define NNCPCHKKNBL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D20D8B0)
#define NNCPCHKKNBL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D20D4A0)
#define NNCPCHKKNBL_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D20CF00)
#define NNCPCHKKNBL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D20CB00)
#define NNCPCHKKNBL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D20CD90)
#define NNCPCHKKNBL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D20D540)
#define NNCPCHKKNBL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D20D590)
#define NNCPCHKKNBL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D20D370)
#define NNCPCHKKNBL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D20CD30)
#define NNCPCHKKNBL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D20CF80)
#define NNCPCHKKNBL_PKFBGCOOFDC_OFFSET UNITYSDK_OFFSET(0x1D20D0D0)
#define NNCPCHKKNBL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D20D400)
#define NNCPCHKKNBL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D20CA80)

inline static constexpr unsigned int NNCPCHKKNBL_TypeDefinitionIndex = 14973;

	class NNCPCHKKNBL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpScoreRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpScoreRow*>**)UnitySDK::FromName("", "NNCPCHKKNBL")->GetStaticField(0x41E00);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NNCPCHKKNBL")->GetStaticField(0x41E08);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NNCPCHKKNBL")->GetStaticField(0x41E10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NNCPCHKKNBL")->GetStaticField(0xFAD0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NNCPCHKKNBL")->GetStaticField(0xFAD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNCPCHKKNBL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpScoreRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpScoreRow*>*(*)())((::PBYTE)hIl2Cpp + NNCPCHKKNBL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NNCPCHKKNBL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpScoreRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpScoreRow*>(*)())((::PBYTE)hIl2Cpp + NNCPCHKKNBL_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpScoreRow*>, ::RPG::GameCore::RogueTournExpScoreRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpScoreRow*>, ::RPG::GameCore::RogueTournExpScoreRow*>(*)())((::PBYTE)hIl2Cpp + NNCPCHKKNBL_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournExpScoreRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournExpScoreRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NNCPCHKKNBL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IList_1<::RPG::GameCore::RogueTournExpScoreRow*>* PKFBGCOOFDC(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IList_1<::RPG::GameCore::RogueTournExpScoreRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NNCPCHKKNBL_PKFBGCOOFDC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NNCPCHKKNBL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNCPCHKKNBL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNCPCHKKNBL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NNCPCHKKNBL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NNCPCHKKNBL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NNCPCHKKNBL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournExpScoreRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournExpScoreRow*))((::PBYTE)hIl2Cpp + NNCPCHKKNBL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
