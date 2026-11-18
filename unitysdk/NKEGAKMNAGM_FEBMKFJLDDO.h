#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAJGCLDPEFI.h"
#include "unitysdk/System/Object.h"

class NKEGAKMNAGM;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define NKEGAKMNAGM_FEBMKFJLDDO_BPHBDAONINI_OFFSET UNITYSDK_OFFSET(0x114A5FF0)
#define NKEGAKMNAGM_FEBMKFJLDDO_EJIILPMMNPC_OFFSET UNITYSDK_OFFSET(0x114A60F0)
#define NKEGAKMNAGM_FEBMKFJLDDO_KKHHEKKFEAM_OFFSET UNITYSDK_OFFSET(0x114A5890)
#define NKEGAKMNAGM_FEBMKFJLDDO__CTOR_OFFSET UNITYSDK_OFFSET(0x114A5880)

inline static constexpr unsigned int NKEGAKMNAGM_FEBMKFJLDDO_TypeDefinitionIndex = 82157;

class NKEGAKMNAGM_FEBMKFJLDDO : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* PLCBINNKMAM; // 0x10
	::NKEGAKMNAGM* KLHPEBKNIFB; // 0x18
	::System::String* OIAAGKHNNEP; // 0x20
	::System::Boolean GDNECMBHKND; // 0x28
	::System::Byte _padding0[0x3];
	::System::UInt32 CNENMOBJBBK; // 0x2C
	::MAJGCLDPEFI FCPCLIJNDLA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_FEBMKFJLDDO__CTOR_OFFSET))(this);
	}

	::System::Void KKHHEKKFEAM(::System::Boolean APBONFCBAMB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_FEBMKFJLDDO_KKHHEKKFEAM_OFFSET))(this, APBONFCBAMB);
	}

	::System::Void BPHBDAONINI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_FEBMKFJLDDO_BPHBDAONINI_OFFSET))(this);
	}

	::System::Void EJIILPMMNPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_FEBMKFJLDDO_EJIILPMMNPC_OFFSET))(this);
	}
};
