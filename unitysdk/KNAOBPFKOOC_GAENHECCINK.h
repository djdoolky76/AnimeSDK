#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KNAOBPFKOOC;
namespace System { template <typename T> class Action_1; }

#define KNAOBPFKOOC_GAENHECCINK_DHCFLFJCLCJ_OFFSET UNITYSDK_OFFSET(0x1F3AB040)
#define KNAOBPFKOOC_GAENHECCINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3AB030)

inline static constexpr unsigned int KNAOBPFKOOC_GAENHECCINK_TypeDefinitionIndex = 8383;

class KNAOBPFKOOC_GAENHECCINK : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* PNMOJJBCPJH; // 0x10
	::KNAOBPFKOOC* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAOBPFKOOC_GAENHECCINK__CTOR_OFFSET))(this);
	}

	::System::Void DHCFLFJCLCJ(::System::Int32 BPHGCFGJHMM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNAOBPFKOOC_GAENHECCINK_DHCFLFJCLCJ_OFFSET))(this, BPHGCFGJHMM);
	}
};
