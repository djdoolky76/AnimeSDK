#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivityLocalLegendDifficulty.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityLocalLegendStageConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OEMFHCMCHIN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D262150)
#define OEMFHCMCHIN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D262710)
#define OEMFHCMCHIN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2622C0)
#define OEMFHCMCHIN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D261BB0)
#define OEMFHCMCHIN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D261E40)
#define OEMFHCMCHIN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D262360)
#define OEMFHCMCHIN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2623B0)
#define OEMFHCMCHIN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D262190)
#define OEMFHCMCHIN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D261DE0)
#define OEMFHCMCHIN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D261FB0)
#define OEMFHCMCHIN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D262220)
#define OEMFHCMCHIN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D261B30)

inline static constexpr unsigned int OEMFHCMCHIN_TypeDefinitionIndex = 11841;

	class OEMFHCMCHIN : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "OEMFHCMCHIN")->GetStaticField(0x33540);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityLocalLegendStageConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityLocalLegendStageConfigRow*>**)UnitySDK::FromName("", "OEMFHCMCHIN")->GetStaticField(0x33548);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OEMFHCMCHIN")->GetStaticField(0x33550);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OEMFHCMCHIN")->GetStaticField(0xACB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OEMFHCMCHIN")->GetStaticField(0xACB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEMFHCMCHIN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityLocalLegendStageConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityLocalLegendStageConfigRow*>*(*)())((::PBYTE)hIl2Cpp + OEMFHCMCHIN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OEMFHCMCHIN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityLocalLegendStageConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityLocalLegendStageConfigRow*>(*)())((::PBYTE)hIl2Cpp + OEMFHCMCHIN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityLocalLegendStageConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::RPG::GameCore::ActivityLocalLegendDifficulty a2)
		{
			return ((::RPG::GameCore::ActivityLocalLegendStageConfigRow*(*)(::System::UInt32, ::RPG::GameCore::ActivityLocalLegendDifficulty))((::PBYTE)hIl2Cpp + OEMFHCMCHIN_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OEMFHCMCHIN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEMFHCMCHIN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEMFHCMCHIN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OEMFHCMCHIN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OEMFHCMCHIN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OEMFHCMCHIN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityLocalLegendStageConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityLocalLegendStageConfigRow*))((::PBYTE)hIl2Cpp + OEMFHCMCHIN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
