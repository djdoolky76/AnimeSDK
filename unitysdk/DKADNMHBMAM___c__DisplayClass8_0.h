#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKADNMHBMAM;
class GAHPNAEGACM;

#define DKADNMHBMAM___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0xF24E310)
#define DKADNMHBMAM___C__DISPLAYCLASS8_0__ONDETAILCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0xF24ED70)

inline static constexpr unsigned int DKADNMHBMAM___c__DisplayClass8_0_TypeDefinitionIndex = 71298;

	class DKADNMHBMAM___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::GAHPNAEGACM* detail; // 0x10
		::DKADNMHBMAM* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKADNMHBMAM___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnDetailChange_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKADNMHBMAM___C__DISPLAYCLASS8_0__ONDETAILCHANGE_B__0_OFFSET))(this);
		}

	};
