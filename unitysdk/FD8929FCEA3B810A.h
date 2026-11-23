#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B916BB7AD5B79707.h"

namespace System { class Action; }

#define FD8929FCEA3B810A_B85B83917730CFB4_OFFSET UNITYSDK_OFFSET(0x1F97F40)
#define FD8929FCEA3B810A__CTOR_OFFSET UNITYSDK_OFFSET(0x16572C0)

inline static constexpr unsigned int FD8929FCEA3B810A_TypeDefinitionIndex = 7976;

class FD8929FCEA3B810A : public ::B916BB7AD5B79707
{
public:
	::System::UInt32 F616C868CC636AEB; // 0x1B8

	::System::Void B85B83917730CFB4(::System::UInt32 B77EE6A8B1434703, ::System::Action* BB2BDE172CA6C68F)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + FD8929FCEA3B810A_B85B83917730CFB4_OFFSET))(this, B77EE6A8B1434703, BB2BDE172CA6C68F);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FD8929FCEA3B810A__CTOR_OFFSET))(this);
	}
};
