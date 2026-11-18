#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMHAFAIPNGJ.h"
#include "unitysdk/Foundation/Geometry/Circle2D.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define DMHAFAIPNGJ_OIMJKEELOJM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x740DA0)
#define DMHAFAIPNGJ_OIMJKEELOJM__CTOR_OFFSET UNITYSDK_OFFSET(0x740D40)

inline static constexpr unsigned int DMHAFAIPNGJ_OIMJKEELOJM_TypeDefinitionIndex = 91071;

struct alignas(8) DMHAFAIPNGJ_OIMJKEELOJM
{
	::DMHAFAIPNGJ EPGGMNEDPEI; // 0x10
	::Foundation::Geometry::Circle2D HOLFGHDNDOI; // 0xB0
	::System::Byte _padding0[0x4];
	::Unity::Collections::NativeArray_1<::System::Single> KGBDIICHFEL; // 0xC0

	::System::Void _ctor(::DMHAFAIPNGJ LCGEMJEDIPC, ::Foundation::Geometry::Circle2D NKKCELMPODJ, ::Unity::Collections::NativeArray_1<::System::Single> CKELOFDFEEM)
	{
		return ((::System::Void(*)(::PVOID, ::DMHAFAIPNGJ, ::Foundation::Geometry::Circle2D, ::Unity::Collections::NativeArray_1<::System::Single>))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_OIMJKEELOJM__CTOR_OFFSET))(this, LCGEMJEDIPC, NKKCELMPODJ, CKELOFDFEEM);
	}

	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_OIMJKEELOJM_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
