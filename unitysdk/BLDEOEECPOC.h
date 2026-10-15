#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengePeakBossConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BLDEOEECPOC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D823B50)
#define BLDEOEECPOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8240D0)
#define BLDEOEECPOC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D823CC0)
#define BLDEOEECPOC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D823600)
#define BLDEOEECPOC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D823890)
#define BLDEOEECPOC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D823D60)
#define BLDEOEECPOC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D823DB0)
#define BLDEOEECPOC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D823B90)
#define BLDEOEECPOC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D823830)
#define BLDEOEECPOC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D823A00)
#define BLDEOEECPOC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D823C20)
#define BLDEOEECPOC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D823580)

	class BLDEOEECPOC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakBossConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakBossConfigRow*>**)UnitySDK::FromName("", "BLDEOEECPOC")->GetStaticField(0x370B0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BLDEOEECPOC")->GetStaticField(0x370B8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BLDEOEECPOC")->GetStaticField(0x370C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BLDEOEECPOC")->GetStaticField(0xBAB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BLDEOEECPOC")->GetStaticField(0xBAB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLDEOEECPOC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakBossConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakBossConfigRow*>*(*)())((::PBYTE)hIl2Cpp + BLDEOEECPOC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BLDEOEECPOC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakBossConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakBossConfigRow*>(*)())((::PBYTE)hIl2Cpp + BLDEOEECPOC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChallengePeakBossConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChallengePeakBossConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BLDEOEECPOC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BLDEOEECPOC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLDEOEECPOC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLDEOEECPOC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BLDEOEECPOC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BLDEOEECPOC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BLDEOEECPOC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChallengePeakBossConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengePeakBossConfigRow*))((::PBYTE)hIl2Cpp + BLDEOEECPOC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
