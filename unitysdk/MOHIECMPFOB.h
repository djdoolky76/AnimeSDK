#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIController; }
namespace System { class Action; }
namespace System { class String; }

#define MOHIECMPFOB_CTOR_OFFSET UNITYSDK_OFFSET(0xBA2C750)
#define MOHIECMPFOB_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0xBA2C7D0)
#define MOHIECMPFOB_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0xBA2C790)
#define MOHIECMPFOB_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0xBA2CB00)
#define MOHIECMPFOB_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0xBA2CA60)
#define MOHIECMPFOB_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0xBA2CAC0)
#define MOHIECMPFOB_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0xBA2C990)
#define MOHIECMPFOB_OBCCIBDNLML_OFFSET UNITYSDK_OFFSET(0xBA2C940)

inline static constexpr unsigned int MOHIECMPFOB_TypeDefinitionIndex = 60480;

	class MOHIECMPFOB : public ::System::Object
	{
	public:
		::System::String* GJELMKNIJCM; // 0x10
		::System::String* KBAIDFMELHL; // 0x18
		::RPG::Client::UIController* JONJFNGDLKI; // 0x20
		::System::Boolean PLAFGMADPMC; // 0x28
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOHIECMPFOB_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean GJKNNAANGFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHIECMPFOB_GJKNNAANGFA_OFFSET))(this);
		}

		::System::Void GHKIPINMDNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHIECMPFOB_GHKIPINMDNE_OFFSET))(this);
		}

		::System::Void OBCCIBDNLML(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOHIECMPFOB_OBCCIBDNLML_OFFSET))(this, a1);
		}

		::System::Void NONJDKKDDLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHIECMPFOB_NONJDKKDDLE_OFFSET))(this);
		}

		::System::Void MCKGCIOFEDI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOHIECMPFOB_MCKGCIOFEDI_OFFSET))(this, a1);
		}

		::System::Void NNAGLJCMMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHIECMPFOB_NNAGLJCMMGD_OFFSET))(this);
		}

		::System::Void LAHEAEFEFIA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOHIECMPFOB_LAHEAEFEFIA_OFFSET))(this, a1);
		}

	};
