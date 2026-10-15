#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HALHKJLBIKJ.h"
class DBEILICHGCG;
class IGMDENONKPF;
class JBACCAGFHON;
class JBFGHNLMEDI;

#define IGMDENONKPF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16404020)
#define IGMDENONKPF_CTOR_OFFSET UNITYSDK_OFFSET(0x16404090)
#define IGMDENONKPF_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0x164040A0)

inline static constexpr unsigned int IGMDENONKPF_TypeDefinitionIndex = 76423;

	class IGMDENONKPF : public ::HALHKJLBIKJ
	{
	public:
		::System::Void _ctor(::JBFGHNLMEDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + IGMDENONKPF_CTOR_OFFSET))(this, a1);
		}

		static ::IGMDENONKPF* BPLPBPMEODA(::JBFGHNLMEDI* a1)
		{
			return ((::IGMDENONKPF*(*)(::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + IGMDENONKPF_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean OKPLPEELPBC(::JBACCAGFHON* a1, ::DBEILICHGCG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBACCAGFHON*, ::DBEILICHGCG*))((::PBYTE)hIl2Cpp + IGMDENONKPF_OKPLPEELPBC_OFFSET))(this, a1, a2);
		}

	};
