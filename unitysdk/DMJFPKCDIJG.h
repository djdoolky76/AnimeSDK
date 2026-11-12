#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/TrainPartyGridType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyGridTypeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DMJFPKCDIJG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DF13550)
#define DMJFPKCDIJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF14130)
#define DMJFPKCDIJG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DF138F0)
#define DMJFPKCDIJG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DF13590)
#define DMJFPKCDIJG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DF13E30)
#define DMJFPKCDIJG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DF13990)
#define DMJFPKCDIJG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DF139E0)
#define DMJFPKCDIJG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DF137C0)
#define DMJFPKCDIJG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DF13DD0)
#define DMJFPKCDIJG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DF13FA0)
#define DMJFPKCDIJG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DF13850)
#define DMJFPKCDIJG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DF13D50)

inline static constexpr unsigned int DMJFPKCDIJG_TypeDefinitionIndex = 15494;

	class DMJFPKCDIJG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DMJFPKCDIJG")->GetStaticField(0x310B0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DMJFPKCDIJG")->GetStaticField(0x310B8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridTypeConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridTypeConfigRow*>**)UnitySDK::FromName("", "DMJFPKCDIJG")->GetStaticField(0x310C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DMJFPKCDIJG")->GetStaticField(0xA600);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DMJFPKCDIJG")->GetStaticField(0xA601);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMJFPKCDIJG_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DMJFPKCDIJG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMJFPKCDIJG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMJFPKCDIJG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DMJFPKCDIJG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DMJFPKCDIJG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DMJFPKCDIJG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrainPartyGridTypeConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyGridTypeConfigRow*))((::PBYTE)hIl2Cpp + DMJFPKCDIJG_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridTypeConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridTypeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + DMJFPKCDIJG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DMJFPKCDIJG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridTypeConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridTypeConfigRow*>(*)())((::PBYTE)hIl2Cpp + DMJFPKCDIJG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrainPartyGridTypeConfigRow* LMBKNCAIDLC(::RPG::GameCore::TrainPartyGridType a1)
		{
			return ((::RPG::GameCore::TrainPartyGridTypeConfigRow*(*)(::RPG::GameCore::TrainPartyGridType))((::PBYTE)hIl2Cpp + DMJFPKCDIJG_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
