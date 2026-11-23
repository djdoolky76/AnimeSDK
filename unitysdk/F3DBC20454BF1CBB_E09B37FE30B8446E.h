#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BA20E0C8E272C1EA.h"

class FC4E17182668B77E;
namespace ABC::Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }

#define F3DBC20454BF1CBB_E09B37FE30B8446E_BCB0A4DD6EA3B4C9_OFFSET UNITYSDK_OFFSET(0x1EC00D0)
#define F3DBC20454BF1CBB_E09B37FE30B8446E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F3DBC20454BF1CBB_E09B37FE30B8446E_TypeDefinitionIndex = 6770;

class F3DBC20454BF1CBB_E09B37FE30B8446E : public ::System::Object
{
public:
	::ABC::Collections::Pooled::PooledDictionary_2<::System::UInt32, ::FC4E17182668B77E*>* E46BD807D5BCA3FA; // 0x10

	::System::Int32 BCB0A4DD6EA3B4C9(::BA20E0C8E272C1EA BB8C609F76620E45, ::BA20E0C8E272C1EA A0A0D02932F12CFD)
	{
		return ((::System::Int32(*)(::PVOID, ::BA20E0C8E272C1EA, ::BA20E0C8E272C1EA))((::PBYTE)hIl2Cpp + F3DBC20454BF1CBB_E09B37FE30B8446E_BCB0A4DD6EA3B4C9_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3DBC20454BF1CBB_E09B37FE30B8446E__CTOR_OFFSET))(this);
	}
};
