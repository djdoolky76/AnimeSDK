#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

template <typename T> class LJHFMILANJA_1;

#define BFMAKOAGGCP_NMLNPJCIANJ_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xF797DD0)
#define BFMAKOAGGCP_NMLNPJCIANJ__CTOR_OFFSET UNITYSDK_OFFSET(0xF797E50)

inline static constexpr unsigned int BFMAKOAGGCP_NMLNPJCIANJ_TypeDefinitionIndex = 56149;

class BFMAKOAGGCP_NMLNPJCIANJ : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Boolean>* LMEMFDGPIAO; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMAKOAGGCP_NMLNPJCIANJ__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMAKOAGGCP_NMLNPJCIANJ_ONCREATEPROPERTY_OFFSET))(this);
	}
};
