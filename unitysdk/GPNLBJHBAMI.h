#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GPNLBJHBAMI_KNCEGMACAHN_OFFSET UNITYSDK_OFFSET(0x125F0A90)
#define GPNLBJHBAMI_KNJMLBNJLBF_OFFSET UNITYSDK_OFFSET(0x125F0A50)
#define GPNLBJHBAMI_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x125F0820)
#define GPNLBJHBAMI__CTOR_OFFSET UNITYSDK_OFFSET(0x125F0810)

inline static constexpr unsigned int GPNLBJHBAMI_TypeDefinitionIndex = 67856;

class GPNLBJHBAMI : public ::System::Object
{
public:
	::System::Single JLCKOCEMBPP; // 0x10
	::System::Single HAFDDCODGAE; // 0x14
	::System::Boolean KNABHIPNMHF; // 0x18
	::System::Byte _padding0[0x3];
	::System::Single DLPKOJMGHHC; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNLBJHBAMI__CTOR_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNLBJHBAMI_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void KNJMLBNJLBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNLBJHBAMI_KNJMLBNJLBF_OFFSET))(this);
	}

	::System::Void KNCEGMACAHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNLBJHBAMI_KNCEGMACAHN_OFFSET))(this);
	}
};
