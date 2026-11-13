#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIKEHIKLMOF;
namespace RPG::Client { class UIController; }
namespace System { class Action; }

#define GIKEHIKLMOF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1A3E5510)
#define GIKEHIKLMOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3E5500)
#define GIKEHIKLMOF_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0x1A3E55C0)
#define GIKEHIKLMOF_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0x1A3E5580)
#define GIKEHIKLMOF_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0x1A3E5860)
#define GIKEHIKLMOF_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0x1A3E57C0)
#define GIKEHIKLMOF_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0x1A3E5820)
#define GIKEHIKLMOF_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0x1A3E56F0)

inline static constexpr unsigned int GIKEHIKLMOF_TypeDefinitionIndex = 61768;

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
