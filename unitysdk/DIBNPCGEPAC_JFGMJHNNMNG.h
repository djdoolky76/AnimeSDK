#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIBNPCGEPAC;

#define DIBNPCGEPAC_JFGMJHNNMNG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDA31E0)
#define DIBNPCGEPAC_JFGMJHNNMNG_ENTER_OFFSET UNITYSDK_OFFSET(0x1DDAA150)
#define DIBNPCGEPAC_JFGMJHNNMNG_EXIT_OFFSET UNITYSDK_OFFSET(0x1DDAA180)
#define DIBNPCGEPAC_JFGMJHNNMNG_TICK_OFFSET UNITYSDK_OFFSET(0x1DDAA170)

inline static constexpr unsigned int DIBNPCGEPAC_JFGMJHNNMNG_TypeDefinitionIndex = 43948;

	class DIBNPCGEPAC_JFGMJHNNMNG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_JFGMJHNNMNG_CTOR_OFFSET))(this);
		}

		::System::Void Enter(::DIBNPCGEPAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIBNPCGEPAC*))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_JFGMJHNNMNG_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::DIBNPCGEPAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIBNPCGEPAC*))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_JFGMJHNNMNG_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_JFGMJHNNMNG_EXIT_OFFSET))(this);
		}

	};
