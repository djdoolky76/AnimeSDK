#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMMLJJFNMCB.h"
#include "unitysdk/System/Object.h"

#define HMLPPDMAJNE__CTOR_OFFSET UNITYSDK_OFFSET(0x17A5E9D0)

inline static constexpr unsigned int HMLPPDMAJNE_TypeDefinitionIndex = 92351;

class HMLPPDMAJNE : public ::System::Object
{
public:
	::FMMLJJFNMCB FCPCLIJNDLA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLPPDMAJNE__CTOR_OFFSET))(this);
	}
};
