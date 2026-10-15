#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HealPoolConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FDAHJOGEJMD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDD9440)
#define FDAHJOGEJMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDD9A10)
#define FDAHJOGEJMD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDD95B0)
#define FDAHJOGEJMD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDD8EB0)
#define FDAHJOGEJMD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDD9140)
#define FDAHJOGEJMD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDD9650)
#define FDAHJOGEJMD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDD96A0)
#define FDAHJOGEJMD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDD9480)
#define FDAHJOGEJMD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDD90E0)
#define FDAHJOGEJMD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDD92B0)
#define FDAHJOGEJMD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDD9510)
#define FDAHJOGEJMD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDD8E30)

inline static constexpr unsigned int FDAHJOGEJMD_TypeDefinitionIndex = 13716;

	class FDAHJOGEJMD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FDAHJOGEJMD")->GetStaticField(0x105C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HealPoolConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HealPoolConfigRow*>**)UnitySDK::FromName("", "FDAHJOGEJMD")->GetStaticField(0x105C8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FDAHJOGEJMD")->GetStaticField(0x105D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FDAHJOGEJMD")->GetStaticField(0x3770);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FDAHJOGEJMD")->GetStaticField(0x3771);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDAHJOGEJMD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HealPoolConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HealPoolConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FDAHJOGEJMD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FDAHJOGEJMD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HealPoolConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HealPoolConfigRow*>(*)())((::PBYTE)hIl2Cpp + FDAHJOGEJMD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::HealPoolConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HealPoolConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FDAHJOGEJMD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FDAHJOGEJMD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDAHJOGEJMD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDAHJOGEJMD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FDAHJOGEJMD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FDAHJOGEJMD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FDAHJOGEJMD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::HealPoolConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HealPoolConfigRow*))((::PBYTE)hIl2Cpp + FDAHJOGEJMD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
