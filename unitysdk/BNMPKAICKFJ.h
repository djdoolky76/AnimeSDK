#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DailyActiveQuestPoolRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BNMPKAICKFJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9EC3B0)
#define BNMPKAICKFJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9EC980)
#define BNMPKAICKFJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9EC520)
#define BNMPKAICKFJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9EBE20)
#define BNMPKAICKFJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9EC0B0)
#define BNMPKAICKFJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9EC5C0)
#define BNMPKAICKFJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9EC610)
#define BNMPKAICKFJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9EC3F0)
#define BNMPKAICKFJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9EC050)
#define BNMPKAICKFJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9EC220)
#define BNMPKAICKFJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9EC480)
#define BNMPKAICKFJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9EBDA0)

inline static constexpr unsigned int BNMPKAICKFJ_TypeDefinitionIndex = 13116;

	class BNMPKAICKFJ : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BNMPKAICKFJ")->GetStaticField(0x38B80);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyActiveQuestPoolRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyActiveQuestPoolRow*>**)UnitySDK::FromName("", "BNMPKAICKFJ")->GetStaticField(0x38B88);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BNMPKAICKFJ")->GetStaticField(0x38B90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BNMPKAICKFJ")->GetStaticField(0xC1A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BNMPKAICKFJ")->GetStaticField(0xC1A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNMPKAICKFJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyActiveQuestPoolRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyActiveQuestPoolRow*>*(*)())((::PBYTE)hIl2Cpp + BNMPKAICKFJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BNMPKAICKFJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyActiveQuestPoolRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyActiveQuestPoolRow*>(*)())((::PBYTE)hIl2Cpp + BNMPKAICKFJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DailyActiveQuestPoolRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DailyActiveQuestPoolRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BNMPKAICKFJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BNMPKAICKFJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNMPKAICKFJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNMPKAICKFJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BNMPKAICKFJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BNMPKAICKFJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BNMPKAICKFJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DailyActiveQuestPoolRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DailyActiveQuestPoolRow*))((::PBYTE)hIl2Cpp + BNMPKAICKFJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
