#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIBNPCGEPAC;

#define DIBNPCGEPAC_BOOAELGLGML_CTOR_OFFSET UNITYSDK_OFFSET(0x2032AF10)
#define DIBNPCGEPAC_BOOAELGLGML_ENTER_OFFSET UNITYSDK_OFFSET(0x20330650)
#define DIBNPCGEPAC_BOOAELGLGML_EXIT_OFFSET UNITYSDK_OFFSET(0x20330710)
#define DIBNPCGEPAC_BOOAELGLGML_TICK_OFFSET UNITYSDK_OFFSET(0x20330700)

inline static constexpr unsigned int DIBNPCGEPAC_BOOAELGLGML_TypeDefinitionIndex = 45016;

	class DIBNPCGEPAC_BOOAELGLGML : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_BOOAELGLGML_CTOR_OFFSET))(this);
		}

		::System::Void Enter(::DIBNPCGEPAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIBNPCGEPAC*))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_BOOAELGLGML_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::DIBNPCGEPAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIBNPCGEPAC*))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_BOOAELGLGML_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_BOOAELGLGML_EXIT_OFFSET))(this);
		}

	};
