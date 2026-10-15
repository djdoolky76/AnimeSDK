#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleCollegeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JHIBEJEPMHP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D001130)
#define JHIBEJEPMHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0016B0)
#define JHIBEJEPMHP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0012A0)
#define JHIBEJEPMHP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D000C20)
#define JHIBEJEPMHP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D000EB0)
#define JHIBEJEPMHP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D001340)
#define JHIBEJEPMHP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D001390)
#define JHIBEJEPMHP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D001170)
#define JHIBEJEPMHP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D000E50)
#define JHIBEJEPMHP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D000FE0)
#define JHIBEJEPMHP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D001200)
#define JHIBEJEPMHP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D000BA0)

inline static constexpr unsigned int JHIBEJEPMHP_TypeDefinitionIndex = 12837;

	class JHIBEJEPMHP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeConfigRow*>**)UnitySDK::FromName("", "JHIBEJEPMHP")->GetStaticField(0x2E510);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JHIBEJEPMHP")->GetStaticField(0x2E518);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JHIBEJEPMHP")->GetStaticField(0x2E520);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JHIBEJEPMHP")->GetStaticField(0x9970);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JHIBEJEPMHP")->GetStaticField(0x9971);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHIBEJEPMHP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + JHIBEJEPMHP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JHIBEJEPMHP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeConfigRow*>(*)())((::PBYTE)hIl2Cpp + JHIBEJEPMHP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::BattleCollegeConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattleCollegeConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JHIBEJEPMHP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JHIBEJEPMHP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHIBEJEPMHP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHIBEJEPMHP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JHIBEJEPMHP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JHIBEJEPMHP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JHIBEJEPMHP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::BattleCollegeConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleCollegeConfigRow*))((::PBYTE)hIl2Cpp + JHIBEJEPMHP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
