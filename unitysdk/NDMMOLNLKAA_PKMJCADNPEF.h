#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NDMMOLNLKAA;
class OAEFGCLEHHO;
class OJPCGGMAMNG;
namespace System { class Action; }

#define NDMMOLNLKAA_PKMJCADNPEF_IMKNOGEFBAL_OFFSET UNITYSDK_OFFSET(0x1727E8C0)
#define NDMMOLNLKAA_PKMJCADNPEF_ONMFJCDEKIN_OFFSET UNITYSDK_OFFSET(0x1727E8D0)
#define NDMMOLNLKAA_PKMJCADNPEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1727BB80)

inline static constexpr unsigned int NDMMOLNLKAA_PKMJCADNPEF_TypeDefinitionIndex = 50308;

class NDMMOLNLKAA_PKMJCADNPEF : public ::System::Object
{
public:
	::System::Action* POCANNAFFOA; // 0x10
	::NDMMOLNLKAA* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMMOLNLKAA_PKMJCADNPEF__CTOR_OFFSET))(this);
	}

	::System::Void IMKNOGEFBAL(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NDMMOLNLKAA_PKMJCADNPEF_IMKNOGEFBAL_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void ONMFJCDEKIN(::OJPCGGMAMNG* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OJPCGGMAMNG*))((::PBYTE)hIl2Cpp + NDMMOLNLKAA_PKMJCADNPEF_ONMFJCDEKIN_OFFSET))(this, GLAOEHCGCFO);
	}
};
