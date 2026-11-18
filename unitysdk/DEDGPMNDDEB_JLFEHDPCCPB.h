#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class DEDGPMNDDEB;
namespace System { class String; }

#define DEDGPMNDDEB_JLFEHDPCCPB_INVOKE_OFFSET UNITYSDK_OFFSET(0x7E7AA0)

inline static constexpr unsigned int DEDGPMNDDEB_JLFEHDPCCPB_TypeDefinitionIndex = 85048;

struct alignas(8) DEDGPMNDDEB_JLFEHDPCCPB
{
	::DEDGPMNDDEB* OIPGIHJJNFE; // 0x10
	::System::String* MGEDBKBHJPM; // 0x18
	::System::Boolean KKIBKGLJKHD; // 0x20
	::System::Byte _padding0[0x3];
	::System::Int32 FJCHJOGKKGL; // 0x24

	::System::Void Invoke(::System::String* KOIBHLHLMFC, ::MoleMole::EntityHandle AKJPGMPBOPA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + DEDGPMNDDEB_JLFEHDPCCPB_INVOKE_OFFSET))(this, KOIBHLHLMFC, AKJPGMPBOPA);
	}
};
