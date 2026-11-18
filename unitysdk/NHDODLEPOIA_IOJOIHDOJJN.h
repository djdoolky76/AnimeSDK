#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NHDODLEPOIA_LGIMMGBOMBA.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define NHDODLEPOIA_IOJOIHDOJJN_COMPARE_OFFSET UNITYSDK_OFFSET(0x1AE1F260)
#define NHDODLEPOIA_IOJOIHDOJJN__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE1F250)

inline static constexpr unsigned int NHDODLEPOIA_IOJOIHDOJJN_TypeDefinitionIndex = 45769;

class NHDODLEPOIA_IOJOIHDOJJN : public ::System::Object
{
public:
	::System::Func_2<::System::UInt32, ::System::Boolean>* EACNIIGCIAG; // 0x10

	::System::Void _ctor(::System::Func_2<::System::UInt32, ::System::Boolean>* DLGNOAJKIOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + NHDODLEPOIA_IOJOIHDOJJN__CTOR_OFFSET))(this, DLGNOAJKIOL);
	}

	::System::Int32 Compare(::NHDODLEPOIA_LGIMMGBOMBA HAAEBCOBKFF, ::NHDODLEPOIA_LGIMMGBOMBA BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::NHDODLEPOIA_LGIMMGBOMBA, ::NHDODLEPOIA_LGIMMGBOMBA))((::PBYTE)hIl2Cpp + NHDODLEPOIA_IOJOIHDOJJN_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
