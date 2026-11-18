#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class Object; }
namespace System { class String; }
template <typename T> class LJHFMILANJA_1;

#define NAEFGDAHEFE_KFEMOODMADE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x12FCE5B0)
#define NAEFGDAHEFE_KFEMOODMADE__CTOR_OFFSET UNITYSDK_OFFSET(0x12FCE8B0)

inline static constexpr unsigned int NAEFGDAHEFE_KFEMOODMADE_TypeDefinitionIndex = 81794;

class NAEFGDAHEFE_KFEMOODMADE : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Boolean>* BGIBLIHDHFO; // 0x88
	::LJHFMILANJA_1<::System::Boolean>* LFEEMNNFMLJ; // 0x90
	::LJHFMILANJA_1<::System::String*>* JFAJHMJOEHP; // 0x98
	::LJHFMILANJA_1<::System::Object*>* GMENKFAHPFD; // 0xA0
	::LJHFMILANJA_1<::System::Boolean>* BBEMIEGKIMI; // 0xA8
	::LJHFMILANJA_1<::System::String*>* NMBFIFKHLEM; // 0xB0
	::LJHFMILANJA_1<::System::String*>* DINMFFIENBC; // 0xB8
	::LJHFMILANJA_1<::System::Boolean>* GGAJLOEAAEB; // 0xC0
	::LJHFMILANJA_1<::System::Object*>* GEDCEJGDHAG; // 0xC8
	::LJHFMILANJA_1<::System::Object*>* LBFLPCGNKIA; // 0xD0
	::LJHFMILANJA_1<::System::String*>* POJNLBFPCAL; // 0xD8
	::LJHFMILANJA_1<::System::Boolean>* GGPNAOFPELP; // 0xE0
	::LJHFMILANJA_1<::System::Boolean>* HPJNGEHNAFB; // 0xE8
	::LJHFMILANJA_1<::UnityEngine::Color>* OCMLAFPEAIG; // 0xF0
	::LJHFMILANJA_1<::System::Object*>* OHKFGFJJBAP; // 0xF8
	::LJHFMILANJA_1<::System::Boolean>* NCABNAKBBHL; // 0x100
	::LJHFMILANJA_1<::System::Int32>* JHMCEPIPOFK; // 0x108
	::LJHFMILANJA_1<::System::Boolean>* NOMNIGNPGBL; // 0x110
	::LJHFMILANJA_1<::System::Object*>* CADGGBGPOGC; // 0x118

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEFGDAHEFE_KFEMOODMADE__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEFGDAHEFE_KFEMOODMADE_ONCREATEPROPERTY_OFFSET))(this);
	}
};
