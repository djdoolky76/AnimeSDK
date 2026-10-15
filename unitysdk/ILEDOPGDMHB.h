#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HALHKJLBIKJ.h"
class DBEILICHGCG;
class ILEDOPGDMHB;
class JBACCAGFHON;
class JBFGHNLMEDI;

#define ILEDOPGDMHB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1649F160)
#define ILEDOPGDMHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1649F1D0)
#define ILEDOPGDMHB_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0x1649F1E0)

inline static constexpr unsigned int ILEDOPGDMHB_TypeDefinitionIndex = 76408;

	class ILEDOPGDMHB : public ::HALHKJLBIKJ
	{
	public:
		::System::Void _ctor(::JBFGHNLMEDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + ILEDOPGDMHB_CTOR_OFFSET))(this, a1);
		}

		static ::ILEDOPGDMHB* BPLPBPMEODA(::JBFGHNLMEDI* a1)
		{
			return ((::ILEDOPGDMHB*(*)(::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + ILEDOPGDMHB_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean OKPLPEELPBC(::JBACCAGFHON* a1, ::DBEILICHGCG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBACCAGFHON*, ::DBEILICHGCG*))((::PBYTE)hIl2Cpp + ILEDOPGDMHB_OKPLPEELPBC_OFFSET))(this, a1, a2);
		}

	};
