#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define POEDMEEJLEM_CGCPKDJNJBA_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x1D638AB0)
#define POEDMEEJLEM_CGCPKDJNJBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D638AA0)

inline static constexpr unsigned int POEDMEEJLEM_CGCPKDJNJBA_TypeDefinitionIndex = 58284;

class POEDMEEJLEM_CGCPKDJNJBA : public ::System::Object
{
public:
	::HOCDHMEPPEG ECLGGGCDNKC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEDMEEJLEM_CGCPKDJNJBA__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEDMEEJLEM_CGCPKDJNJBA_LIDNPLMPHAL_OFFSET))(this);
	}
};
