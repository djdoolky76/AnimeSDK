#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChallengeData; }
namespace System { class Action; }

#define MENGKGJGGPN_CTOR_OFFSET UNITYSDK_OFFSET(0xB8E29E0)
#define MENGKGJGGPN_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0xB8E2620)
#define MENGKGJGGPN_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0xB8E25E0)
#define MENGKGJGGPN_KHHLJPPGEBF_OFFSET UNITYSDK_OFFSET(0xB8E2990)
#define MENGKGJGGPN_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0xB8E2930)
#define MENGKGJGGPN_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0xB8E2890)
#define MENGKGJGGPN_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0xB8E28F0)
#define MENGKGJGGPN_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0xB8E27C0)

inline static constexpr unsigned int MENGKGJGGPN_TypeDefinitionIndex = 60470;

	class MENGKGJGGPN : public ::System::Object
	{
	public:
		::RPG::Client::ChallengeData* MNPNFHJFFJH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENGKGJGGPN_CTOR_OFFSET))(this);
		}

		::System::Boolean GJKNNAANGFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MENGKGJGGPN_GJKNNAANGFA_OFFSET))(this);
		}

		::System::Void GHKIPINMDNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENGKGJGGPN_GHKIPINMDNE_OFFSET))(this);
		}

		::System::Void NONJDKKDDLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENGKGJGGPN_NONJDKKDDLE_OFFSET))(this);
		}

		::System::Void MCKGCIOFEDI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MENGKGJGGPN_MCKGCIOFEDI_OFFSET))(this, a1);
		}

		::System::Void NNAGLJCMMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENGKGJGGPN_NNAGLJCMMGD_OFFSET))(this);
		}

		::System::Void LAHEAEFEFIA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MENGKGJGGPN_LAHEAEFEFIA_OFFSET))(this, a1);
		}

		::System::Void KHHLJPPGEBF(::RPG::Client::ChallengeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + MENGKGJGGPN_KHHLJPPGEBF_OFFSET))(this, a1);
		}

	};
