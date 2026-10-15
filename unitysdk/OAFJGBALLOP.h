#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyPassengerConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OAFJGBALLOP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2493B0)
#define OAFJGBALLOP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D249EC0)
#define OAFJGBALLOP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D249750)
#define OAFJGBALLOP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2493F0)
#define OAFJGBALLOP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D249C40)
#define OAFJGBALLOP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2497F0)
#define OAFJGBALLOP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D249840)
#define OAFJGBALLOP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D249620)
#define OAFJGBALLOP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D249BE0)
#define OAFJGBALLOP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D249D70)
#define OAFJGBALLOP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2496B0)
#define OAFJGBALLOP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D249B60)

inline static constexpr unsigned int OAFJGBALLOP_TypeDefinitionIndex = 15346;

	class OAFJGBALLOP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyPassengerConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyPassengerConfigRow*>**)UnitySDK::FromName("", "OAFJGBALLOP")->GetStaticField(0x31950);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "OAFJGBALLOP")->GetStaticField(0x31958);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OAFJGBALLOP")->GetStaticField(0x31960);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OAFJGBALLOP")->GetStaticField(0xA6C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OAFJGBALLOP")->GetStaticField(0xA6C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAFJGBALLOP_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OAFJGBALLOP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAFJGBALLOP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAFJGBALLOP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OAFJGBALLOP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OAFJGBALLOP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OAFJGBALLOP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrainPartyPassengerConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyPassengerConfigRow*))((::PBYTE)hIl2Cpp + OAFJGBALLOP_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyPassengerConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyPassengerConfigRow*>*(*)())((::PBYTE)hIl2Cpp + OAFJGBALLOP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OAFJGBALLOP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyPassengerConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyPassengerConfigRow*>(*)())((::PBYTE)hIl2Cpp + OAFJGBALLOP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrainPartyPassengerConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TrainPartyPassengerConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OAFJGBALLOP_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
