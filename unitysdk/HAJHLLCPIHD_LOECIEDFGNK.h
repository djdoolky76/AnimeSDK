#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONIHBCAKIND.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define HAJHLLCPIHD_LOECIEDFGNK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x65FFC0)

inline static constexpr unsigned int HAJHLLCPIHD_LOECIEDFGNK_TypeDefinitionIndex = 47499;

struct alignas(8) HAJHLLCPIHD_LOECIEDFGNK
{
	::Unity::Collections::NativeList_1<::ONIHBCAKIND> OBKICKGGFEO; // 0x10
	::System::Byte _padding0[0x8];
	::System::Object* DBKIOKKOFJG; // 0x20
	::System::Byte _padding1[0x10];
	::UnityEngine::Vector3 ADDCBFJBHNC; // 0x38

	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HAJHLLCPIHD_LOECIEDFGNK_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
