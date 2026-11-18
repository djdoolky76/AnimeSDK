#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define PIHOIENKGAF_GNBLLFIJJDF_HBKGFFDBMDO_OFFSET UNITYSDK_OFFSET(0x1D62A6A0)
#define PIHOIENKGAF_GNBLLFIJJDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D62A690)

inline static constexpr unsigned int PIHOIENKGAF_GNBLLFIJJDF_TypeDefinitionIndex = 50937;

class PIHOIENKGAF_GNBLLFIJJDF : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHOIENKGAF_GNBLLFIJJDF__CTOR_OFFSET))(this);
	}

	::System::Void HBKGFFDBMDO(::System::ValueTuple_2<::System::Boolean, ::System::Int32> IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::System::Int32>))((::PBYTE)hIl2Cpp + PIHOIENKGAF_GNBLLFIJJDF_HBKGFFDBMDO_OFFSET))(this, IGAAKDOIPNN);
	}
};
