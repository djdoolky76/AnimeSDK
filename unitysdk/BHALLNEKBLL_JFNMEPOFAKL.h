#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BHALLNEKBLL;
namespace System { class Action; }

#define BHALLNEKBLL_JFNMEPOFAKL_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x1A534340)
#define BHALLNEKBLL_JFNMEPOFAKL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A534330)

inline static constexpr unsigned int BHALLNEKBLL_JFNMEPOFAKL_TypeDefinitionIndex = 10641;

class BHALLNEKBLL_JFNMEPOFAKL : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::BHALLNEKBLL* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHALLNEKBLL_JFNMEPOFAKL__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BHALLNEKBLL_JFNMEPOFAKL_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
