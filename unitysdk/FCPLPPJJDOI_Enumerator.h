#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCPLPPJJDOI_JLOLKKEJIND.h"
#include "unitysdk/System/ValueType.h"

class FCPLPPJJDOI;
namespace System { class Object; }

#define FCPLPPJJDOI_ENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x911030)
#define FCPLPPJJDOI_ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x40D700)
#define FCPLPPJJDOI_ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x911070)
#define FCPLPPJJDOI_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x911080)
#define FCPLPPJJDOI_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x911100)
#define FCPLPPJJDOI_ENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x911020)

inline static constexpr unsigned int FCPLPPJJDOI_Enumerator_TypeDefinitionIndex = 94437;

struct alignas(8) FCPLPPJJDOI_Enumerator
{
	::FCPLPPJJDOI* mgr; // 0x10
	::System::Int32 version; // 0x18
	::FCPLPPJJDOI_JLOLKKEJIND current; // 0x1C
	::System::Int32 minx; // 0x2C
	::System::Int32 miny; // 0x30
	::System::Int32 maxX; // 0x34
	::System::Int32 maxY; // 0x38
	::System::Int32 indexX; // 0x3C
	::System::Int32 indexY; // 0x40
	::System::Int32 indexCell; // 0x44

	::System::Void _ctor(::FCPLPPJJDOI* FHIOPFNMGDF, ::System::Int32 HAAEBCOBKFF, ::System::Int32 BFMMEICFNCD, ::System::Int32 KHHOPGCHCKH)
	{
		return ((::System::Void(*)(::PVOID, ::FCPLPPJJDOI*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FCPLPPJJDOI_ENUMERATOR__CTOR_OFFSET))(this, FHIOPFNMGDF, HAAEBCOBKFF, BFMMEICFNCD, KHHOPGCHCKH);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPLPPJJDOI_ENUMERATOR_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPLPPJJDOI_ENUMERATOR_MOVENEXT_OFFSET))(this);
	}

	::FCPLPPJJDOI_JLOLKKEJIND get_Current()
	{
		return ((::FCPLPPJJDOI_JLOLKKEJIND(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPLPPJJDOI_ENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPLPPJJDOI_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPLPPJJDOI_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}
};
