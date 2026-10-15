#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionHarvestDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CHFJKIEIMFM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DBE1A00)
#define CHFJKIEIMFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBE1F80)
#define CHFJKIEIMFM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DBE1B70)
#define CHFJKIEIMFM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DBE14F0)
#define CHFJKIEIMFM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DBE1780)
#define CHFJKIEIMFM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DBE1C10)
#define CHFJKIEIMFM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DBE1C60)
#define CHFJKIEIMFM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DBE1A40)
#define CHFJKIEIMFM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DBE1720)
#define CHFJKIEIMFM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DBE18B0)
#define CHFJKIEIMFM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DBE1AD0)
#define CHFJKIEIMFM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DBE1470)

inline static constexpr unsigned int CHFJKIEIMFM_TypeDefinitionIndex = 13260;

	class CHFJKIEIMFM : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CHFJKIEIMFM")->GetStaticField(0x3CD40);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionHarvestDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionHarvestDataRow*>**)UnitySDK::FromName("", "CHFJKIEIMFM")->GetStaticField(0x3CD48);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CHFJKIEIMFM")->GetStaticField(0x3CD50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CHFJKIEIMFM")->GetStaticField(0xC240);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CHFJKIEIMFM")->GetStaticField(0xC241);
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
