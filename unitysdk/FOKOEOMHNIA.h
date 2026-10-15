#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HALHKJLBIKJ.h"
class DBEILICHGCG;
class FOKOEOMHNIA;
class JBACCAGFHON;
class JBFGHNLMEDI;

#define FOKOEOMHNIA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x158EBBD0)
#define FOKOEOMHNIA_CTOR_OFFSET UNITYSDK_OFFSET(0x158EBC40)
#define FOKOEOMHNIA_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0x158EBC50)

inline static constexpr unsigned int FOKOEOMHNIA_TypeDefinitionIndex = 76421;

	class FOKOEOMHNIA : public ::HALHKJLBIKJ
	{
	public:
		::System::Void _ctor(::JBFGHNLMEDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + FOKOEOMHNIA_CTOR_OFFSET))(this, a1);
		}

		static ::FOKOEOMHNIA* BPLPBPMEODA(::JBFGHNLMEDI* a1)
		{
			return ((::FOKOEOMHNIA*(*)(::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + FOKOEOMHNIA_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean OKPLPEELPBC(::JBACCAGFHON* a1, ::DBEILICHGCG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBACCAGFHON*, ::DBEILICHGCG*))((::PBYTE)hIl2Cpp + FOKOEOMHNIA_OKPLPEELPBC_OFFSET))(this, a1, a2);
		}

	};
