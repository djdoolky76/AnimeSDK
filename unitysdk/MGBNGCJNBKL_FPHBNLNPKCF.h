#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFBGJJPIDLA;
class MGBNGCJNBKL;

#define MGBNGCJNBKL_FPHBNLNPKCF_IIMCACBNDNG_OFFSET UNITYSDK_OFFSET(0x1592CA10)
#define MGBNGCJNBKL_FPHBNLNPKCF_MPLAEDCFLIG_OFFSET UNITYSDK_OFFSET(0x1592C9B0)
#define MGBNGCJNBKL_FPHBNLNPKCF__CTOR_OFFSET UNITYSDK_OFFSET(0x1592C9A0)

inline static constexpr unsigned int MGBNGCJNBKL_FPHBNLNPKCF_TypeDefinitionIndex = 50430;

class MGBNGCJNBKL_FPHBNLNPKCF : public ::System::Object
{
public:
	::IFBGJJPIDLA* KMOHKCADPNA; // 0x10
	::MGBNGCJNBKL* KLHPEBKNIFB; // 0x18
	::System::UInt32 AKNGEGPIHOF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_FPHBNLNPKCF__CTOR_OFFSET))(this);
	}

	::System::Void MPLAEDCFLIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_FPHBNLNPKCF_MPLAEDCFLIG_OFFSET))(this);
	}

	::System::Void IIMCACBNDNG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_FPHBNLNPKCF_IIMCACBNDNG_OFFSET))(this);
	}
};
