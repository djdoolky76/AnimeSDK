#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPGBGLGJGCF_CCEMFFGBBMF_IMLBHLEBDDB_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x709A10)

inline static constexpr unsigned int NPGBGLGJGCF_CCEMFFGBBMF_IMLBHLEBDDB_TypeDefinitionIndex = 59310;

struct alignas(8) NPGBGLGJGCF_CCEMFFGBBMF_IMLBHLEBDDB
{
	::System::Boolean HJLJHMEPBDJ; // 0x10
	::System::Byte _padding0[0x3];
	::System::Int32 OIMCIAFCICK; // 0x14
	::UnityEngine::Vector3 GPNBJBDLELB; // 0x18
	::System::Int32 EJMFJBKMNLI; // 0x24
	::System::Boolean HHENJIOCHID; // 0x28
	::System::Byte _padding1[0x7];
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* MILCHECJLFL; // 0x30
	::System::Boolean BGFHJDCBLFN; // 0x38

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_IMLBHLEBDDB_NPOLNFDBOOD_OFFSET))(this);
	}
};
