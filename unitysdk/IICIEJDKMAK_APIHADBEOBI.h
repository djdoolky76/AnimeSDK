#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IICIEJDKMAK;
namespace System { class Action; }

#define IICIEJDKMAK_APIHADBEOBI_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x1B12F740)
#define IICIEJDKMAK_APIHADBEOBI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B12F730)

inline static constexpr unsigned int IICIEJDKMAK_APIHADBEOBI_TypeDefinitionIndex = 10115;

class IICIEJDKMAK_APIHADBEOBI : public ::System::Object
{
public:
	::IICIEJDKMAK* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IICIEJDKMAK_APIHADBEOBI__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IICIEJDKMAK_APIHADBEOBI_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
