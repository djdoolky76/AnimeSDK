#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KMBKAAEPPHO;

#define BMNHMGFJIPO_NCNOMFOCLBH_OFFSET UNITYSDK_OFFSET(0x18DA9910)
#define BMNHMGFJIPO__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DA98D0)

inline static constexpr unsigned int BMNHMGFJIPO_TypeDefinitionIndex = 93252;

class BMNHMGFJIPO : public ::System::Object
{
public:
	static ::KMBKAAEPPHO** StaticGet_ECPONKOKFIO()
	{
		return (::KMBKAAEPPHO**)Il2CppClass::FromTypeDefinitionIndex(BMNHMGFJIPO_TypeDefinitionIndex)->GetStaticField(0x4B4F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMNHMGFJIPO__CCTOR_OFFSET))();
	}

	static ::KMBKAAEPPHO* NCNOMFOCLBH()
	{
		return ((::KMBKAAEPPHO*(*)())((::PBYTE)hIl2Cpp + BMNHMGFJIPO_NCNOMFOCLBH_OFFSET))();
	}
};
