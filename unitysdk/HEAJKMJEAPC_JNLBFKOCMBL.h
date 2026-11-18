#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BILCMCMBPFH.h"
#include "unitysdk/IJPHNBJEBLJ.h"
#include "unitysdk/System/Object.h"

class HEAJKMJEAPC;

#define HEAJKMJEAPC_JNLBFKOCMBL_ACKJJDHBCPI_OFFSET UNITYSDK_OFFSET(0x16F2D420)
#define HEAJKMJEAPC_JNLBFKOCMBL__CTOR_OFFSET UNITYSDK_OFFSET(0x16F2D410)

inline static constexpr unsigned int HEAJKMJEAPC_JNLBFKOCMBL_TypeDefinitionIndex = 85983;

class HEAJKMJEAPC_JNLBFKOCMBL : public ::System::Object
{
public:
	::HEAJKMJEAPC* KLHPEBKNIFB; // 0x10
	::BILCMCMBPFH BAHHHNPBNLL; // 0x18
	::System::Boolean CGEMLHFPINP; // 0x1C
	::System::Byte _padding0[0x3];
	::IJPHNBJEBLJ LHHIIDPIJJB; // 0x20
	::System::Int32 DONFNODEALN; // 0x24
	::System::Int32 BNLHPGHLKDK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAJKMJEAPC_JNLBFKOCMBL__CTOR_OFFSET))(this);
	}

	::System::Void ACKJJDHBCPI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAJKMJEAPC_JNLBFKOCMBL_ACKJJDHBCPI_OFFSET))(this);
	}
};
