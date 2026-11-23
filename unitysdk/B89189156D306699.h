#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E8FAEA1C3232BFCF;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }

#define B89189156D306699_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x19FB670)
#define B89189156D306699_E0E9D99F63FE5994_OFFSET UNITYSDK_OFFSET(0x19FB560)
#define B89189156D306699_E6465C5B0DCEFD11_OFFSET UNITYSDK_OFFSET(0x19FB3D0)
#define B89189156D306699_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x19FB5F0)
#define B89189156D306699__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B89189156D306699_TypeDefinitionIndex = 1804;

class B89189156D306699 : public ::System::Object
{
public:
	::ABC::Collections::Pooled::PooledList_1<::E8FAEA1C3232BFCF*>* E64654AE2B70E0D7; // 0x10

	::ABC::Collections::Pooled::PooledList_1<::E8FAEA1C3232BFCF*>* E0E9D99F63FE5994()
	{
		return ((::ABC::Collections::Pooled::PooledList_1<::E8FAEA1C3232BFCF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B89189156D306699_E0E9D99F63FE5994_OFFSET))(this);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B89189156D306699_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void A1E97155B145443C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B89189156D306699_A1E97155B145443C_OFFSET))(this);
	}

	::System::Void E6465C5B0DCEFD11()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B89189156D306699_E6465C5B0DCEFD11_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B89189156D306699__CTOR_OFFSET))(this);
	}
};
