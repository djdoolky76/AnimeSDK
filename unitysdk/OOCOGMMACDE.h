#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HALHKJLBIKJ.h"
class DBEILICHGCG;
class JBACCAGFHON;
class JBFGHNLMEDI;
class OOCOGMMACDE;

#define OOCOGMMACDE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBF68F30)
#define OOCOGMMACDE_CTOR_OFFSET UNITYSDK_OFFSET(0xBF68FA0)
#define OOCOGMMACDE_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0xBF68FB0)

inline static constexpr unsigned int OOCOGMMACDE_TypeDefinitionIndex = 76416;

	class OOCOGMMACDE : public ::HALHKJLBIKJ
	{
	public:
		::System::Void _ctor(::JBFGHNLMEDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + OOCOGMMACDE_CTOR_OFFSET))(this, a1);
		}

		static ::OOCOGMMACDE* BPLPBPMEODA(::JBFGHNLMEDI* a1)
		{
			return ((::OOCOGMMACDE*(*)(::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + OOCOGMMACDE_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean OKPLPEELPBC(::JBACCAGFHON* a1, ::DBEILICHGCG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBACCAGFHON*, ::DBEILICHGCG*))((::PBYTE)hIl2Cpp + OOCOGMMACDE_OKPLPEELPBC_OFFSET))(this, a1, a2);
		}

	};
