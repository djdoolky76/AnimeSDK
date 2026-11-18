#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BGJCOEKKMBG_HCPHHEGNPBG_BBLHEBGGFDH_OFFSET UNITYSDK_OFFSET(0x11504530)
#define BGJCOEKKMBG_HCPHHEGNPBG__CTOR_OFFSET UNITYSDK_OFFSET(0x11504520)

inline static constexpr unsigned int BGJCOEKKMBG_HCPHHEGNPBG_TypeDefinitionIndex = 46535;

class BGJCOEKKMBG_HCPHHEGNPBG : public ::System::Object
{
public:
	::System::String* CJBJONJDOLI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_HCPHHEGNPBG__CTOR_OFFSET))(this);
	}

	::System::Void BBLHEBGGFDH(::Il2CppArray<::System::Byte>* AOADDGCDELC)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_HCPHHEGNPBG_BBLHEBGGFDH_OFFSET))(this, AOADDGCDELC);
	}
};
