#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLLBGBCAMCH.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeHashMap_2.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"

#define KDACPOHLKJL_HANJPAPAJOO_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7F78F0)

inline static constexpr unsigned int KDACPOHLKJL_HANJPAPAJOO_TypeDefinitionIndex = 65704;

struct alignas(8) KDACPOHLKJL_HANJPAPAJOO
{
	::System::Boolean FAHODHFIFOI; // 0x10
	::System::Byte _padding0[0x7];
	::Unity::Collections::NativeHashMap_2<::System::Int32, ::System::Int32> BHAMJDPEBGN; // 0x18
	::System::Byte _padding1[0x8];
	::Unity::Collections::NativeList_1<::HLLBGBCAMCH> DLJBMPBHGNK; // 0x28

	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDACPOHLKJL_HANJPAPAJOO_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
