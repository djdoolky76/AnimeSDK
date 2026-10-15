#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HALHKJLBIKJ.h"
class DBEILICHGCG;
class JBACCAGFHON;
class JBFGHNLMEDI;
class PPACNLPCGJN;

#define PPACNLPCGJN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC377100)
#define PPACNLPCGJN_CTOR_OFFSET UNITYSDK_OFFSET(0xC377170)
#define PPACNLPCGJN_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0xC377180)

inline static constexpr unsigned int PPACNLPCGJN_TypeDefinitionIndex = 76415;

	class PPACNLPCGJN : public ::HALHKJLBIKJ
	{
	public:
		::System::Void _ctor(::JBFGHNLMEDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + PPACNLPCGJN_CTOR_OFFSET))(this, a1);
		}

		static ::PPACNLPCGJN* BPLPBPMEODA(::JBFGHNLMEDI* a1)
		{
			return ((::PPACNLPCGJN*(*)(::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + PPACNLPCGJN_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean OKPLPEELPBC(::JBACCAGFHON* a1, ::DBEILICHGCG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBACCAGFHON*, ::DBEILICHGCG*))((::PBYTE)hIl2Cpp + PPACNLPCGJN_OKPLPEELPBC_OFFSET))(this, a1, a2);
		}

	};
