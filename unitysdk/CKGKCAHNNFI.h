#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HALHKJLBIKJ.h"
class CKGKCAHNNFI;
class DBEILICHGCG;
class JBACCAGFHON;
class JBFGHNLMEDI;

#define CKGKCAHNNFI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1AD3C030)
#define CKGKCAHNNFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1AD3C0A0)
#define CKGKCAHNNFI_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0x1AD3C0B0)

inline static constexpr unsigned int CKGKCAHNNFI_TypeDefinitionIndex = 78740;

	class CKGKCAHNNFI : public ::HALHKJLBIKJ
	{
	public:
		::System::Void _ctor(::JBFGHNLMEDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + CKGKCAHNNFI_CTOR_OFFSET))(this, a1);
		}

		static ::CKGKCAHNNFI* BPLPBPMEODA(::JBFGHNLMEDI* a1)
		{
			return ((::CKGKCAHNNFI*(*)(::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + CKGKCAHNNFI_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean OKPLPEELPBC(::JBACCAGFHON* a1, ::DBEILICHGCG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBACCAGFHON*, ::DBEILICHGCG*))((::PBYTE)hIl2Cpp + CKGKCAHNNFI_OKPLPEELPBC_OFFSET))(this, a1, a2);
		}

	};
