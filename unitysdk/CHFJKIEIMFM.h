#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionHarvestDataRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CHFJKIEIMFM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC0F2B0)
#define CHFJKIEIMFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC0F830)
#define CHFJKIEIMFM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC0F420)
#define CHFJKIEIMFM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC0EDA0)
#define CHFJKIEIMFM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC0F030)
#define CHFJKIEIMFM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC0F4C0)
#define CHFJKIEIMFM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC0F510)
#define CHFJKIEIMFM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC0F2F0)
#define CHFJKIEIMFM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC0EFD0)
#define CHFJKIEIMFM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC0F160)
#define CHFJKIEIMFM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC0F380)
#define CHFJKIEIMFM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC0ED20)

	class CHFJKIEIMFM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionHarvestDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionHarvestDataRow*>**)UnitySDK::FromName("", "CHFJKIEIMFM")->GetStaticField(0x42DE0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CHFJKIEIMFM")->GetStaticField(0x42DE8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CHFJKIEIMFM")->GetStaticField(0x42DF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CHFJKIEIMFM")->GetStaticField(0x10130);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CHFJKIEIMFM")->GetStaticField(0x10131);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHFJKIEIMFM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionHarvestDataRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionHarvestDataRow*>*(*)())((::PBYTE)hIl2Cpp + CHFJKIEIMFM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CHFJKIEIMFM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionHarvestDataRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionHarvestDataRow*>(*)())((::PBYTE)hIl2Cpp + CHFJKIEIMFM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ExpeditionHarvestDataRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ExpeditionHarvestDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CHFJKIEIMFM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CHFJKIEIMFM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHFJKIEIMFM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHFJKIEIMFM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CHFJKIEIMFM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CHFJKIEIMFM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CHFJKIEIMFM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ExpeditionHarvestDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ExpeditionHarvestDataRow*))((::PBYTE)hIl2Cpp + CHFJKIEIMFM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
