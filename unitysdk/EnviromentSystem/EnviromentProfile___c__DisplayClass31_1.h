#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace EnviromentSystem { class EnviroProperty; }
namespace System { class Object; }

#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE___C__DISPLAYCLASS31_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1562E760)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE___C__DISPLAYCLASS31_1__REGISTERTRANSITIONTARGETFROM_B__0_OFFSET UNITYSDK_OFFSET(0x15633420)

namespace EnviromentSystem
{
	template <typename T>
	class EnviromentProfile___c__DisplayClass31_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::EnviromentSystem::EnviroProperty* loadResource; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE___C__DISPLAYCLASS31_1_CTOR_OFFSET))(this);
		}

		::System::Void _RegisterTransitionTargetFrom_b__0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE___C__DISPLAYCLASS31_1__REGISTERTRANSITIONTARGETFROM_B__0_OFFSET))(this, a1);
		}

	};
}
