#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PALEEFPDEDL.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PPEONDMKHAM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x818940)

inline static constexpr unsigned int PPEONDMKHAM_TypeDefinitionIndex = 61049;

struct alignas(8) PPEONDMKHAM
{
	::UnityEngine::Vector3 FCNPOKNKMOD; // 0x10
	::System::Single PGHMADIKBGM; // 0x1C
	::System::Single JBJGBPELPJF; // 0x20
	::System::Single JLLPNBCIDOO; // 0x24
	::System::Single PMNLNNGEIFM; // 0x28
	::System::Boolean FNKGPAGBPCB; // 0x2C
	::System::Byte _padding0[0x3];
	::System::Single COFGJLONDEJ; // 0x30
	::System::Byte _padding1[0x4];
	::Unity::Collections::NativeList_1<::PALEEFPDEDL> OAJILAOAOLB; // 0x38

	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PPEONDMKHAM_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
