#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBHPDPBIGPK;
class JGBMOOJHMBF;

#define HMENNFHKEOE_EGPBCOPDIEA_ILIBBLOKJNI_OFFSET UNITYSDK_OFFSET(0x19E330C0)
#define HMENNFHKEOE_EGPBCOPDIEA_MFGGMPMPIFD_OFFSET UNITYSDK_OFFSET(0x19E32F50)
#define HMENNFHKEOE_EGPBCOPDIEA__CTOR_OFFSET UNITYSDK_OFFSET(0x19E32F40)

inline static constexpr unsigned int HMENNFHKEOE_EGPBCOPDIEA_TypeDefinitionIndex = 53320;

class HMENNFHKEOE_EGPBCOPDIEA : public ::System::Object
{
public:
	::FBHPDPBIGPK* LNCJHJHAJAM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_EGPBCOPDIEA__CTOR_OFFSET))(this);
	}

	::System::Void MFGGMPMPIFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_EGPBCOPDIEA_MFGGMPMPIFD_OFFSET))(this);
	}

	::System::Void ILIBBLOKJNI(::JGBMOOJHMBF* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::JGBMOOJHMBF*))((::PBYTE)hIl2Cpp + HMENNFHKEOE_EGPBCOPDIEA_ILIBBLOKJNI_OFFSET))(this, HMMMOCJAEOA);
	}
};
