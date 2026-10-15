#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeV2BattleItemRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MPKJGJLLABK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1E05B0)
#define MPKJGJLLABK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1E0B70)
#define MPKJGJLLABK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1E0720)
#define MPKJGJLLABK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1E0020)
#define MPKJGJLLABK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1E02B0)
#define MPKJGJLLABK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1E07C0)
#define MPKJGJLLABK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1E0810)
#define MPKJGJLLABK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1E05F0)
#define MPKJGJLLABK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1E0250)
#define MPKJGJLLABK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1E03E0)
#define MPKJGJLLABK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1E0680)
#define MPKJGJLLABK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1DFFA0)

	class MPKJGJLLABK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2BattleItemRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2BattleItemRow*>**)UnitySDK::FromName("", "MPKJGJLLABK")->GetStaticField(0x2AB20);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MPKJGJLLABK")->GetStaticField(0x2AB28);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MPKJGJLLABK")->GetStaticField(0x2AB30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MPKJGJLLABK")->GetStaticField(0x8640);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MPKJGJLLABK")->GetStaticField(0x8641);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPKJGJLLABK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2BattleItemRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2BattleItemRow*>*(*)())((::PBYTE)hIl2Cpp + MPKJGJLLABK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MPKJGJLLABK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2BattleItemRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2BattleItemRow*>(*)())((::PBYTE)hIl2Cpp + MPKJGJLLABK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeV2BattleItemRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MatchThreeV2BattleItemRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MPKJGJLLABK_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MPKJGJLLABK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPKJGJLLABK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPKJGJLLABK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MPKJGJLLABK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MPKJGJLLABK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MPKJGJLLABK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MatchThreeV2BattleItemRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeV2BattleItemRow*))((::PBYTE)hIl2Cpp + MPKJGJLLABK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
