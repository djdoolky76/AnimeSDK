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

#define DMJFPKCDIJG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD16680)
#define DMJFPKCDIJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD17260)
#define DMJFPKCDIJG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD16A20)
#define DMJFPKCDIJG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD166C0)
#define DMJFPKCDIJG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD16F60)
#define DMJFPKCDIJG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD16AC0)
#define DMJFPKCDIJG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD16B10)
#define DMJFPKCDIJG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD168F0)
#define DMJFPKCDIJG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD16F00)
#define DMJFPKCDIJG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD170D0)
#define DMJFPKCDIJG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD16980)
#define DMJFPKCDIJG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD16E80)

inline static constexpr unsigned int DMJFPKCDIJG_TypeDefinitionIndex = 15338;

	class DMJFPKCDIJG : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DMJFPKCDIJG")->GetStaticField(0x499C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridTypeConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridTypeConfigRow*>**)UnitySDK::FromName("", "DMJFPKCDIJG")->GetStaticField(0x499C8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DMJFPKCDIJG")->GetStaticField(0x499D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DMJFPKCDIJG")->GetStaticField(0x10FA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DMJFPKCDIJG")->GetStaticField(0x10FA1);
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
