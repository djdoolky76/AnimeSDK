#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IELMGLNMLFN.h"
class AIDNGNILOAF;
class DMGLFMNEJGL;
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define NOBNGCHEPAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBCDEC30)
#define NOBNGCHEPAJ_JBGIFBGMLMF_OFFSET UNITYSDK_OFFSET(0xBCDE690)
#define NOBNGCHEPAJ_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0xBCDE620)

inline static constexpr unsigned int NOBNGCHEPAJ_TypeDefinitionIndex = 73364;

	class NOBNGCHEPAJ : public ::System::Object
	{
	public:
		::System::Text::RegularExpressions::Regex* BNLBDJNMLLI; // 0x10
		::System::Text::RegularExpressions::Regex* NEHEODBKPNJ; // 0x18
		::System::UInt32 KBENJDGFJBA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBNGCHEPAJ_CTOR_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBNGCHEPAJ_MLMGEFIOION_OFFSET))(this);
		}

		::System::String* JBGIFBGMLMF(::System::String* a1, ::IELMGLNMLFN a2, ::DMGLFMNEJGL* a3, ::AIDNGNILOAF* a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::IELMGLNMLFN, ::DMGLFMNEJGL*, ::AIDNGNILOAF*))((::PBYTE)hIl2Cpp + NOBNGCHEPAJ_JBGIFBGMLMF_OFFSET))(this, a1, a2, a3, a4);
		}

	};
