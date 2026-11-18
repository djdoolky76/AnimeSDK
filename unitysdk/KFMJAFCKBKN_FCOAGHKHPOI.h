#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KFMJAFCKBKN_NDOJJFPBBLL;

#define KFMJAFCKBKN_FCOAGHKHPOI_KBKFOGDKDJK_OFFSET UNITYSDK_OFFSET(0x17704A30)
#define KFMJAFCKBKN_FCOAGHKHPOI__CTOR_OFFSET UNITYSDK_OFFSET(0x17704A20)

inline static constexpr unsigned int KFMJAFCKBKN_FCOAGHKHPOI_TypeDefinitionIndex = 83618;

class KFMJAFCKBKN_FCOAGHKHPOI : public ::System::Object
{
public:
	::KFMJAFCKBKN_NDOJJFPBBLL* FGBNBFHOKAA; // 0x10
	::System::Int32 OJOEBEBNFCJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMJAFCKBKN_FCOAGHKHPOI__CTOR_OFFSET))(this);
	}

	::System::Void KBKFOGDKDJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMJAFCKBKN_FCOAGHKHPOI_KBKFOGDKDJK_OFFSET))(this);
	}
};
