#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define A6B362BABDBDAD88_B1BDC239F0C03307_OFFSET UNITYSDK_OFFSET(0x1CE63F0)
#define A6B362BABDBDAD88_BF9C729B98C3B815_OFFSET UNITYSDK_OFFSET(0x1CE62F0)
#define A6B362BABDBDAD88_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1CE6390)
#define A6B362BABDBDAD88__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A6B362BABDBDAD88_TypeDefinitionIndex = 9828;

class A6B362BABDBDAD88 : public ::System::Object
{
public:
	::System::Int32 F156AE81A004E4B5; // 0x10
	::System::Boolean EA39919C96B7004C; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A6B362BABDBDAD88__CTOR_OFFSET))(this);
	}

	::System::Void BF9C729B98C3B815()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A6B362BABDBDAD88_BF9C729B98C3B815_OFFSET))(this);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A6B362BABDBDAD88_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Boolean B1BDC239F0C03307()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A6B362BABDBDAD88_B1BDC239F0C03307_OFFSET))(this);
	}
};
