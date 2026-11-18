#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LKMLFIAKFOO_MCLCFDLNDNL_NBCNJCPBOHP_OFFSET UNITYSDK_OFFSET(0x15664BB0)
#define LKMLFIAKFOO_MCLCFDLNDNL__CTOR_OFFSET UNITYSDK_OFFSET(0x15664BA0)

inline static constexpr unsigned int LKMLFIAKFOO_MCLCFDLNDNL_TypeDefinitionIndex = 43578;

class LKMLFIAKFOO_MCLCFDLNDNL : public ::System::Object
{
public:
	::System::Int32 MGMDLMBEDJF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_MCLCFDLNDNL__CTOR_OFFSET))(this);
	}

	::System::Boolean NBCNJCPBOHP(::System::Int32 HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_MCLCFDLNDNL_NBCNJCPBOHP_OFFSET))(this, HAAEBCOBKFF);
	}
};
