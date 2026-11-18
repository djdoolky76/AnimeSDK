#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BLFLLOAJKIM;
class ENGKPGFGGLM;
class KMMOLFIBFPK;

#define BLFLLOAJKIM_PJENCLMAHPB_HGOMOGOMDMO_OFFSET UNITYSDK_OFFSET(0x10E0C040)
#define BLFLLOAJKIM_PJENCLMAHPB__CTOR_OFFSET UNITYSDK_OFFSET(0x10E0C030)

inline static constexpr unsigned int BLFLLOAJKIM_PJENCLMAHPB_TypeDefinitionIndex = 61701;

class BLFLLOAJKIM_PJENCLMAHPB : public ::System::Object
{
public:
	::ENGKPGFGGLM* FFNKDGGHBPP; // 0x10
	::BLFLLOAJKIM* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFLLOAJKIM_PJENCLMAHPB__CTOR_OFFSET))(this);
	}

	::System::Void HGOMOGOMDMO(::KMMOLFIBFPK* IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::KMMOLFIBFPK*))((::PBYTE)hIl2Cpp + BLFLLOAJKIM_PJENCLMAHPB_HGOMOGOMDMO_OFFSET))(this, IMLLDOHDCNC);
	}
};
