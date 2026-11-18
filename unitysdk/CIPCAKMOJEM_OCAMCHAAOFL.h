#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CIPCAKMOJEM;
namespace System { class Action; }

#define CIPCAKMOJEM_OCAMCHAAOFL_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x1A17E2C0)
#define CIPCAKMOJEM_OCAMCHAAOFL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A17E2B0)

inline static constexpr unsigned int CIPCAKMOJEM_OCAMCHAAOFL_TypeDefinitionIndex = 12133;

class CIPCAKMOJEM_OCAMCHAAOFL : public ::System::Object
{
public:
	::CIPCAKMOJEM* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPCAKMOJEM_OCAMCHAAOFL__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CIPCAKMOJEM_OCAMCHAAOFL_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
