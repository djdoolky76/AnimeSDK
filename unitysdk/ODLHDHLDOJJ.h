#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HALHKJLBIKJ.h"
class DBEILICHGCG;
class JBACCAGFHON;
class JBFGHNLMEDI;
class ODLHDHLDOJJ;

#define ODLHDHLDOJJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBD92560)
#define ODLHDHLDOJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBD925D0)
#define ODLHDHLDOJJ_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0xBD925E0)

inline static constexpr unsigned int ODLHDHLDOJJ_TypeDefinitionIndex = 76413;

	class ODLHDHLDOJJ : public ::HALHKJLBIKJ
	{
	public:
		::System::Void _ctor(::JBFGHNLMEDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + ODLHDHLDOJJ_CTOR_OFFSET))(this, a1);
		}

		static ::ODLHDHLDOJJ* BPLPBPMEODA(::JBFGHNLMEDI* a1)
		{
			return ((::ODLHDHLDOJJ*(*)(::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + ODLHDHLDOJJ_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean OKPLPEELPBC(::JBACCAGFHON* a1, ::DBEILICHGCG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBACCAGFHON*, ::DBEILICHGCG*))((::PBYTE)hIl2Cpp + ODLHDHLDOJJ_OKPLPEELPBC_OFFSET))(this, a1, a2);
		}

	};
