#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChallengeData; }
namespace System { class Action; }

#define MENGKGJGGPN_CTOR_OFFSET UNITYSDK_OFFSET(0xB8DC8C0)
#define MENGKGJGGPN_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0xB8DC500)
#define MENGKGJGGPN_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0xB8DC4C0)
#define MENGKGJGGPN_KHHLJPPGEBF_OFFSET UNITYSDK_OFFSET(0xB8DC870)
#define MENGKGJGGPN_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0xB8DC810)
#define MENGKGJGGPN_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0xB8DC770)
#define MENGKGJGGPN_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0xB8DC7D0)
#define MENGKGJGGPN_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0xB8DC6A0)

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
