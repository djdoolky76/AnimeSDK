#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class DJMJBACBEMG;
namespace System { class String; }

#define DJMJBACBEMG_ELDDBKIKPFI_INVOKE_OFFSET UNITYSDK_OFFSET(0x794090)

inline static constexpr unsigned int DJMJBACBEMG_ELDDBKIKPFI_TypeDefinitionIndex = 52962;

struct alignas(8) DJMJBACBEMG_ELDDBKIKPFI
{
	::DJMJBACBEMG* OIPGIHJJNFE; // 0x10
	::Foundation::ViewObject::ViewObjectHandle IDJOMIMIOGM; // 0x18
	::System::String* MGEDBKBHJPM; // 0x28
	::System::Boolean KKIBKGLJKHD; // 0x30
	::System::Byte _padding0[0x3];
	::System::Int32 FJCHJOGKKGL; // 0x34

	::System::Void Invoke(::System::String* KOIBHLHLMFC, ::MoleMole::EntityHandle AKJPGMPBOPA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + DJMJBACBEMG_ELDDBKIKPFI_INVOKE_OFFSET))(this, KOIBHLHLMFC, AKJPGMPBOPA);
	}
};
