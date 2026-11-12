#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBPDACMBHGL.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIController; }
namespace System { class Action; }
namespace System { class String; }

#define AANNNKBONNO_CTOR_OFFSET UNITYSDK_OFFSET(0xB7379A0)
#define AANNNKBONNO_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0xB737A40)
#define AANNNKBONNO_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0xB7379B0)
#define AANNNKBONNO_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0xB737F40)
#define AANNNKBONNO_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0xB737E80)
#define AANNNKBONNO_NAOFMBFAHIM_OFFSET UNITYSDK_OFFSET(0xB7379F0)
#define AANNNKBONNO_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0xB737EE0)
#define AANNNKBONNO_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0xB737DB0)
#define AANNNKBONNO_OLENGDCIONA_OFFSET UNITYSDK_OFFSET(0xB737D40)

inline static constexpr unsigned int AANNNKBONNO_TypeDefinitionIndex = 68333;

	class AANNNKBONNO : public ::System::Object
	{
	public:
		::RPG::Client::UIController* JONJFNGDLKI; // 0x10
		::System::Action* CIFOILLJFNF; // 0x18
		::System::UInt32 HMBNCIFGFEO; // 0x20
		::CBPDACMBHGL NJADNHMJJBC; // 0x24
		::System::Boolean CIFLCHMOJGE; // 0x28
		::System::Void _ctor(::System::Boolean a1, ::System::UInt32 a2, ::CBPDACMBHGL a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::CBPDACMBHGL))((::PBYTE)hIl2Cpp + AANNNKBONNO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GJKNNAANGFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AANNNKBONNO_GJKNNAANGFA_OFFSET))(this);
		}

		::System::Void NAOFMBFAHIM(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AANNNKBONNO_NAOFMBFAHIM_OFFSET))(this, a1);
		}

		::System::Void GHKIPINMDNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANNNKBONNO_GHKIPINMDNE_OFFSET))(this);
		}

		::System::Void NONJDKKDDLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANNNKBONNO_NONJDKKDDLE_OFFSET))(this);
		}

		::System::Void MCKGCIOFEDI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AANNNKBONNO_MCKGCIOFEDI_OFFSET))(this, a1);
		}

		::System::Void NNAGLJCMMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANNNKBONNO_NNAGLJCMMGD_OFFSET))(this);
		}

		::System::Void LAHEAEFEFIA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AANNNKBONNO_LAHEAEFEFIA_OFFSET))(this, a1);
		}

		::System::String* OLENGDCIONA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AANNNKBONNO_OLENGDCIONA_OFFSET))(this);
		}

	};
