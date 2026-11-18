#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FOLOGHLENFB;
namespace System { class String; }

#define KMIIOPJLONP_LKDEKALNLMG_BNCMCMLHGEK_OFFSET UNITYSDK_OFFSET(0x1634C9D0)
#define KMIIOPJLONP_LKDEKALNLMG_INMKKMDOOLJ_OFFSET UNITYSDK_OFFSET(0x1634C990)
#define KMIIOPJLONP_LKDEKALNLMG__CTOR_OFFSET UNITYSDK_OFFSET(0x1634C980)

inline static constexpr unsigned int KMIIOPJLONP_LKDEKALNLMG_TypeDefinitionIndex = 79017;

class KMIIOPJLONP_LKDEKALNLMG : public ::System::Object
{
public:
	::FOLOGHLENFB* DJOIBDNKGII; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIIOPJLONP_LKDEKALNLMG__CTOR_OFFSET))(this);
	}

	::System::Void INMKKMDOOLJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIIOPJLONP_LKDEKALNLMG_INMKKMDOOLJ_OFFSET))(this);
	}

	::System::String* BNCMCMLHGEK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIIOPJLONP_LKDEKALNLMG_BNCMCMLHGEK_OFFSET))(this);
	}
};
