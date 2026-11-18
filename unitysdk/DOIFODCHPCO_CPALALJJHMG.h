#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DOIFODCHPCO_CPALALJJHMG_DLAGPKLFCLG_OFFSET UNITYSDK_OFFSET(0x1697A890)
#define DOIFODCHPCO_CPALALJJHMG__CTOR_OFFSET UNITYSDK_OFFSET(0x1697A880)

inline static constexpr unsigned int DOIFODCHPCO_CPALALJJHMG_TypeDefinitionIndex = 59548;

class DOIFODCHPCO_CPALALJJHMG : public ::System::Object
{
public:
	::System::String* LLNCKEENHDH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIFODCHPCO_CPALALJJHMG__CTOR_OFFSET))(this);
	}

	::System::Boolean DLAGPKLFCLG(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DOIFODCHPCO_CPALALJJHMG_DLAGPKLFCLG_OFFSET))(this, HIAIKHDFCLN);
	}
};
