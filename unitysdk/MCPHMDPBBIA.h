#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesAchievementRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MCPHMDPBBIA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1122A0)
#define MCPHMDPBBIA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D112820)
#define MCPHMDPBBIA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D112410)
#define MCPHMDPBBIA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D111D50)
#define MCPHMDPBBIA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D111FE0)
#define MCPHMDPBBIA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1124B0)
#define MCPHMDPBBIA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D112500)
#define MCPHMDPBBIA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1122E0)
#define MCPHMDPBBIA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D111F80)
#define MCPHMDPBBIA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D112110)
#define MCPHMDPBBIA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D112370)
#define MCPHMDPBBIA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D111CD0)

inline static constexpr unsigned int MCPHMDPBBIA_TypeDefinitionIndex = 12224;

	class MCPHMDPBBIA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MCPHMDPBBIA")->GetStaticField(0x410F0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAchievementRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAchievementRow*>**)UnitySDK::FromName("", "MCPHMDPBBIA")->GetStaticField(0x410F8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MCPHMDPBBIA")->GetStaticField(0x41100);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MCPHMDPBBIA")->GetStaticField(0xF810);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MCPHMDPBBIA")->GetStaticField(0xF811);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCPHMDPBBIA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAchievementRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAchievementRow*>*(*)())((::PBYTE)hIl2Cpp + MCPHMDPBBIA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MCPHMDPBBIA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAchievementRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAchievementRow*>(*)())((::PBYTE)hIl2Cpp + MCPHMDPBBIA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesAchievementRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesAchievementRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MCPHMDPBBIA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MCPHMDPBBIA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCPHMDPBBIA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCPHMDPBBIA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MCPHMDPBBIA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MCPHMDPBBIA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MCPHMDPBBIA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesAchievementRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesAchievementRow*))((::PBYTE)hIl2Cpp + MCPHMDPBBIA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
