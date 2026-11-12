#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingConditionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OHGNLDPKKLL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E47E010)
#define OHGNLDPKKLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E47E5E0)
#define OHGNLDPKKLL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E47E180)
#define OHGNLDPKKLL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E47DA80)
#define OHGNLDPKKLL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E47DD10)
#define OHGNLDPKKLL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E47E220)
#define OHGNLDPKKLL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E47E270)
#define OHGNLDPKKLL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E47E050)
#define OHGNLDPKKLL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E47DCB0)
#define OHGNLDPKKLL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E47DE80)
#define OHGNLDPKKLL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E47E0E0)
#define OHGNLDPKKLL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E47DA00)

inline static constexpr unsigned int OHGNLDPKKLL_TypeDefinitionIndex = 12528;

	class OHGNLDPKKLL : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OHGNLDPKKLL")->GetStaticField(0x50740);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingConditionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingConditionRow*>**)UnitySDK::FromName("", "OHGNLDPKKLL")->GetStaticField(0x50748);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OHGNLDPKKLL")->GetStaticField(0x50750);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OHGNLDPKKLL")->GetStaticField(0xFF10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OHGNLDPKKLL")->GetStaticField(0xFF11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHGNLDPKKLL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingConditionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingConditionRow*>*(*)())((::PBYTE)hIl2Cpp + OHGNLDPKKLL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OHGNLDPKKLL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingConditionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingConditionRow*>(*)())((::PBYTE)hIl2Cpp + OHGNLDPKKLL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SwordTrainingConditionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SwordTrainingConditionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OHGNLDPKKLL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OHGNLDPKKLL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHGNLDPKKLL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHGNLDPKKLL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OHGNLDPKKLL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OHGNLDPKKLL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OHGNLDPKKLL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SwordTrainingConditionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SwordTrainingConditionRow*))((::PBYTE)hIl2Cpp + OHGNLDPKKLL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
