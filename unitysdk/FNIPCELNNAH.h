#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

namespace UnityEngine { class Transform; }

#define FNIPCELNNAH_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x116C0E30)
#define FNIPCELNNAH_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x116C0F40)
#define FNIPCELNNAH__CTOR_OFFSET UNITYSDK_OFFSET(0x116C0ED0)

inline static constexpr unsigned int FNIPCELNNAH_TypeDefinitionIndex = 41387;

class FNIPCELNNAH : public ::PKMJPMFCNBK
{
public:
	::UnityEngine::Transform* BAOFNEPGCGB; // 0x80
	::System::Int32 GMCDPALOMDI; // 0x88
	::System::Boolean HPIOHBDHCCG; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIPCELNNAH__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIPCELNNAH_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIPCELNNAH_KHJELIBOECB_OFFSET))(this);
	}
};
