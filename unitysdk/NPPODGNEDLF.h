#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AdventurePhaseInitParams; }
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::Client { class IGamePhase; }
namespace RPG::Client { template <typename T> class FlagSwitch_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define NPPODGNEDLF_AALOEHPBOEP_OFFSET UNITYSDK_OFFSET(0xBD0E300)
#define NPPODGNEDLF_BAOGHGIGEMJ_OFFSET UNITYSDK_OFFSET(0xBD0E510)
#define NPPODGNEDLF_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBD0D790)
#define NPPODGNEDLF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBD0D4C0)
#define NPPODGNEDLF_MNOGBMKAKDH_OFFSET UNITYSDK_OFFSET(0xBD0D8B0)
#define NPPODGNEDLF_MODHPOBBPDL_OFFSET UNITYSDK_OFFSET(0xBD0E920)
#define NPPODGNEDLF_NAAMABDEJNF_OFFSET UNITYSDK_OFFSET(0xBD0E550)
#define NPPODGNEDLF_NIKEFBPAJJC_OFFSET UNITYSDK_OFFSET(0xBD0E270)
#define NPPODGNEDLF_ODMICAFBAKI_OFFSET UNITYSDK_OFFSET(0xBD0E3A0)

inline static constexpr unsigned int NPPODGNEDLF_TypeDefinitionIndex = 61170;

	class NPPODGNEDLF : public ::System::Object
	{
	public:
		static ::RPG::Client::AdventurePhaseInitParams** StaticGet_PDDPAJMFNHM()
		{
			return (::RPG::Client::AdventurePhaseInitParams**)UnitySDK::FromName("", "NPPODGNEDLF")->GetStaticField(0x55E20);
		}

		static ::RPG::Client::FlagSwitch_1<::System::String*>** StaticGet_PGHCHKMLBBK()
		{
			return (::RPG::Client::FlagSwitch_1<::System::String*>**)UnitySDK::FromName("", "NPPODGNEDLF")->GetStaticField(0x55E28);
		}

		static ::System::Action** StaticGet_GIMNCPBENKG()
		{
			return (::System::Action**)UnitySDK::FromName("", "NPPODGNEDLF")->GetStaticField(0x55E30);
		}

		static ::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPPODGNEDLF_KPJGDHLENIP_OFFSET))();
		}

		static ::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPPODGNEDLF_HADOHLNHHGB_OFFSET))();
		}

		static ::System::Void MNOGBMKAKDH(::RPG::Client::BattleGamePhase* a1)
		{
			return ((::System::Void(*)(::RPG::Client::BattleGamePhase*))((::PBYTE)hIl2Cpp + NPPODGNEDLF_MNOGBMKAKDH_OFFSET))(a1);
		}

		static ::System::Void NIKEFBPAJJC(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + NPPODGNEDLF_NIKEFBPAJJC_OFFSET))(a1);
		}

		static ::System::Void AALOEHPBOEP(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + NPPODGNEDLF_AALOEHPBOEP_OFFSET))(a1);
		}

		static ::System::Void ODMICAFBAKI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPPODGNEDLF_ODMICAFBAKI_OFFSET))();
		}

		static ::System::Void BAOGHGIGEMJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + NPPODGNEDLF_BAOGHGIGEMJ_OFFSET))(a1);
		}

		static ::System::Void NAAMABDEJNF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPPODGNEDLF_NAAMABDEJNF_OFFSET))();
		}

		static ::System::Void MODHPOBBPDL(::System::String* a1, ::RPG::Client::IGamePhase* a2)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + NPPODGNEDLF_MODHPOBBPDL_OFFSET))(a1, a2);
		}

	};
