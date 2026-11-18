#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBHPDPBIGPK;
class NJCGGJODIDB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NJCGGJODIDB_OPMMGEJAMEO_OAMNKBNAKBF_OFFSET UNITYSDK_OFFSET(0x11F82090)
#define NJCGGJODIDB_OPMMGEJAMEO__CTOR_OFFSET UNITYSDK_OFFSET(0x11F82080)

inline static constexpr unsigned int NJCGGJODIDB_OPMMGEJAMEO_TypeDefinitionIndex = 54979;

class NJCGGJODIDB_OPMMGEJAMEO : public ::System::Object
{
public:
	::NJCGGJODIDB* KLHPEBKNIFB; // 0x10
	::System::Int32 BOHJHBINAEE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCGGJODIDB_OPMMGEJAMEO__CTOR_OFFSET))(this);
	}

	::System::Void OAMNKBNAKBF(::System::Collections::Generic::List_1<::FBHPDPBIGPK*>* DGCALIFHGGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FBHPDPBIGPK*>*))((::PBYTE)hIl2Cpp + NJCGGJODIDB_OPMMGEJAMEO_OAMNKBNAKBF_OFFSET))(this, DGCALIFHGGD);
	}
};
