#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CHODNEDHGJE_DEGHLLCNCNA_HMEODDHBAPE_OFFSET UNITYSDK_OFFSET(0x18DD22C0)
#define CHODNEDHGJE_DEGHLLCNCNA_PFMJNPLCOFP_OFFSET UNITYSDK_OFFSET(0x18DD1AA0)
#define CHODNEDHGJE_DEGHLLCNCNA__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD1A90)

inline static constexpr unsigned int CHODNEDHGJE_DEGHLLCNCNA_TypeDefinitionIndex = 88597;

class CHODNEDHGJE_DEGHLLCNCNA : public ::System::Object
{
public:
	::System::Action* NKGCDDCMBCF; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18
	::System::Int32 GEJCKFFFKCL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODNEDHGJE_DEGHLLCNCNA__CTOR_OFFSET))(this);
	}

	::System::Void PFMJNPLCOFP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODNEDHGJE_DEGHLLCNCNA_PFMJNPLCOFP_OFFSET))(this);
	}

	::System::Void HMEODDHBAPE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODNEDHGJE_DEGHLLCNCNA_HMEODDHBAPE_OFFSET))(this);
	}
};
