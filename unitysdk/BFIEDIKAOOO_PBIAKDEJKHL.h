#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BFIEDIKAOOO;
namespace System { class Action; }

#define BFIEDIKAOOO_PBIAKDEJKHL_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x19AC4480)
#define BFIEDIKAOOO_PBIAKDEJKHL__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC4470)

inline static constexpr unsigned int BFIEDIKAOOO_PBIAKDEJKHL_TypeDefinitionIndex = 14134;

class BFIEDIKAOOO_PBIAKDEJKHL : public ::System::Object
{
public:
	::BFIEDIKAOOO* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIEDIKAOOO_PBIAKDEJKHL__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BFIEDIKAOOO_PBIAKDEJKHL_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
