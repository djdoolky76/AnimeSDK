#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FJNNCIKHPCH;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CPPCIEKHPDA_NGGPFOABLAJ_HHLGCCGCLJE_OFFSET UNITYSDK_OFFSET(0x19D4B650)
#define CPPCIEKHPDA_NGGPFOABLAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19D4B600)

inline static constexpr unsigned int CPPCIEKHPDA_NGGPFOABLAJ_TypeDefinitionIndex = 83500;

class CPPCIEKHPDA_NGGPFOABLAJ : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* BGABFIPAANB; // 0x10
	::FJNNCIKHPCH* FMCOPCBOPEJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPCIEKHPDA_NGGPFOABLAJ__CTOR_OFFSET))(this);
	}

	::System::Boolean HHLGCCGCLJE(::FJNNCIKHPCH* HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::PVOID, ::FJNNCIKHPCH*))((::PBYTE)hIl2Cpp + CPPCIEKHPDA_NGGPFOABLAJ_HHLGCCGCLJE_OFFSET))(this, HMMMOCJAEOA);
	}
};
