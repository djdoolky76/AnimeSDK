#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIController; }
namespace System { class Action; }
namespace System { class String; }

#define MGFEBKHOJJP_CTOR_OFFSET UNITYSDK_OFFSET(0xB9184A0)
#define MGFEBKHOJJP_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0xB9184F0)
#define MGFEBKHOJJP_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0xB9184B0)
#define MGFEBKHOJJP_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0xB918850)
#define MGFEBKHOJJP_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0xB9187B0)
#define MGFEBKHOJJP_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0xB918810)
#define MGFEBKHOJJP_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0xB9186E0)
#define MGFEBKHOJJP_OLENGDCIONA_OFFSET UNITYSDK_OFFSET(0xB918660)

inline static constexpr unsigned int MGFEBKHOJJP_TypeDefinitionIndex = 60465;

	class MGFEBKHOJJP : public ::System::Object
	{
	public:
		::RPG::Client::UIController* JONJFNGDLKI; // 0x10
		::RPG::GameCore::EvolveBuildSeason NCDEHPEABKF; // 0x18
		::System::Void _ctor(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + MGFEBKHOJJP_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean GJKNNAANGFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFEBKHOJJP_GJKNNAANGFA_OFFSET))(this);
		}

		::System::Void GHKIPINMDNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFEBKHOJJP_GHKIPINMDNE_OFFSET))(this);
		}

		::System::Void NONJDKKDDLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFEBKHOJJP_NONJDKKDDLE_OFFSET))(this);
		}

		::System::Void MCKGCIOFEDI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MGFEBKHOJJP_MCKGCIOFEDI_OFFSET))(this, a1);
		}

		::System::Void NNAGLJCMMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFEBKHOJJP_NNAGLJCMMGD_OFFSET))(this);
		}

		::System::Void LAHEAEFEFIA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MGFEBKHOJJP_LAHEAEFEFIA_OFFSET))(this, a1);
		}

		::System::String* OLENGDCIONA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFEBKHOJJP_OLENGDCIONA_OFFSET))(this);
		}

	};
