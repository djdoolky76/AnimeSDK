#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BEOPHGHHKCB;
namespace System { class Action; }

#define BEOPHGHHKCB_NOMHFAEACDJ_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x19F19720)
#define BEOPHGHHKCB_NOMHFAEACDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19F19710)

inline static constexpr unsigned int BEOPHGHHKCB_NOMHFAEACDJ_TypeDefinitionIndex = 16065;

class BEOPHGHHKCB_NOMHFAEACDJ : public ::System::Object
{
public:
	::BEOPHGHHKCB* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOPHGHHKCB_NOMHFAEACDJ__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BEOPHGHHKCB_NOMHFAEACDJ_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
