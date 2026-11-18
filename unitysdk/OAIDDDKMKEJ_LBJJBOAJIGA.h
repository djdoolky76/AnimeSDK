#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/System/ValueType.h"

#define OAIDDDKMKEJ_LBJJBOAJIGA_OJPLNGOJDIJ_OFFSET UNITYSDK_OFFSET(0x67F0F0)

inline static constexpr unsigned int OAIDDDKMKEJ_LBJJBOAJIGA_TypeDefinitionIndex = 62791;

struct alignas(8) OAIDDDKMKEJ_LBJJBOAJIGA
{
	::Foundation::Unreal::FTransform GLPPGPNCCOB; // 0x10
	::System::Single LLBEKEFONPC; // 0x30
	::Foundation::Unreal::FName PEOIDILBIBG; // 0x34
	::System::Byte _padding0[0x4];
	::Foundation::NativeVariableArray_1<::Foundation::Unreal::FTransform3D> AHAINDLEPPB; // 0x40

	::System::Int32 OJPLNGOJDIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_LBJJBOAJIGA_OJPLNGOJDIJ_OFFSET))(this);
	}
};
