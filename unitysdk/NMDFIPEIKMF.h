#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesLevelAbilityRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NMDFIPEIKMF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D235D10)
#define NMDFIPEIKMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2362E0)
#define NMDFIPEIKMF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D235E80)
#define NMDFIPEIKMF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D235780)
#define NMDFIPEIKMF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D235A10)
#define NMDFIPEIKMF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D235F20)
#define NMDFIPEIKMF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D235F70)
#define NMDFIPEIKMF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D235D50)
#define NMDFIPEIKMF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2359B0)
#define NMDFIPEIKMF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D235B80)
#define NMDFIPEIKMF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D235DE0)
#define NMDFIPEIKMF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D235700)

inline static constexpr unsigned int NMDFIPEIKMF_TypeDefinitionIndex = 11112;

	class NMDFIPEIKMF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NMDFIPEIKMF")->GetStaticField(0x305A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesLevelAbilityRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesLevelAbilityRow*>**)UnitySDK::FromName("", "NMDFIPEIKMF")->GetStaticField(0x305A8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NMDFIPEIKMF")->GetStaticField(0x305B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NMDFIPEIKMF")->GetStaticField(0xA3C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NMDFIPEIKMF")->GetStaticField(0xA3C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMDFIPEIKMF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesLevelAbilityRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesLevelAbilityRow*>*(*)())((::PBYTE)hIl2Cpp + NMDFIPEIKMF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NMDFIPEIKMF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesLevelAbilityRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesLevelAbilityRow*>(*)())((::PBYTE)hIl2Cpp + NMDFIPEIKMF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingFesLevelAbilityRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingFesLevelAbilityRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NMDFIPEIKMF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NMDFIPEIKMF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMDFIPEIKMF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMDFIPEIKMF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NMDFIPEIKMF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NMDFIPEIKMF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NMDFIPEIKMF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingFesLevelAbilityRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingFesLevelAbilityRow*))((::PBYTE)hIl2Cpp + NMDFIPEIKMF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
