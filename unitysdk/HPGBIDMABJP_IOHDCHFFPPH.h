#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define HPGBIDMABJP_IOHDCHFFPPH_GDDAPFBDBNO_OFFSET UNITYSDK_OFFSET(0x16F53840)
#define HPGBIDMABJP_IOHDCHFFPPH__CTOR_OFFSET UNITYSDK_OFFSET(0x16F53830)

inline static constexpr unsigned int HPGBIDMABJP_IOHDCHFFPPH_TypeDefinitionIndex = 48810;

class HPGBIDMABJP_IOHDCHFFPPH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* OAAEHIDGOPB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGBIDMABJP_IOHDCHFFPPH__CTOR_OFFSET))(this);
	}

	::System::Boolean GDDAPFBDBNO(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean> HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean>))((::PBYTE)hIl2Cpp + HPGBIDMABJP_IOHDCHFFPPH_GDDAPFBDBNO_OFFSET))(this, HAAEBCOBKFF);
	}
};
