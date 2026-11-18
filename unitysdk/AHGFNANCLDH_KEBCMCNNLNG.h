#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class PPADOFBOMDD;
namespace System::Text { class StringBuilder; }

#define AHGFNANCLDH_KEBCMCNNLNG_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0x727DF0)

inline static constexpr unsigned int AHGFNANCLDH_KEBCMCNNLNG_TypeDefinitionIndex = 89981;

struct alignas(8) AHGFNANCLDH_KEBCMCNNLNG
{
	// static const ::System::String* HPIEHNFPPGL; // 0x0
	// static const ::System::String* KBLNIOPGLEF; // 0x0
	::PPADOFBOMDD* NLOGLBMAGND; // 0x10
	::System::Int32 BELNJJKMMJP; // 0x18
	::System::Boolean LJEEPPHPCNG; // 0x1C

	::System::Text::StringBuilder* JLIMOLHLFAK(::System::Text::StringBuilder* FDPDNIDDDCA, ::System::Boolean PJKFBMGIMMH, ::System::Boolean OKBPEHBCEJO)
	{
		return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AHGFNANCLDH_KEBCMCNNLNG_JLIMOLHLFAK_OFFSET))(this, FDPDNIDDDCA, PJKFBMGIMMH, OKBPEHBCEJO);
	}
};
