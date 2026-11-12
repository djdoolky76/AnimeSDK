#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HALHKJLBIKJ.h"
class AGMBFOLALCB;
class DBEILICHGCG;
class JBACCAGFHON;
class JBFGHNLMEDI;

#define AGMBFOLALCB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xF12EF60)
#define AGMBFOLALCB_CTOR_OFFSET UNITYSDK_OFFSET(0xF12EFD0)
#define AGMBFOLALCB_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0xF12EFE0)

inline static constexpr unsigned int AGMBFOLALCB_TypeDefinitionIndex = 78754;

	class AGMBFOLALCB : public ::HALHKJLBIKJ
	{
	public:
		::System::Void _ctor(::JBFGHNLMEDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + AGMBFOLALCB_CTOR_OFFSET))(this, a1);
		}

		static ::AGMBFOLALCB* BPLPBPMEODA(::JBFGHNLMEDI* a1)
		{
			return ((::AGMBFOLALCB*(*)(::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + AGMBFOLALCB_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean OKPLPEELPBC(::JBACCAGFHON* a1, ::DBEILICHGCG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBACCAGFHON*, ::DBEILICHGCG*))((::PBYTE)hIl2Cpp + AGMBFOLALCB_OKPLPEELPBC_OFFSET))(this, a1, a2);
		}

	};
