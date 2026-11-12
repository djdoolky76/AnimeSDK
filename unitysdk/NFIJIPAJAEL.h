#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFIJIPAJAEL;
namespace RPG::Client { class UIController; }
namespace System { class Action; }

#define NFIJIPAJAEL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC46F9E0)
#define NFIJIPAJAEL_CTOR_OFFSET UNITYSDK_OFFSET(0xC46FA50)
#define NFIJIPAJAEL_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0xC46FAA0)
#define NFIJIPAJAEL_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0xC46FA60)
#define NFIJIPAJAEL_IIGNFHPNKFL_OFFSET UNITYSDK_OFFSET(0xC46FAF0)
#define NFIJIPAJAEL_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0xC46FD80)
#define NFIJIPAJAEL_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0xC46FCE0)
#define NFIJIPAJAEL_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0xC46FD40)
#define NFIJIPAJAEL_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0xC46FC20)

inline static constexpr unsigned int NFIJIPAJAEL_TypeDefinitionIndex = 61763;

	class NFIJIPAJAEL : public ::System::Object
	{
	public:
		::RPG::Client::UIController* JONJFNGDLKI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIJIPAJAEL_CTOR_OFFSET))(this);
		}

		static ::NFIJIPAJAEL* BPLPBPMEODA()
		{
			return ((::NFIJIPAJAEL*(*)())((::PBYTE)hIl2Cpp + NFIJIPAJAEL_BPLPBPMEODA_OFFSET))();
		}

		::System::Boolean GJKNNAANGFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIJIPAJAEL_GJKNNAANGFA_OFFSET))(this);
		}

		::System::Void GHKIPINMDNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIJIPAJAEL_GHKIPINMDNE_OFFSET))(this);
		}

		::System::Void IIGNFHPNKFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIJIPAJAEL_IIGNFHPNKFL_OFFSET))(this);
		}

		::System::Void NONJDKKDDLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIJIPAJAEL_NONJDKKDDLE_OFFSET))(this);
		}

		::System::Void MCKGCIOFEDI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NFIJIPAJAEL_MCKGCIOFEDI_OFFSET))(this, a1);
		}

		::System::Void NNAGLJCMMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIJIPAJAEL_NNAGLJCMMGD_OFFSET))(this);
		}

		::System::Void LAHEAEFEFIA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NFIJIPAJAEL_LAHEAEFEFIA_OFFSET))(this, a1);
		}

	};
