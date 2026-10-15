#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIController; }
namespace System { class Action; }
namespace System { class String; }

#define MIJHOOLPJNI_CTOR_OFFSET UNITYSDK_OFFSET(0xB9542E0)
#define MIJHOOLPJNI_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0xB954330)
#define MIJHOOLPJNI_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0xB9542F0)
#define MIJHOOLPJNI_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0xB9545E0)
#define MIJHOOLPJNI_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0xB954540)
#define MIJHOOLPJNI_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0xB9545A0)
#define MIJHOOLPJNI_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0xB954470)
#define MIJHOOLPJNI_OLENGDCIONA_OFFSET UNITYSDK_OFFSET(0xB954430)

inline static constexpr unsigned int MIJHOOLPJNI_TypeDefinitionIndex = 60476;

	class MIJHOOLPJNI : public ::System::Object
	{
	public:
		::RPG::Client::UIController* JONJFNGDLKI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIJHOOLPJNI_CTOR_OFFSET))(this);
		}

		::System::Boolean GJKNNAANGFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIJHOOLPJNI_GJKNNAANGFA_OFFSET))(this);
		}

		::System::Void GHKIPINMDNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIJHOOLPJNI_GHKIPINMDNE_OFFSET))(this);
		}

		::System::Void NONJDKKDDLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIJHOOLPJNI_NONJDKKDDLE_OFFSET))(this);
		}

		::System::Void MCKGCIOFEDI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIJHOOLPJNI_MCKGCIOFEDI_OFFSET))(this, a1);
		}

		::System::Void NNAGLJCMMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIJHOOLPJNI_NNAGLJCMMGD_OFFSET))(this);
		}

		::System::Void LAHEAEFEFIA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIJHOOLPJNI_LAHEAEFEFIA_OFFSET))(this, a1);
		}

		::System::String* OLENGDCIONA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIJHOOLPJNI_OLENGDCIONA_OFFSET))(this);
		}

	};
