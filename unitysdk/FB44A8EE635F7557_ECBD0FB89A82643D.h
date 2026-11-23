#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FB44A8EE635F7557_F3DEF4634D686D01.h"

namespace System { class String; }

#define FB44A8EE635F7557_ECBD0FB89A82643D_E6C7E4F3F4A4D589_OFFSET UNITYSDK_OFFSET(0x1685600)
#define FB44A8EE635F7557_ECBD0FB89A82643D__CTOR_OFFSET UNITYSDK_OFFSET(0x402F6B0)

inline static constexpr unsigned int FB44A8EE635F7557_ECBD0FB89A82643D_TypeDefinitionIndex = 20382;

class FB44A8EE635F7557_ECBD0FB89A82643D : public ::FB44A8EE635F7557_F3DEF4634D686D01
{
public:
	::Il2CppArray<::System::String*>* B5D5BE83D5316897; // 0x50

	::Il2CppArray<::System::String*>* E6C7E4F3F4A4D589()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FB44A8EE635F7557_ECBD0FB89A82643D_E6C7E4F3F4A4D589_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FB44A8EE635F7557_ECBD0FB89A82643D__CTOR_OFFSET))(this);
	}
};
