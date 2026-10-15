#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPenaltyRuleConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNIHKJHJHCM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D3101D0)
#define PNIHKJHJHCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3107A0)
#define PNIHKJHJHCM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D310340)
#define PNIHKJHJHCM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D30FC40)
#define PNIHKJHJHCM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D30FED0)
#define PNIHKJHJHCM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D3103E0)
#define PNIHKJHJHCM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D310430)
#define PNIHKJHJHCM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D310210)
#define PNIHKJHJHCM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D30FE70)
#define PNIHKJHJHCM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D310040)
#define PNIHKJHJHCM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D3102A0)
#define PNIHKJHJHCM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D30FBC0)

inline static constexpr unsigned int PNIHKJHJHCM_TypeDefinitionIndex = 13618;

	class PNIHKJHJHCM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPenaltyRuleConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPenaltyRuleConfigRow*>**)UnitySDK::FromName("", "PNIHKJHJHCM")->GetStaticField(0x46930);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PNIHKJHJHCM")->GetStaticField(0x46938);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PNIHKJHJHCM")->GetStaticField(0x46940);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PNIHKJHJHCM")->GetStaticField(0x10D30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PNIHKJHJHCM")->GetStaticField(0x10D31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNIHKJHJHCM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPenaltyRuleConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPenaltyRuleConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PNIHKJHJHCM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PNIHKJHJHCM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPenaltyRuleConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPenaltyRuleConfigRow*>(*)())((::PBYTE)hIl2Cpp + PNIHKJHJHCM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightPenaltyRuleConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightPenaltyRuleConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PNIHKJHJHCM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PNIHKJHJHCM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNIHKJHJHCM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNIHKJHJHCM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PNIHKJHJHCM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNIHKJHJHCM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PNIHKJHJHCM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightPenaltyRuleConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightPenaltyRuleConfigRow*))((::PBYTE)hIl2Cpp + PNIHKJHJHCM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
