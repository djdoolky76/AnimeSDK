#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityPanelSingleRewardRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JBFLMOACFOI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D013C80)
#define JBFLMOACFOI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D014170)
#define JBFLMOACFOI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D013D60)
#define JBFLMOACFOI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF4FDD0)
#define JBFLMOACFOI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0139C0)
#define JBFLMOACFOI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D013E00)
#define JBFLMOACFOI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D013E50)
#define JBFLMOACFOI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CFD67F0)
#define JBFLMOACFOI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D013960)
#define JBFLMOACFOI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D013B30)
#define JBFLMOACFOI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D013CC0)
#define JBFLMOACFOI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0138E0)

	class JBFLMOACFOI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JBFLMOACFOI")->GetStaticField(0x2ABA0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelSingleRewardRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelSingleRewardRow*>**)UnitySDK::FromName("", "JBFLMOACFOI")->GetStaticField(0x2ABA8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JBFLMOACFOI")->GetStaticField(0x2ABB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JBFLMOACFOI")->GetStaticField(0x8680);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JBFLMOACFOI")->GetStaticField(0x8681);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBFLMOACFOI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelSingleRewardRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelSingleRewardRow*>*(*)())((::PBYTE)hIl2Cpp + JBFLMOACFOI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JBFLMOACFOI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelSingleRewardRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelSingleRewardRow*>(*)())((::PBYTE)hIl2Cpp + JBFLMOACFOI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityPanelSingleRewardRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityPanelSingleRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JBFLMOACFOI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JBFLMOACFOI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBFLMOACFOI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBFLMOACFOI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JBFLMOACFOI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JBFLMOACFOI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JBFLMOACFOI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityPanelSingleRewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityPanelSingleRewardRow*))((::PBYTE)hIl2Cpp + JBFLMOACFOI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
