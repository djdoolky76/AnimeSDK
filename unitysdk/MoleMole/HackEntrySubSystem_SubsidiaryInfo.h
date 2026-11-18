#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class GEIHCPAOKKK;
namespace MoleMole { class OverlayOutlineRenderer; }

#define MOLEMOLE_HACKENTRYSUBSYSTEM_SUBSIDIARYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x14326E10)

namespace MoleMole
{
	inline static constexpr unsigned int HackEntrySubSystem_SubsidiaryInfo_TypeDefinitionIndex = 70993;

	class HackEntrySubSystem_SubsidiaryInfo : public ::System::Object
	{
	public:
		::MoleMole::EntityHandle entity; // 0x10
		::MoleMole::OverlayOutlineRenderer* effectScript; // 0x20
		::GEIHCPAOKKK* characterModel; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_SUBSIDIARYINFO__CTOR_OFFSET))(this);
		}
	};
}
