#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HALHKJLBIKJ.h"
class CAKMDHHJKDK;
class DBEILICHGCG;
class JBACCAGFHON;
class JBFGHNLMEDI;

#define CAKMDHHJKDK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC487B00)
#define CAKMDHHJKDK_CTOR_OFFSET UNITYSDK_OFFSET(0xC487B70)
#define CAKMDHHJKDK_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0xC487B80)

inline static constexpr unsigned int CAKMDHHJKDK_TypeDefinitionIndex = 76419;

	class CAKMDHHJKDK : public ::HALHKJLBIKJ
	{
	public:
		::System::Void _ctor(::JBFGHNLMEDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + CAKMDHHJKDK_CTOR_OFFSET))(this, a1);
		}

		static ::CAKMDHHJKDK* BPLPBPMEODA(::JBFGHNLMEDI* a1)
		{
			return ((::CAKMDHHJKDK*(*)(::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + CAKMDHHJKDK_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean OKPLPEELPBC(::JBACCAGFHON* a1, ::DBEILICHGCG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBACCAGFHON*, ::DBEILICHGCG*))((::PBYTE)hIl2Cpp + CAKMDHHJKDK_OKPLPEELPBC_OFFSET))(this, a1, a2);
		}

	};
