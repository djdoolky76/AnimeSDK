#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIKEHIKLMOF;
namespace RPG::Client { class UIController; }
namespace System { class Action; }

#define GIKEHIKLMOF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15A40690)
#define GIKEHIKLMOF_CTOR_OFFSET UNITYSDK_OFFSET(0x15A40680)
#define GIKEHIKLMOF_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0x15A40740)
#define GIKEHIKLMOF_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0x15A40700)
#define GIKEHIKLMOF_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0x15A409E0)
#define GIKEHIKLMOF_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0x15A40940)
#define GIKEHIKLMOF_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0x15A409A0)
#define GIKEHIKLMOF_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0x15A40870)

	class GIKEHIKLMOF : public ::System::Object
	{
	public:
		::RPG::Client::UIController* JONJFNGDLKI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKEHIKLMOF_CTOR_OFFSET))(this);
		}

		static ::GIKEHIKLMOF* BPLPBPMEODA()
		{
			return ((::GIKEHIKLMOF*(*)())((::PBYTE)hIl2Cpp + GIKEHIKLMOF_BPLPBPMEODA_OFFSET))();
		}

		::System::Boolean GJKNNAANGFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKEHIKLMOF_GJKNNAANGFA_OFFSET))(this);
		}

		::System::Void GHKIPINMDNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKEHIKLMOF_GHKIPINMDNE_OFFSET))(this);
		}

		::System::Void NONJDKKDDLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKEHIKLMOF_NONJDKKDDLE_OFFSET))(this);
		}

		::System::Void MCKGCIOFEDI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GIKEHIKLMOF_MCKGCIOFEDI_OFFSET))(this, a1);
		}

		::System::Void NNAGLJCMMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKEHIKLMOF_NNAGLJCMMGD_OFFSET))(this);
		}

		::System::Void LAHEAEFEFIA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GIKEHIKLMOF_LAHEAEFEFIA_OFFSET))(this, a1);
		}

	};
