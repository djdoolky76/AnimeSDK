#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleAreaUnifiedConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LAEFALCGFMG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0D1A50)
#define LAEFALCGFMG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0D2020)
#define LAEFALCGFMG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0D1BC0)
#define LAEFALCGFMG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0D14C0)
#define LAEFALCGFMG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0D1750)
#define LAEFALCGFMG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0D1C60)
#define LAEFALCGFMG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0D1CB0)
#define LAEFALCGFMG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0D1A90)
#define LAEFALCGFMG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0D16F0)
#define LAEFALCGFMG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0D18C0)
#define LAEFALCGFMG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0D1B20)
#define LAEFALCGFMG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0D1440)

	class LAEFALCGFMG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LAEFALCGFMG")->GetStaticField(0x3A970);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAreaUnifiedConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAreaUnifiedConfigRow*>**)UnitySDK::FromName("", "LAEFALCGFMG")->GetStaticField(0x3A978);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LAEFALCGFMG")->GetStaticField(0x3A980);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LAEFALCGFMG")->GetStaticField(0xC7C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LAEFALCGFMG")->GetStaticField(0xC7C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAEFALCGFMG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAreaUnifiedConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAreaUnifiedConfigRow*>*(*)())((::PBYTE)hIl2Cpp + LAEFALCGFMG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LAEFALCGFMG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAreaUnifiedConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAreaUnifiedConfigRow*>(*)())((::PBYTE)hIl2Cpp + LAEFALCGFMG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::BattleAreaUnifiedConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattleAreaUnifiedConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LAEFALCGFMG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LAEFALCGFMG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAEFALCGFMG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAEFALCGFMG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LAEFALCGFMG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LAEFALCGFMG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LAEFALCGFMG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::BattleAreaUnifiedConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleAreaUnifiedConfigRow*))((::PBYTE)hIl2Cpp + LAEFALCGFMG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
