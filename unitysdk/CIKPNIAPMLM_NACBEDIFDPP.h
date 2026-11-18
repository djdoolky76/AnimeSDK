#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CIKPNIAPMLM_NACBEDIFDPP_MKNMIBGCIFD_OFFSET UNITYSDK_OFFSET(0x18DD8340)
#define CIKPNIAPMLM_NACBEDIFDPP__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD8330)

inline static constexpr unsigned int CIKPNIAPMLM_NACBEDIFDPP_TypeDefinitionIndex = 73645;

class CIKPNIAPMLM_NACBEDIFDPP : public ::System::Object
{
public:
	::System::Int32 IJECEFLLHMJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKPNIAPMLM_NACBEDIFDPP__CTOR_OFFSET))(this);
	}

	::System::Void MKNMIBGCIFD(::System::String* FOKKDPIMHHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CIKPNIAPMLM_NACBEDIFDPP_MKNMIBGCIFD_OFFSET))(this, FOKKDPIMHHD);
	}
};
