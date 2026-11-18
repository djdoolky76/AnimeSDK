#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GKMDADCANKM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LIBGLPAKACM_JOJOEHHMBHL_OFFSET UNITYSDK_OFFSET(0x190FC8A0)
#define LIBGLPAKACM_MDOAMLEGPJD_OFFSET UNITYSDK_OFFSET(0x190FC890)
#define LIBGLPAKACM_PLMBHEPJOKD_OFFSET UNITYSDK_OFFSET(0x190FC980)
#define LIBGLPAKACM__CTOR_OFFSET UNITYSDK_OFFSET(0x190FC800)

inline static constexpr unsigned int LIBGLPAKACM_TypeDefinitionIndex = 13026;

class LIBGLPAKACM : public ::System::Object
{
public:
	::GKMDADCANKM* MMMDALJFLNJ; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* CFLAGIPDJII; // 0x18
	::System::Boolean AHJAAHBFICB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIBGLPAKACM__CTOR_OFFSET))(this);
	}

	::System::Void MDOAMLEGPJD(::GKMDADCANKM* GDILGDGAPEL)
	{
		return ((::System::Void(*)(::PVOID, ::GKMDADCANKM*))((::PBYTE)hIl2Cpp + LIBGLPAKACM_MDOAMLEGPJD_OFFSET))(this, GDILGDGAPEL);
	}

	::System::Boolean JOJOEHHMBHL(::System::Int32 NACGJJKHEJE, ::System::Collections::Generic::HashSet_1<::System::Int32>*& LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + LIBGLPAKACM_JOJOEHHMBHL_OFFSET))(this, NACGJJKHEJE, LJBPECKCCEA);
	}

	::System::Void PLMBHEPJOKD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIBGLPAKACM_PLMBHEPJOKD_OFFSET))(this);
	}
};
