#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFIJIPAJAEL;
namespace RPG::Client { class UIController; }
namespace System { class Action; }

#define NFIJIPAJAEL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBB96460)
#define NFIJIPAJAEL_CTOR_OFFSET UNITYSDK_OFFSET(0xBB964D0)
#define NFIJIPAJAEL_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0xBB96520)
#define NFIJIPAJAEL_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0xBB964E0)
#define NFIJIPAJAEL_IIGNFHPNKFL_OFFSET UNITYSDK_OFFSET(0xBB96570)
#define NFIJIPAJAEL_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0xBB96800)
#define NFIJIPAJAEL_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0xBB96760)
#define NFIJIPAJAEL_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0xBB967C0)
#define NFIJIPAJAEL_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0xBB966A0)

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
