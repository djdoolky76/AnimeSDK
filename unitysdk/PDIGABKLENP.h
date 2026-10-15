#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HALHKJLBIKJ.h"
class DBEILICHGCG;
class JBACCAGFHON;
class JBFGHNLMEDI;
class PDIGABKLENP;

#define PDIGABKLENP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC00C920)
#define PDIGABKLENP_CTOR_OFFSET UNITYSDK_OFFSET(0xC00C990)
#define PDIGABKLENP_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0xC00C9A0)

inline static constexpr unsigned int PDIGABKLENP_TypeDefinitionIndex = 76417;

	class PDIGABKLENP : public ::HALHKJLBIKJ
	{
	public:
		::System::Void _ctor(::JBFGHNLMEDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + PDIGABKLENP_CTOR_OFFSET))(this, a1);
		}

		static ::PDIGABKLENP* BPLPBPMEODA(::JBFGHNLMEDI* a1)
		{
			return ((::PDIGABKLENP*(*)(::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + PDIGABKLENP_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean OKPLPEELPBC(::JBACCAGFHON* a1, ::DBEILICHGCG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBACCAGFHON*, ::DBEILICHGCG*))((::PBYTE)hIl2Cpp + PDIGABKLENP_OKPLPEELPBC_OFFSET))(this, a1, a2);
		}

	};
