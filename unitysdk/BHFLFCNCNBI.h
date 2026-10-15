#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HALHKJLBIKJ.h"
class BHFLFCNCNBI;
class DBEILICHGCG;
class JBACCAGFHON;
class JBFGHNLMEDI;

#define BHFLFCNCNBI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB473770)
#define BHFLFCNCNBI_CTOR_OFFSET UNITYSDK_OFFSET(0xB4737E0)
#define BHFLFCNCNBI_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0xB4737F0)

inline static constexpr unsigned int BHFLFCNCNBI_TypeDefinitionIndex = 76419;

	class BHFLFCNCNBI : public ::HALHKJLBIKJ
	{
	public:
		::System::Void _ctor(::JBFGHNLMEDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + BHFLFCNCNBI_CTOR_OFFSET))(this, a1);
		}

		static ::BHFLFCNCNBI* BPLPBPMEODA(::JBFGHNLMEDI* a1)
		{
			return ((::BHFLFCNCNBI*(*)(::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + BHFLFCNCNBI_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean OKPLPEELPBC(::JBACCAGFHON* a1, ::DBEILICHGCG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBACCAGFHON*, ::DBEILICHGCG*))((::PBYTE)hIl2Cpp + BHFLFCNCNBI_OKPLPEELPBC_OFFSET))(this, a1, a2);
		}

	};
