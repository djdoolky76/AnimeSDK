#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOKKECBAINL.h"
#include "unitysdk/KIGOBPGIKIC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PBLLGLOBOBI.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CMBIMONKOAA_GHFFCJIAFKA_OFFSET UNITYSDK_OFFSET(0x193E81A0)
#define CMBIMONKOAA_IMJLDFKGMEF_OFFSET UNITYSDK_OFFSET(0x193E8050)
#define CMBIMONKOAA_JDOOMMEPBPO_OFFSET UNITYSDK_OFFSET(0x193E80B0)

inline static constexpr unsigned int CMBIMONKOAA_TypeDefinitionIndex = 89147;

class CMBIMONKOAA : public ::System::Object
{
public:
	static ::System::Int32 IMJLDFKGMEF(::FOKKECBAINL OJJILCIKLKB)
	{
		return ((::System::Int32(*)(::FOKKECBAINL))((::PBYTE)hIl2Cpp + CMBIMONKOAA_IMJLDFKGMEF_OFFSET))(OJJILCIKLKB);
	}

	static ::PBLLGLOBOBI JDOOMMEPBPO(::KIGOBPGIKIC ABFGIHEAAAB)
	{
		return ((::PBLLGLOBOBI(*)(::KIGOBPGIKIC))((::PBYTE)hIl2Cpp + CMBIMONKOAA_JDOOMMEPBPO_OFFSET))(ABFGIHEAAAB);
	}

	static ::System::Collections::Generic::IEnumerable_1<::PBLLGLOBOBI>* GHFFCJIAFKA()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::PBLLGLOBOBI>*(*)())((::PBYTE)hIl2Cpp + CMBIMONKOAA_GHFFCJIAFKA_OFFSET))();
	}
};
