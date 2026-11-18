#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define FPOOKGEOJOC_ENCKBMFOCIE_JCPOMIDFPII_OFFSET UNITYSDK_OFFSET(0x1411A800)
#define FPOOKGEOJOC_ENCKBMFOCIE_LMPDLHPONFD_OFFSET UNITYSDK_OFFSET(0x1411A850)
#define FPOOKGEOJOC_ENCKBMFOCIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1411A7F0)

inline static constexpr unsigned int FPOOKGEOJOC_ENCKBMFOCIE_TypeDefinitionIndex = 66256;

class FPOOKGEOJOC_ENCKBMFOCIE : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* EFGDHJCMKMG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOOKGEOJOC_ENCKBMFOCIE__CTOR_OFFSET))(this);
	}

	::System::Void JCPOMIDFPII(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FPOOKGEOJOC_ENCKBMFOCIE_JCPOMIDFPII_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void LMPDLHPONFD(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FPOOKGEOJOC_ENCKBMFOCIE_LMPDLHPONFD_OFFSET))(this, PIIPCLCCOIG);
	}
};
