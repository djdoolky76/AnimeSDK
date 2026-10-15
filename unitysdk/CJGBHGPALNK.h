#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityLocalLegendRewardConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CJGBHGPALNK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC19C40)
#define CJGBHGPALNK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC1A210)
#define CJGBHGPALNK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC19DB0)
#define CJGBHGPALNK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC196B0)
#define CJGBHGPALNK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC19940)
#define CJGBHGPALNK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC19E50)
#define CJGBHGPALNK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC19EA0)
#define CJGBHGPALNK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC19C80)
#define CJGBHGPALNK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC198E0)
#define CJGBHGPALNK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC19AB0)
#define CJGBHGPALNK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC19D10)
#define CJGBHGPALNK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC19630)

inline static constexpr unsigned int CJGBHGPALNK_TypeDefinitionIndex = 11846;

	class CJGBHGPALNK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityLocalLegendRewardConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityLocalLegendRewardConfigRow*>**)UnitySDK::FromName("", "CJGBHGPALNK")->GetStaticField(0x43130);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CJGBHGPALNK")->GetStaticField(0x43138);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CJGBHGPALNK")->GetStaticField(0x43140);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CJGBHGPALNK")->GetStaticField(0x10280);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CJGBHGPALNK")->GetStaticField(0x10281);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJGBHGPALNK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityLocalLegendRewardConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityLocalLegendRewardConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CJGBHGPALNK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CJGBHGPALNK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityLocalLegendRewardConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityLocalLegendRewardConfigRow*>(*)())((::PBYTE)hIl2Cpp + CJGBHGPALNK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityLocalLegendRewardConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityLocalLegendRewardConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CJGBHGPALNK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CJGBHGPALNK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJGBHGPALNK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJGBHGPALNK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CJGBHGPALNK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CJGBHGPALNK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CJGBHGPALNK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityLocalLegendRewardConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityLocalLegendRewardConfigRow*))((::PBYTE)hIl2Cpp + CJGBHGPALNK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
