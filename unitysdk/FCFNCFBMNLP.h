#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/StarFightDifficulty.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityStarFightStageConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FCFNCFBMNLP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDD0690)
#define FCFNCFBMNLP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDD0C50)
#define FCFNCFBMNLP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDD0800)
#define FCFNCFBMNLP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDD00F0)
#define FCFNCFBMNLP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDD0380)
#define FCFNCFBMNLP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDD08A0)
#define FCFNCFBMNLP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDD08F0)
#define FCFNCFBMNLP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDD06D0)
#define FCFNCFBMNLP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDD0320)
#define FCFNCFBMNLP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDD04F0)
#define FCFNCFBMNLP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDD0760)
#define FCFNCFBMNLP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDD0070)

inline static constexpr unsigned int FCFNCFBMNLP_TypeDefinitionIndex = 12390;

	class FCFNCFBMNLP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FCFNCFBMNLP")->GetStaticField(0xFE40);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "FCFNCFBMNLP")->GetStaticField(0xFE48);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityStarFightStageConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityStarFightStageConfigRow*>**)UnitySDK::FromName("", "FCFNCFBMNLP")->GetStaticField(0xFE50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FCFNCFBMNLP")->GetStaticField(0x35F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FCFNCFBMNLP")->GetStaticField(0x35F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCFNCFBMNLP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityStarFightStageConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityStarFightStageConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FCFNCFBMNLP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FCFNCFBMNLP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityStarFightStageConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityStarFightStageConfigRow*>(*)())((::PBYTE)hIl2Cpp + FCFNCFBMNLP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityStarFightStageConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::RPG::GameCore::StarFightDifficulty a2)
		{
			return ((::RPG::GameCore::ActivityStarFightStageConfigRow*(*)(::System::UInt32, ::RPG::GameCore::StarFightDifficulty))((::PBYTE)hIl2Cpp + FCFNCFBMNLP_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FCFNCFBMNLP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCFNCFBMNLP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCFNCFBMNLP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FCFNCFBMNLP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FCFNCFBMNLP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FCFNCFBMNLP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityStarFightStageConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityStarFightStageConfigRow*))((::PBYTE)hIl2Cpp + FCFNCFBMNLP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
