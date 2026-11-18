#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NGDMJEINFBH__CTOR_OFFSET UNITYSDK_OFFSET(0x1DACD300)

inline static constexpr unsigned int NGDMJEINFBH_TypeDefinitionIndex = 93332;

class NGDMJEINFBH : public ::BIHPBFHEOOA
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* MAGMPAPMPNB; // 0x10
	::System::UInt32 BKLGNCBNEGM; // 0x18
	::System::UInt32 AMHFLBPBKLL; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDMJEINFBH__CTOR_OFFSET))(this);
	}
};
