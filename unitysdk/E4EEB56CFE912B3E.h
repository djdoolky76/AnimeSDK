#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class Type; }

#define E4EEB56CFE912B3E_ED1BB6CEA07DB585_OFFSET UNITYSDK_OFFSET(0x3CEF300)
#define E4EEB56CFE912B3E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E4EEB56CFE912B3E_TypeDefinitionIndex = 10746;

class E4EEB56CFE912B3E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4EEB56CFE912B3E__CTOR_OFFSET))(this);
	}

	::System::Exception* ED1BB6CEA07DB585(::System::Type* A67E7F50FDF4F216)
	{
		return ((::System::Exception*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + E4EEB56CFE912B3E_ED1BB6CEA07DB585_OFFSET))(this, A67E7F50FDF4F216);
	}
};
