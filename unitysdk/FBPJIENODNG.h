#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class HJDNCNIPOKM;

#define FBPJIENODNG_CTOR_OFFSET UNITYSDK_OFFSET(0x165C5860)
#define FBPJIENODNG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165C5770)
#define FBPJIENODNG_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x165C5720)
#define FBPJIENODNG_TICK_OFFSET UNITYSDK_OFFSET(0x165C57C0)

inline static constexpr unsigned int FBPJIENODNG_TypeDefinitionIndex = 58551;

	class FBPJIENODNG : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::HJDNCNIPOKM* JMBNGEINDAB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPJIENODNG_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::HJDNCNIPOKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJDNCNIPOKM*))((::PBYTE)hIl2Cpp + FBPJIENODNG_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPJIENODNG_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBPJIENODNG_TICK_OFFSET))(this, a1);
		}

	};
