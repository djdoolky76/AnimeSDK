#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IELMGLNMLFN.h"
class AIDNGNILOAF;
class DMGLFMNEJGL;
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define BEGEAAOHJMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1631A900)
#define BEGEAAOHJMJ_JBGIFBGMLMF_OFFSET UNITYSDK_OFFSET(0x1631A490)
#define BEGEAAOHJMJ_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x1631A420)

inline static constexpr unsigned int BEGEAAOHJMJ_TypeDefinitionIndex = 73361;

	class BEGEAAOHJMJ : public ::System::Object
	{
	public:
		::System::Text::RegularExpressions::Regex* JJCEAMCFJDA; // 0x10
		// static const ::System::String* LBBNHIKNNGN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGEAAOHJMJ_CTOR_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGEAAOHJMJ_MLMGEFIOION_OFFSET))(this);
		}

		::System::String* JBGIFBGMLMF(::System::String* a1, ::IELMGLNMLFN a2, ::DMGLFMNEJGL* a3, ::AIDNGNILOAF* a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::IELMGLNMLFN, ::DMGLFMNEJGL*, ::AIDNGNILOAF*))((::PBYTE)hIl2Cpp + BEGEAAOHJMJ_JBGIFBGMLMF_OFFSET))(this, a1, a2, a3, a4);
		}

	};
