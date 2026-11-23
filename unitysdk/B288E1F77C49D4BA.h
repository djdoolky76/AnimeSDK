#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define B288E1F77C49D4BA_BD9CD726F874B523_OFFSET UNITYSDK_OFFSET(0x1E88280)
#define B288E1F77C49D4BA_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1E88310)
#define B288E1F77C49D4BA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B288E1F77C49D4BA_TypeDefinitionIndex = 9572;

class B288E1F77C49D4BA : public ::System::Object
{
public:
	::System::UInt32 E43E467F516F27D3; // 0x10
	::System::Boolean FEA67D29C7F57772; // 0x14

	static ::B288E1F77C49D4BA* BD9CD726F874B523(::System::UInt32 A0C742F7C9ECD536, ::System::Boolean EEBDDBBD818112CD)
	{
		return ((::B288E1F77C49D4BA*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + B288E1F77C49D4BA_BD9CD726F874B523_OFFSET))(A0C742F7C9ECD536, EEBDDBBD818112CD);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B288E1F77C49D4BA__CTOR_OFFSET))(this);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B288E1F77C49D4BA_FCC7443573DD0222_OFFSET))(this);
	}
};
