#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFLMEKGKBMD;
namespace System { class Action; }

#define IFLMEKGKBMD_HJHEEDGACCJ_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x1B4ECBD0)
#define IFLMEKGKBMD_HJHEEDGACCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4ECBC0)

inline static constexpr unsigned int IFLMEKGKBMD_HJHEEDGACCJ_TypeDefinitionIndex = 15522;

class IFLMEKGKBMD_HJHEEDGACCJ : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::IFLMEKGKBMD* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLMEKGKBMD_HJHEEDGACCJ__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IFLMEKGKBMD_HJHEEDGACCJ_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
