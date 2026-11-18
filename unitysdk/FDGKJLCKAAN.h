#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGNNAMFJDL.h"
#include "unitysdk/System/Object.h"

class DOHJLLDDOCH;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FDGKJLCKAAN_EMOMMPHMKOG_OFFSET UNITYSDK_OFFSET(0x132043A0)
#define FDGKJLCKAAN_PDOBLMKLCNC_OFFSET UNITYSDK_OFFSET(0x132044F0)
#define FDGKJLCKAAN__CTOR_OFFSET UNITYSDK_OFFSET(0x13203C80)

inline static constexpr unsigned int FDGKJLCKAAN_TypeDefinitionIndex = 67804;

class FDGKJLCKAAN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::DOHJLLDDOCH*>* EIKFBBGMGNM; // 0x10
	::System::Int32 FFJGPKNMBBP; // 0x18

	::System::Void _ctor(::System::Int32 DMBMOMEKJFO, ::System::Collections::Generic::Dictionary_2<::DBGNNAMFJDL, ::System::Int32>* KMPKJOMGBPD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::DBGNNAMFJDL, ::System::Int32>*))((::PBYTE)hIl2Cpp + FDGKJLCKAAN__CTOR_OFFSET))(this, DMBMOMEKJFO, KMPKJOMGBPD);
	}

	::DOHJLLDDOCH* EMOMMPHMKOG(::DBGNNAMFJDL BBDHPBAPPPI)
	{
		return ((::DOHJLLDDOCH*(*)(::PVOID, ::DBGNNAMFJDL))((::PBYTE)hIl2Cpp + FDGKJLCKAAN_EMOMMPHMKOG_OFFSET))(this, BBDHPBAPPPI);
	}

	::System::Boolean PDOBLMKLCNC(::DBGNNAMFJDL BBDHPBAPPPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::DBGNNAMFJDL))((::PBYTE)hIl2Cpp + FDGKJLCKAAN_PDOBLMKLCNC_OFFSET))(this, BBDHPBAPPPI);
	}
};
