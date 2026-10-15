#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityDiceRuleGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JJKLJLJOJNM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D00D7E0)
#define JJKLJLJOJNM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D00DDB0)
#define JJKLJLJOJNM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D00D950)
#define JJKLJLJOJNM_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D00D5D0)
#define JJKLJLJOJNM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D00D1D0)
#define JJKLJLJOJNM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D00D460)
#define JJKLJLJOJNM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D00D9F0)
#define JJKLJLJOJNM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D00DA40)
#define JJKLJLJOJNM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D00D820)
#define JJKLJLJOJNM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D00D400)
#define JJKLJLJOJNM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D00D650)
#define JJKLJLJOJNM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D00D8B0)
#define JJKLJLJOJNM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D00D150)

inline static constexpr unsigned int JJKLJLJOJNM_TypeDefinitionIndex = 11273;

	class JJKLJLJOJNM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceRuleGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceRuleGroupRow*>**)UnitySDK::FromName("", "JJKLJLJOJNM")->GetStaticField(0x2F120);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JJKLJLJOJNM")->GetStaticField(0x2F128);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JJKLJLJOJNM")->GetStaticField(0x2F130);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JJKLJLJOJNM")->GetStaticField(0x9B00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JJKLJLJOJNM")->GetStaticField(0x9B01);
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

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceRuleGroupRow*>, ::RPG::GameCore::ActivityDiceRuleGroupRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceRuleGroupRow*>, ::RPG::GameCore::ActivityDiceRuleGroupRow*>(*)())((::PBYTE)hIl2Cpp + JJKLJLJOJNM_EHAFELPCLKB_OFFSET))();
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
