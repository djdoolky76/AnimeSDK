#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B9D1F41C309FB336.h"

template <typename T> class FCECB52A00C1344E;

#define AC4F74BD770243F0_E15379723214FF08_OFFSET UNITYSDK_OFFSET(0x1CF7600)
#define AC4F74BD770243F0_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x1CF7690)
#define AC4F74BD770243F0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF7720)

inline static constexpr unsigned int AC4F74BD770243F0_TypeDefinitionIndex = 9876;

class AC4F74BD770243F0 : public ::B9D1F41C309FB336
{
public:
	::FCECB52A00C1344E<::System::UInt64>* FCADDB136C0E34F5; // 0x28

	::System::Void E8AF1E0387A100FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AC4F74BD770243F0_E8AF1E0387A100FA_OFFSET))(this);
	}

	::System::Void E15379723214FF08(::System::UInt64 F249A74E7BFBE1A7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + AC4F74BD770243F0_E15379723214FF08_OFFSET))(this, F249A74E7BFBE1A7);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AC4F74BD770243F0__CTOR_OFFSET))(this);
	}
};
