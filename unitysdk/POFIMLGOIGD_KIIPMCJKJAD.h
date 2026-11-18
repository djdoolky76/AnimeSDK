#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EODCINHDNOA;
namespace System { template <typename T1, typename T2> class Action_2; }

#define POFIMLGOIGD_KIIPMCJKJAD_GGOMLBBBKLH_OFFSET UNITYSDK_OFFSET(0x1C1E37C0)
#define POFIMLGOIGD_KIIPMCJKJAD_HDDFAKBBGFE_OFFSET UNITYSDK_OFFSET(0x1C1E3810)
#define POFIMLGOIGD_KIIPMCJKJAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1E37B0)

inline static constexpr unsigned int POFIMLGOIGD_KIIPMCJKJAD_TypeDefinitionIndex = 57460;

class POFIMLGOIGD_KIIPMCJKJAD : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::EODCINHDNOA*>* NPFIONPDFED; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFIMLGOIGD_KIIPMCJKJAD__CTOR_OFFSET))(this);
	}

	::System::Void GGOMLBBBKLH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFIMLGOIGD_KIIPMCJKJAD_GGOMLBBBKLH_OFFSET))(this);
	}

	::System::Void HDDFAKBBGFE(::EODCINHDNOA* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::EODCINHDNOA*))((::PBYTE)hIl2Cpp + POFIMLGOIGD_KIIPMCJKJAD_HDDFAKBBGFE_OFFSET))(this, GLAOEHCGCFO);
	}
};
