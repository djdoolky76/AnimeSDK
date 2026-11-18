#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FHGHJDPHHEL;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_SURFSUBSYSTEM___C__DISPLAYCLASS54_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15AD74D0)
#define MOLEMOLE_SURFSUBSYSTEM___C__DISPLAYCLASS54_0__SETENTITYASAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0x15AD74E0)

namespace MoleMole
{
	inline static constexpr unsigned int SurfSubsystem___c__DisplayClass54_0_TypeDefinitionIndex = 82092;

	class SurfSubsystem___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::MoleMole::Battle::Entity* entity; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM___C__DISPLAYCLASS54_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetEntityAsAvatar_b__0(::FHGHJDPHHEL* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHGHJDPHHEL*))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM___C__DISPLAYCLASS54_0__SETENTITYASAVATAR_B__0_OFFSET))(this, c);
		}
	};
}
