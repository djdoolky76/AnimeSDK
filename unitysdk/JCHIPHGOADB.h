#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCIPADHDIIN.h"

class LIPOHGKLAJN;

#define JCHIPHGOADB_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x14A507F0)
#define JCHIPHGOADB_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x14A50760)
#define JCHIPHGOADB_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x14A50680)
#define JCHIPHGOADB__CTOR_OFFSET UNITYSDK_OFFSET(0x14A50750)

inline static constexpr unsigned int JCHIPHGOADB_TypeDefinitionIndex = 53574;

class JCHIPHGOADB : public ::KCIPADHDIIN
{
public:
	::LIPOHGKLAJN* OJGGJOJCLBG; // 0x10
	::System::UInt32 EIPCGGPOHDD; // 0x18
	::System::UInt32 DOPFMGOEFFG; // 0x1C
	::System::Int32 GLGEFHCJKKL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHIPHGOADB__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHIPHGOADB_FCMNHLDLJCI_OFFSET))(this);
	}

	static ::JCHIPHGOADB* BBPCBEEHALC()
	{
		return ((::JCHIPHGOADB*(*)())((::PBYTE)hIl2Cpp + JCHIPHGOADB_BBPCBEEHALC_OFFSET))();
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHIPHGOADB_ANEOCOIFDDJ_OFFSET))(this);
	}
};
