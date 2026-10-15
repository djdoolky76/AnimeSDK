#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitBonusAddRuleConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MEEEANGJGJJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D150440)
#define MEEEANGJGJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D150A10)
#define MEEEANGJGJJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1505B0)
#define MEEEANGJGJJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D14FEB0)
#define MEEEANGJGJJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D150140)
#define MEEEANGJGJJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D150650)
#define MEEEANGJGJJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1506A0)
#define MEEEANGJGJJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D150480)
#define MEEEANGJGJJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1500E0)
#define MEEEANGJGJJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1502B0)
#define MEEEANGJGJJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D150510)
#define MEEEANGJGJJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D14FE30)

	class MEEEANGJGJJ : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MEEEANGJGJJ")->GetStaticField(0x497E0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MEEEANGJGJJ")->GetStaticField(0x497E8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*>**)UnitySDK::FromName("", "MEEEANGJGJJ")->GetStaticField(0x497F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MEEEANGJGJJ")->GetStaticField(0x113D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MEEEANGJGJJ")->GetStaticField(0x113D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEEEANGJGJJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MEEEANGJGJJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MEEEANGJGJJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*>(*)())((::PBYTE)hIl2Cpp + MEEEANGJGJJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MEEEANGJGJJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MEEEANGJGJJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEEEANGJGJJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEEEANGJGJJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MEEEANGJGJJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MEEEANGJGJJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MEEEANGJGJJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*))((::PBYTE)hIl2Cpp + MEEEANGJGJJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
