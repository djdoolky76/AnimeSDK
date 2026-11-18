#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJFOMLOOGBE.h"

class HGAJKHIMKJP;
class IEEFHIBKECH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GEAEOIGGMIE_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x11CA17D0)
#define GEAEOIGGMIE_DBCOLPNOPOA_OFFSET UNITYSDK_OFFSET(0x11CA17C0)
#define GEAEOIGGMIE__CTOR_OFFSET UNITYSDK_OFFSET(0x11CA17B0)

inline static constexpr unsigned int GEAEOIGGMIE_TypeDefinitionIndex = 58364;

class GEAEOIGGMIE : public ::HJFOMLOOGBE
{
public:
	::IEEFHIBKECH* _CLNDLFNBOFD_k__BackingField; // 0x28

	::System::Void _ctor(::IEEFHIBKECH* OCALHHLFBAF, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* GLOIMHAJJIE, ::System::Boolean GBEJHEECAII)
	{
		return ((::System::Void(*)(::PVOID, ::IEEFHIBKECH*, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GEAEOIGGMIE__CTOR_OFFSET))(this, OCALHHLFBAF, GLOIMHAJJIE, GBEJHEECAII);
	}

	::System::Void DBCOLPNOPOA(::IEEFHIBKECH* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::IEEFHIBKECH*))((::PBYTE)hIl2Cpp + GEAEOIGGMIE_DBCOLPNOPOA_OFFSET))(this, EGEGIMGMJHN);
	}

	::IEEFHIBKECH* BKNKCFDBLGH()
	{
		return ((::IEEFHIBKECH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAEOIGGMIE_BKNKCFDBLGH_OFFSET))(this);
	}
};
