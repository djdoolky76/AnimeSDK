#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChallengePeakGroup; }
namespace RPG::Client { class UIController; }
namespace System { class Action; }

#define JHGKCEPHPCF_CTOR_OFFSET UNITYSDK_OFFSET(0xB1AD110)
#define JHGKCEPHPCF_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0xB1AD160)
#define JHGKCEPHPCF_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0xB1AD120)
#define JHGKCEPHPCF_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0xB1AD470)
#define JHGKCEPHPCF_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0xB1AD3D0)
#define JHGKCEPHPCF_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0xB1AD430)
#define JHGKCEPHPCF_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0xB1AD300)

inline static constexpr unsigned int JHGKCEPHPCF_TypeDefinitionIndex = 60471;

	class JHGKCEPHPCF : public ::System::Object
	{
	public:
		::RPG::Client::UIController* JONJFNGDLKI; // 0x10
		::RPG::Client::ChallengePeakGroup* APPIHABBCGK; // 0x18
		::System::Void _ctor(::RPG::Client::ChallengePeakGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + JHGKCEPHPCF_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean GJKNNAANGFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGKCEPHPCF_GJKNNAANGFA_OFFSET))(this);
		}

		::System::Void GHKIPINMDNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGKCEPHPCF_GHKIPINMDNE_OFFSET))(this);
		}

		::System::Void NONJDKKDDLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGKCEPHPCF_NONJDKKDDLE_OFFSET))(this);
		}

		::System::Void MCKGCIOFEDI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JHGKCEPHPCF_MCKGCIOFEDI_OFFSET))(this, a1);
		}

		::System::Void NNAGLJCMMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGKCEPHPCF_NNAGLJCMMGD_OFFSET))(this);
		}

		::System::Void LAHEAEFEFIA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JHGKCEPHPCF_LAHEAEFEFIA_OFFSET))(this, a1);
		}

	};
