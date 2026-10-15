#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParkourRailBallSkillConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PMNJKEIEAJP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D30C250)
#define PMNJKEIEAJP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D30C820)
#define PMNJKEIEAJP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D30C3C0)
#define PMNJKEIEAJP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D30BCC0)
#define PMNJKEIEAJP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D30BF50)
#define PMNJKEIEAJP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D30C460)
#define PMNJKEIEAJP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D30C4B0)
#define PMNJKEIEAJP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D30C290)
#define PMNJKEIEAJP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D30BEF0)
#define PMNJKEIEAJP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D30C0C0)
#define PMNJKEIEAJP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D30C320)
#define PMNJKEIEAJP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D30BC40)

	class PMNJKEIEAJP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PMNJKEIEAJP")->GetStaticField(0x46420);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PMNJKEIEAJP")->GetStaticField(0x46428);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRailBallSkillConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRailBallSkillConfigRow*>**)UnitySDK::FromName("", "PMNJKEIEAJP")->GetStaticField(0x46430);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PMNJKEIEAJP")->GetStaticField(0x10C60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PMNJKEIEAJP")->GetStaticField(0x10C61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMNJKEIEAJP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRailBallSkillConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRailBallSkillConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PMNJKEIEAJP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PMNJKEIEAJP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRailBallSkillConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRailBallSkillConfigRow*>(*)())((::PBYTE)hIl2Cpp + PMNJKEIEAJP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ParkourRailBallSkillConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ParkourRailBallSkillConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PMNJKEIEAJP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PMNJKEIEAJP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMNJKEIEAJP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMNJKEIEAJP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PMNJKEIEAJP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PMNJKEIEAJP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PMNJKEIEAJP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ParkourRailBallSkillConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ParkourRailBallSkillConfigRow*))((::PBYTE)hIl2Cpp + PMNJKEIEAJP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
