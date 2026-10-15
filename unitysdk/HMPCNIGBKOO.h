#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IELMGLNMLFN.h"
class AIDNGNILOAF;
class DMGLFMNEJGL;
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define HMPCNIGBKOO_CTOR_OFFSET UNITYSDK_OFFSET(0x15D8A2C0)
#define HMPCNIGBKOO_JBGIFBGMLMF_OFFSET UNITYSDK_OFFSET(0x15D89F70)
#define HMPCNIGBKOO_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x15D89F20)

	class HMPCNIGBKOO : public ::System::Object
	{
	public:
		::System::Text::RegularExpressions::Regex* PKLIOCOGCEE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPCNIGBKOO_CTOR_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPCNIGBKOO_MLMGEFIOION_OFFSET))(this);
		}

		::System::String* JBGIFBGMLMF(::System::String* a1, ::IELMGLNMLFN a2, ::DMGLFMNEJGL* a3, ::AIDNGNILOAF* a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::IELMGLNMLFN, ::DMGLFMNEJGL*, ::AIDNGNILOAF*))((::PBYTE)hIl2Cpp + HMPCNIGBKOO_JBGIFBGMLMF_OFFSET))(this, a1, a2, a3, a4);
		}

	};
