#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define BGJCOEKKMBG_NNLIJFDOMHJ_PFFFHBGLBOA_OFFSET UNITYSDK_OFFSET(0xFF6F5C0)
#define BGJCOEKKMBG_NNLIJFDOMHJ__CTOR_OFFSET UNITYSDK_OFFSET(0xFF6F5B0)

inline static constexpr unsigned int BGJCOEKKMBG_NNLIJFDOMHJ_TypeDefinitionIndex = 46540;

class BGJCOEKKMBG_NNLIJFDOMHJ : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::String* DMKBGJMJELN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_NNLIJFDOMHJ__CTOR_OFFSET))(this);
	}

	::System::Void PFFFHBGLBOA(::Il2CppArray<::System::Byte>* AOADDGCDELC)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_NNLIJFDOMHJ_PFFFHBGLBOA_OFFSET))(this, AOADDGCDELC);
	}
};
