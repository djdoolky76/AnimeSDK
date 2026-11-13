#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFJKBOPDINP;
namespace RPG::Client { class UIController; }
namespace System { class Action; }

#define GFJKBOPDINP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1B4982D0)
#define GFJKBOPDINP_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4982C0)
#define GFJKBOPDINP_GEPLOKBJELD_OFFSET UNITYSDK_OFFSET(0x1B4987B0)
#define GFJKBOPDINP_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0x1B4983D0)
#define GFJKBOPDINP_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0x1B498390)
#define GFJKBOPDINP_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0x1B498710)
#define GFJKBOPDINP_LLOOPKDBJGP_OFFSET UNITYSDK_OFFSET(0x1B498340)
#define GFJKBOPDINP_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0x1B4984F0)
#define GFJKBOPDINP_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0x1B498770)
#define GFJKBOPDINP_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0x1B498410)

inline static constexpr unsigned int GFJKBOPDINP_TypeDefinitionIndex = 61758;

	class GFJKBOPDINP : public ::System::Object
	{
	public:
		::RPG::Client::UIController* JONJFNGDLKI; // 0x10
		::System::Action* FJOONCCCGCP; // 0x18
		::System::Action* IGICEFJPHLD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJKBOPDINP_CTOR_OFFSET))(this);
		}

		static ::GFJKBOPDINP* BPLPBPMEODA()
		{
			return ((::GFJKBOPDINP*(*)())((::PBYTE)hIl2Cpp + GFJKBOPDINP_BPLPBPMEODA_OFFSET))();
		}

		::System::Void LLOOPKDBJGP(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GFJKBOPDINP_LLOOPKDBJGP_OFFSET))(this, a1);
		}

		::System::Boolean GJKNNAANGFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJKBOPDINP_GJKNNAANGFA_OFFSET))(this);
		}

		::System::Void GHKIPINMDNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJKBOPDINP_GHKIPINMDNE_OFFSET))(this);
		}

		::System::Void NONJDKKDDLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJKBOPDINP_NONJDKKDDLE_OFFSET))(this);
		}

		::System::Void MCKGCIOFEDI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GFJKBOPDINP_MCKGCIOFEDI_OFFSET))(this, a1);
		}

		::System::Void LAHEAEFEFIA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GFJKBOPDINP_LAHEAEFEFIA_OFFSET))(this, a1);
		}

		::System::Void NNAGLJCMMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJKBOPDINP_NNAGLJCMMGD_OFFSET))(this);
		}

		::System::Void GEPLOKBJELD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJKBOPDINP_GEPLOKBJELD_OFFSET))(this);
		}

	};
