#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoLayoutTween; }
namespace System { class Action; }

#define MOLEMOLE_MONOLAYOUTTWEEN_HPLGNJGIDKG_PIAGBNKMANI_OFFSET UNITYSDK_OFFSET(0x10D40F70)
#define MOLEMOLE_MONOLAYOUTTWEEN_HPLGNJGIDKG__CTOR_OFFSET UNITYSDK_OFFSET(0x10D40F60)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLayoutTween_HPLGNJGIDKG_TypeDefinitionIndex = 81373;

	class MonoLayoutTween_HPLGNJGIDKG : public ::System::Object
	{
	public:
		::System::Action* IHLBALNBGKM; // 0x10
		::MoleMole::MonoLayoutTween* KLHPEBKNIFB; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_HPLGNJGIDKG__CTOR_OFFSET))(this);
		}

		::System::Void PIAGBNKMANI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_HPLGNJGIDKG_PIAGBNKMANI_OFFSET))(this);
		}
	};
}
