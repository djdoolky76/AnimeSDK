#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CCPCAPILDDK;
class OAEFGCLEHHO;

#define HPKFKFICMOL_KGADLMLDEAB_OMGFKLPMJOO_OFFSET UNITYSDK_OFFSET(0x140CEAF0)
#define HPKFKFICMOL_KGADLMLDEAB__CTOR_OFFSET UNITYSDK_OFFSET(0x140CEAE0)

inline static constexpr unsigned int HPKFKFICMOL_KGADLMLDEAB_TypeDefinitionIndex = 40006;

class HPKFKFICMOL_KGADLMLDEAB : public ::System::Object
{
public:
	::CCPCAPILDDK* BELEHPLHKKN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKFKFICMOL_KGADLMLDEAB__CTOR_OFFSET))(this);
	}

	::System::Void OMGFKLPMJOO(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HPKFKFICMOL_KGADLMLDEAB_OMGFKLPMJOO_OFFSET))(this, GLAOEHCGCFO);
	}
};
