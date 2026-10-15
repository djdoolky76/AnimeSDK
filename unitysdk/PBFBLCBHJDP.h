#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FightFestScoreRaceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PBFBLCBHJDP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2C4A90)
#define PBFBLCBHJDP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2C5010)
#define PBFBLCBHJDP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2C4C00)
#define PBFBLCBHJDP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2C4540)
#define PBFBLCBHJDP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2C47D0)
#define PBFBLCBHJDP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2C4CA0)
#define PBFBLCBHJDP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2C4CF0)
#define PBFBLCBHJDP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2C4AD0)
#define PBFBLCBHJDP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2C4770)
#define PBFBLCBHJDP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2C4900)
#define PBFBLCBHJDP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2C4B60)
#define PBFBLCBHJDP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2C44C0)

inline static constexpr unsigned int PBFBLCBHJDP_TypeDefinitionIndex = 13276;

	class PBFBLCBHJDP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestScoreRaceRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestScoreRaceRow*>**)UnitySDK::FromName("", "PBFBLCBHJDP")->GetStaticField(0x3DFB0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PBFBLCBHJDP")->GetStaticField(0x3DFB8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PBFBLCBHJDP")->GetStaticField(0x3DFC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PBFBLCBHJDP")->GetStaticField(0xD430);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PBFBLCBHJDP")->GetStaticField(0xD431);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBFBLCBHJDP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestScoreRaceRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestScoreRaceRow*>*(*)())((::PBYTE)hIl2Cpp + PBFBLCBHJDP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PBFBLCBHJDP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestScoreRaceRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestScoreRaceRow*>(*)())((::PBYTE)hIl2Cpp + PBFBLCBHJDP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::FightFestScoreRaceRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FightFestScoreRaceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PBFBLCBHJDP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PBFBLCBHJDP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBFBLCBHJDP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBFBLCBHJDP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PBFBLCBHJDP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBLCBHJDP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PBFBLCBHJDP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::FightFestScoreRaceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FightFestScoreRaceRow*))((::PBYTE)hIl2Cpp + PBFBLCBHJDP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
