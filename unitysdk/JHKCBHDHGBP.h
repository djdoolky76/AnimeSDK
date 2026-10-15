#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKJMAOMDCAE_ELIIEJCNHLN;

#define JHKCBHDHGBP_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB1B3B20)
#define JHKCBHDHGBP_CTOR_OFFSET UNITYSDK_OFFSET(0xB1B3B10)
#define JHKCBHDHGBP_KADJIDHNIEM_OFFSET UNITYSDK_OFFSET(0xB1B3420)
#define JHKCBHDHGBP_LMKOKEIGEMK_OFFSET UNITYSDK_OFFSET(0xB1B33C0)

inline static constexpr unsigned int JHKCBHDHGBP_TypeDefinitionIndex = 64796;

	class JHKCBHDHGBP : public ::System::Object
	{
	public:
		::KKJMAOMDCAE_ELIIEJCNHLN* ADBANCAAHHH; // 0x10
		::System::Int32 DMKBJAJEFOC; // 0x18
		::System::Int32 FFNBLDFFMCN; // 0x1C
		::System::Int32 EPNBAAFAKEE; // 0x20
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JHKCBHDHGBP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JHKCBHDHGBP_CTOR_1_OFFSET))(this, a1);
		}

		::KKJMAOMDCAE_ELIIEJCNHLN* LMKOKEIGEMK()
		{
			return ((::KKJMAOMDCAE_ELIIEJCNHLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKCBHDHGBP_LMKOKEIGEMK_OFFSET))(this);
		}

		::KKJMAOMDCAE_ELIIEJCNHLN* KADJIDHNIEM()
		{
			return ((::KKJMAOMDCAE_ELIIEJCNHLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKCBHDHGBP_KADJIDHNIEM_OFFSET))(this);
		}

	};
