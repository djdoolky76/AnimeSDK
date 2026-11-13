#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HALHKJLBIKJ.h"
class DBEILICHGCG;
class JBACCAGFHON;
class JBFGHNLMEDI;
class PPACNLPCGJN;

#define PPACNLPCGJN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1B89BE40)
#define PPACNLPCGJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1B89BEB0)
#define PPACNLPCGJN_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0x1B89BEC0)

inline static constexpr unsigned int PPACNLPCGJN_TypeDefinitionIndex = 78745;

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
