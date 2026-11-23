#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B40A70FA46516148/ED57AD23D389104B.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define FEBEEC466798851E__CTOR_OFFSET UNITYSDK_OFFSET(0x3B27B50)

inline static constexpr unsigned int FEBEEC466798851E_TypeDefinitionIndex = 19258;

class FEBEEC466798851E : public ::System::Object
{
public:
	::System::Boolean BB7E20756B166ADA; // 0x10
	::System::Boolean E75CA8C92BB3E454; // 0x11
	::System::Byte _padding0[0x2];
	::System::Int32 B68410E1D247183A; // 0x14
	::System::Nullable_1<::B40A70FA46516148::ED57AD23D389104B> E136A29B0CE98924; // 0x18

	::System::Void _ctor(::System::Boolean BB7E20756B166ADA, ::System::Boolean E75CA8C92BB3E454, ::System::Int32 B68410E1D247183A, ::System::Nullable_1<::B40A70FA46516148::ED57AD23D389104B> E136A29B0CE98924)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Nullable_1<::B40A70FA46516148::ED57AD23D389104B>))((::PBYTE)hIl2Cpp + FEBEEC466798851E__CTOR_OFFSET))(this, BB7E20756B166ADA, E75CA8C92BB3E454, B68410E1D247183A, E136A29B0CE98924);
	}
};
