#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define B3E97D5C54B6972F__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B3E97D5C54B6972F_TypeDefinitionIndex = 1389;

class B3E97D5C54B6972F : public ::E379DE61A548837D
{
public:
	::System::Int32 FBAFA13454D09FDC; // 0x38
	::UnityEngine::Vector3 EE8B505B9D2B1840; // 0x3C
	::System::Single EE72D2594FF0B04E; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B3E97D5C54B6972F__CTOR_OFFSET))(this);
	}
};
