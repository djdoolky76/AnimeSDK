#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define LLMOAMDDBKK_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11F22410)

inline static constexpr unsigned int LLMOAMDDBKK_Context_TypeDefinitionIndex = 50427;

class LLMOAMDDBKK_Context : public ::MoleMole::UIControllerContextBase
{
public:
	::System::String* Title; // 0x28
	::System::Int32 SelectGroupId; // 0x30
	::System::Int32 FunctionId; // 0x34
	::System::Boolean ShowTabProg; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLMOAMDDBKK_CONTEXT__CTOR_OFFSET))(this);
	}
};
