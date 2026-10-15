#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNIJALGPGDD.h"
class AIMNKMEFBKE;
class GLPPDCIBMIH;
class IJFIHJJPHNA;
class PLAJONHLDJN;

#define LDBKEIPCNGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C70A820)
#define LDBKEIPCNGA_GKNPGFECGNG_OFFSET UNITYSDK_OFFSET(0x1C70A7A0)
#define LDBKEIPCNGA_IIADLGIJGHE_OFFSET UNITYSDK_OFFSET(0x1C70A830)
#define LDBKEIPCNGA_LCJMCDLNKMC_OFFSET UNITYSDK_OFFSET(0x1C6FAFE0)

inline static constexpr unsigned int LDBKEIPCNGA_TypeDefinitionIndex = 36422;

	class LDBKEIPCNGA : public ::JNIJALGPGDD
	{
	public:
		::System::Void _ctor(::PLAJONHLDJN* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PLAJONHLDJN*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + LDBKEIPCNGA_CTOR_OFFSET))(this, a1, a2);
		}

		::PLAJONHLDJN* GKNPGFECGNG()
		{
			return ((::PLAJONHLDJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBKEIPCNGA_GKNPGFECGNG_OFFSET))(this);
		}

		::System::Void LCJMCDLNKMC(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + LDBKEIPCNGA_LCJMCDLNKMC_OFFSET))(this, a1);
		}

		::System::Void IIADLGIJGHE(::IJFIHJJPHNA* a1, ::GLPPDCIBMIH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::GLPPDCIBMIH*))((::PBYTE)hIl2Cpp + LDBKEIPCNGA_IIADLGIJGHE_OFFSET))(this, a1, a2);
		}

	};
