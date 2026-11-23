#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AC78E5CBCB2DB29C_AE44C1619054E05A_OFFSET UNITYSDK_OFFSET(0x414C2A0)
#define AC78E5CBCB2DB29C_B94ADE63B87EF11B_OFFSET UNITYSDK_OFFSET(0x414C300)
#define AC78E5CBCB2DB29C_ECC77FC6793867AE_OFFSET UNITYSDK_OFFSET(0x414C2D0)

inline static constexpr unsigned int AC78E5CBCB2DB29C_TypeDefinitionIndex = 17418;

class AC78E5CBCB2DB29C : public ::System::Object
{
public:
	static ::System::Boolean AE44C1619054E05A()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AC78E5CBCB2DB29C_AE44C1619054E05A_OFFSET))();
	}

	static ::System::Boolean B94ADE63B87EF11B()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AC78E5CBCB2DB29C_B94ADE63B87EF11B_OFFSET))();
	}

	static ::System::Boolean ECC77FC6793867AE()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AC78E5CBCB2DB29C_ECC77FC6793867AE_OFFSET))();
	}
};
