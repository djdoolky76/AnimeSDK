#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PLBPBBAGGLH__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC67280)

inline static constexpr unsigned int PLBPBBAGGLH_TypeDefinitionIndex = 95229;

class PLBPBBAGGLH : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* KINEPILLABA; // 0x10
	::System::Int32 LLJMGBMFEPA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBPBBAGGLH__CTOR_OFFSET))(this);
	}
};
