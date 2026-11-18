#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBHPDPBIGPK;

#define IBBOLEDJDCD_HNHLDDFPFJF_OFFSET UNITYSDK_OFFSET(0x1608F7E0)
#define IBBOLEDJDCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1608F630)

inline static constexpr unsigned int IBBOLEDJDCD_TypeDefinitionIndex = 84795;

class IBBOLEDJDCD : public ::System::Object
{
public:
	::FBHPDPBIGPK* GBJOIIAJFKL; // 0x10
	::System::Int64 EHDGDIEAPEP; // 0x18
	::System::UInt32 ACHBBPJIBIE; // 0x20

	::System::Void _ctor(::System::UInt32 FJLIILLCBCE, ::System::Int64 EHDGDIEAPEP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int64))((::PBYTE)hIl2Cpp + IBBOLEDJDCD__CTOR_OFFSET))(this, FJLIILLCBCE, EHDGDIEAPEP);
	}

	::System::Void HNHLDDFPFJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBOLEDJDCD_HNHLDDFPFJF_OFFSET))(this);
	}
};
