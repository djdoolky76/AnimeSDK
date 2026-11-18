#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BOOAPJIDGLO;
class CMLEOMMLODC;
class DCKOIEAAEDL;
class MLPGEJOFJBL;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IMMHPACPLEH_FNBDKPPFNFO__CTOR_OFFSET UNITYSDK_OFFSET(0x15C22370)

inline static constexpr unsigned int IMMHPACPLEH_FNBDKPPFNFO_TypeDefinitionIndex = 39743;

class IMMHPACPLEH_FNBDKPPFNFO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::BOOAPJIDGLO*>* AMJOCHAHINN; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::CMLEOMMLODC*>* HCLJHBFILDC; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MLPGEJOFJBL*>* IJCNIPGOMOE; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::DCKOIEAAEDL*>* ABOAAFEENOE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMHPACPLEH_FNBDKPPFNFO__CTOR_OFFSET))(this);
	}
};
