#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DAIOBJLBIKG_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x15A28930)
#define DAIOBJLBIKG__CTOR_OFFSET UNITYSDK_OFFSET(0x15A28980)

inline static constexpr unsigned int DAIOBJLBIKG_TypeDefinitionIndex = 87130;

class DAIOBJLBIKG : public ::System::Object
{
public:
	::System::UInt32 NJNCGJLHLKC; // 0x10
	::System::Single PEOCFLPFDLE; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIOBJLBIKG__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIOBJLBIKG_FCMNHLDLJCI_OFFSET))(this);
	}
};
