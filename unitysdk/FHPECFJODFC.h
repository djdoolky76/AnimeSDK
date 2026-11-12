#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChallengeData; }
namespace System { class Action; }

#define FHPECFJODFC_CTOR_OFFSET UNITYSDK_OFFSET(0x166B5580)
#define FHPECFJODFC_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0x166B51C0)
#define FHPECFJODFC_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0x166B5180)
#define FHPECFJODFC_KHHLJPPGEBF_OFFSET UNITYSDK_OFFSET(0x166B5530)
#define FHPECFJODFC_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0x166B54D0)
#define FHPECFJODFC_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0x166B5430)
#define FHPECFJODFC_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0x166B5490)
#define FHPECFJODFC_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0x166B5360)

inline static constexpr unsigned int FHPECFJODFC_TypeDefinitionIndex = 61762;

	class FHPECFJODFC : public ::System::Object
	{
	public:
		::RPG::Client::ChallengeData* MNPNFHJFFJH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPECFJODFC_CTOR_OFFSET))(this);
		}

		::System::Boolean GJKNNAANGFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPECFJODFC_GJKNNAANGFA_OFFSET))(this);
		}

		::System::Void GHKIPINMDNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPECFJODFC_GHKIPINMDNE_OFFSET))(this);
		}

		::System::Void NONJDKKDDLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPECFJODFC_NONJDKKDDLE_OFFSET))(this);
		}

		::System::Void MCKGCIOFEDI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FHPECFJODFC_MCKGCIOFEDI_OFFSET))(this, a1);
		}

		::System::Void NNAGLJCMMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPECFJODFC_NNAGLJCMMGD_OFFSET))(this);
		}

		::System::Void LAHEAEFEFIA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FHPECFJODFC_LAHEAEFEFIA_OFFSET))(this, a1);
		}

		::System::Void KHHLJPPGEBF(::RPG::Client::ChallengeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + FHPECFJODFC_KHHLJPPGEBF_OFFSET))(this, a1);
		}

	};
