#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AetherDivideSpiritTrialRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LJMMBDGNHFE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0D8370)
#define LJMMBDGNHFE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0D8940)
#define LJMMBDGNHFE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0D84E0)
#define LJMMBDGNHFE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0D7DE0)
#define LJMMBDGNHFE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0D8070)
#define LJMMBDGNHFE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0D8580)
#define LJMMBDGNHFE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0D85D0)
#define LJMMBDGNHFE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0D83B0)
#define LJMMBDGNHFE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0D8010)
#define LJMMBDGNHFE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0D81E0)
#define LJMMBDGNHFE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0D8440)
#define LJMMBDGNHFE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0D7D60)

inline static constexpr unsigned int LJMMBDGNHFE_TypeDefinitionIndex = 10935;

	class LJMMBDGNHFE : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LJMMBDGNHFE")->GetStaticField(0x3D070);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LJMMBDGNHFE")->GetStaticField(0x3D078);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritTrialRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritTrialRow*>**)UnitySDK::FromName("", "LJMMBDGNHFE")->GetStaticField(0x3D080);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LJMMBDGNHFE")->GetStaticField(0xC370);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LJMMBDGNHFE")->GetStaticField(0xC371);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJMMBDGNHFE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritTrialRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritTrialRow*>*(*)())((::PBYTE)hIl2Cpp + LJMMBDGNHFE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LJMMBDGNHFE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritTrialRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritTrialRow*>(*)())((::PBYTE)hIl2Cpp + LJMMBDGNHFE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AetherDivideSpiritTrialRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AetherDivideSpiritTrialRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LJMMBDGNHFE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LJMMBDGNHFE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJMMBDGNHFE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJMMBDGNHFE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LJMMBDGNHFE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LJMMBDGNHFE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LJMMBDGNHFE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AetherDivideSpiritTrialRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherDivideSpiritTrialRow*))((::PBYTE)hIl2Cpp + LJMMBDGNHFE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
