#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesSkillTreePhaseRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DCNJLNMEAOM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCDBAB0)
#define DCNJLNMEAOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCDC030)
#define DCNJLNMEAOM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCDBC20)
#define DCNJLNMEAOM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCDB5A0)
#define DCNJLNMEAOM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCDB830)
#define DCNJLNMEAOM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCDBCC0)
#define DCNJLNMEAOM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCDBD10)
#define DCNJLNMEAOM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCDBAF0)
#define DCNJLNMEAOM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCDB7D0)
#define DCNJLNMEAOM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCDB960)
#define DCNJLNMEAOM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCDBB80)
#define DCNJLNMEAOM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCDB520)

inline static constexpr unsigned int DCNJLNMEAOM_TypeDefinitionIndex = 12206;

	class DCNJLNMEAOM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DCNJLNMEAOM")->GetStaticField(0x482B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSkillTreePhaseRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSkillTreePhaseRow*>**)UnitySDK::FromName("", "DCNJLNMEAOM")->GetStaticField(0x482B8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DCNJLNMEAOM")->GetStaticField(0x482C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DCNJLNMEAOM")->GetStaticField(0x11160);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DCNJLNMEAOM")->GetStaticField(0x11161);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCNJLNMEAOM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSkillTreePhaseRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSkillTreePhaseRow*>*(*)())((::PBYTE)hIl2Cpp + DCNJLNMEAOM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DCNJLNMEAOM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSkillTreePhaseRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSkillTreePhaseRow*>(*)())((::PBYTE)hIl2Cpp + DCNJLNMEAOM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesSkillTreePhaseRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesSkillTreePhaseRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DCNJLNMEAOM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DCNJLNMEAOM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCNJLNMEAOM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCNJLNMEAOM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DCNJLNMEAOM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DCNJLNMEAOM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DCNJLNMEAOM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesSkillTreePhaseRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesSkillTreePhaseRow*))((::PBYTE)hIl2Cpp + DCNJLNMEAOM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
