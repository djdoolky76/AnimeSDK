#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengePeakBossConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BLDEOEECPOC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E9D6C10)
#define BLDEOEECPOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D7190)
#define BLDEOEECPOC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E9D6D80)
#define BLDEOEECPOC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E9D66C0)
#define BLDEOEECPOC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E9D6950)
#define BLDEOEECPOC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E9D6E20)
#define BLDEOEECPOC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E9D6E70)
#define BLDEOEECPOC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E9D6C50)
#define BLDEOEECPOC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E9D68F0)
#define BLDEOEECPOC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E9D6AC0)
#define BLDEOEECPOC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E9D6CE0)
#define BLDEOEECPOC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E9D6640)

inline static constexpr unsigned int BLDEOEECPOC_TypeDefinitionIndex = 13050;

	class BLDEOEECPOC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakBossConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakBossConfigRow*>**)UnitySDK::FromName("", "BLDEOEECPOC")->GetStaticField(0x47BD0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BLDEOEECPOC")->GetStaticField(0x47BD8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BLDEOEECPOC")->GetStaticField(0x47BE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BLDEOEECPOC")->GetStaticField(0xEDA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BLDEOEECPOC")->GetStaticField(0xEDA1);
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
