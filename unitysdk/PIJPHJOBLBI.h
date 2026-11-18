#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PIJPHJOBLBI_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x14B9E520)
#define PIJPHJOBLBI_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x14B9E570)
#define PIJPHJOBLBI__CTOR_OFFSET UNITYSDK_OFFSET(0x14B9E5C0)

inline static constexpr unsigned int PIJPHJOBLBI_TypeDefinitionIndex = 51146;

class PIJPHJOBLBI : public ::System::Object
{
public:
	::System::Int32 ICIEKPICGKN; // 0x10
	::System::Int32 HJOBJCCCJOD; // 0x14
	::System::Int32 CIEBHFEIMIB; // 0x18
	::System::Boolean AJFFIBBGBCG; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJPHJOBLBI__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Int32 HJOBJCCCJOD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIJPHJOBLBI_BBOMJDBNHIC_OFFSET))(this, HJOBJCCCJOD);
	}

	::System::Void DFJPMOOOLHM(::System::Int32 HNOPAJLDCFB, ::System::Int32 GEGOALONGBI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PIJPHJOBLBI_DFJPMOOOLHM_OFFSET))(this, HNOPAJLDCFB, GEGOALONGBI);
	}
};
