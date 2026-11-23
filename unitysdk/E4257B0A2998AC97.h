#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BD9249719E654D5A;
class E8FAEA1C3232BFCF;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }

#define E4257B0A2998AC97_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x1B1F0D0)
#define E4257B0A2998AC97_B5C3388DF3DCDD9F_OFFSET UNITYSDK_OFFSET(0x1B1EF50)
#define E4257B0A2998AC97_BFAA07FEB1847C8F_OFFSET UNITYSDK_OFFSET(0x1B1F180)
#define E4257B0A2998AC97_E0E9D99F63FE5994_OFFSET UNITYSDK_OFFSET(0x1B1EDE0)
#define E4257B0A2998AC97_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1B1F020)
#define E4257B0A2998AC97__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E4257B0A2998AC97_TypeDefinitionIndex = 2087;

class E4257B0A2998AC97 : public ::System::Object
{
public:
	::ABC::Collections::Pooled::PooledList_1<::E8FAEA1C3232BFCF*>* E923D695D01550A6; // 0x10
	::BD9249719E654D5A* EE4838215037A945; // 0x18

	::System::Void A1E97155B145443C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4257B0A2998AC97_A1E97155B145443C_OFFSET))(this);
	}

	::ABC::Collections::Pooled::PooledList_1<::E8FAEA1C3232BFCF*>* E0E9D99F63FE5994()
	{
		return ((::ABC::Collections::Pooled::PooledList_1<::E8FAEA1C3232BFCF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E4257B0A2998AC97_E0E9D99F63FE5994_OFFSET))(this);
	}

	::System::Void B5C3388DF3DCDD9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4257B0A2998AC97_B5C3388DF3DCDD9F_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4257B0A2998AC97__CTOR_OFFSET))(this);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4257B0A2998AC97_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Boolean BFAA07FEB1847C8F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E4257B0A2998AC97_BFAA07FEB1847C8F_OFFSET))(this);
	}
};
