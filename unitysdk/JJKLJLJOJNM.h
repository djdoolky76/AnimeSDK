#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityDiceRuleGroupRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define JJKLJLJOJNM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D03B7E0)
#define JJKLJLJOJNM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D03BDB0)
#define JJKLJLJOJNM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D03B950)
#define JJKLJLJOJNM_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D03B5D0)
#define JJKLJLJOJNM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D03B1D0)
#define JJKLJLJOJNM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D03B460)
#define JJKLJLJOJNM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D03B9F0)
#define JJKLJLJOJNM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D03BA40)
#define JJKLJLJOJNM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D03B820)
#define JJKLJLJOJNM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D03B400)
#define JJKLJLJOJNM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D03B650)
#define JJKLJLJOJNM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D03B8B0)
#define JJKLJLJOJNM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D03B150)

	class JJKLJLJOJNM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceRuleGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceRuleGroupRow*>**)UnitySDK::FromName("", "JJKLJLJOJNM")->GetStaticField(0x2ED10);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JJKLJLJOJNM")->GetStaticField(0x2ED18);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JJKLJLJOJNM")->GetStaticField(0x2ED20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JJKLJLJOJNM")->GetStaticField(0x9B50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JJKLJLJOJNM")->GetStaticField(0x9B51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJKLJLJOJNM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceRuleGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceRuleGroupRow*>*(*)())((::PBYTE)hIl2Cpp + JJKLJLJOJNM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JJKLJLJOJNM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceRuleGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceRuleGroupRow*>(*)())((::PBYTE)hIl2Cpp + JJKLJLJOJNM_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + JJKLJLJOJNM_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::ActivityDiceRuleGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityDiceRuleGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JJKLJLJOJNM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JJKLJLJOJNM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJKLJLJOJNM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJKLJLJOJNM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JJKLJLJOJNM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JJKLJLJOJNM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JJKLJLJOJNM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityDiceRuleGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityDiceRuleGroupRow*))((::PBYTE)hIl2Cpp + JJKLJLJOJNM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
