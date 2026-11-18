#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define ECGCMHEDEPC_ONOEIOODCDA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x654800)
#define ECGCMHEDEPC_ONOEIOODCDA_MLBHDAIPBCH_OFFSET UNITYSDK_OFFSET(0x10F1DC70)

inline static constexpr unsigned int ECGCMHEDEPC_ONOEIOODCDA_TypeDefinitionIndex = 55291;

struct alignas(8) ECGCMHEDEPC_ONOEIOODCDA
{
	::UnityEngine::Vector3 PMMHPDOBJAC; // 0x10
	::System::Single PMNLNNGEIFM; // 0x1C
	::Unity::Collections::NativeArray_1<::System::Object*> PILELGPBCLL; // 0x20

	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_ONOEIOODCDA_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}

	static ::System::Single MLBHDAIPBCH(::System::Single OLKHDAAGGAA, ::System::Single HODAIDNDKHD, ::System::Single KKIAHJODOIA)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_ONOEIOODCDA_MLBHDAIPBCH_OFFSET))(OLKHDAAGGAA, HODAIDNDKHD, KKIAHJODOIA);
	}
};
