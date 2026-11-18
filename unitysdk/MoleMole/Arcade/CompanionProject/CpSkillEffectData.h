#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DHLCPINOFBO.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CPSKILLEFFECTDATA_EMEPDMJDHEM_OFFSET UNITYSDK_OFFSET(0x1ED750D0)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CPSKILLEFFECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED750C0)

namespace MoleMole::Arcade::CompanionProject
{
	inline static constexpr unsigned int CpSkillEffectData_TypeDefinitionIndex = 94834;

	class CpSkillEffectData : public ::System::Object
	{
	public:
		::System::Int32 idx; // 0x10
		::DHLCPINOFBO effectType; // 0x14
		::System::Int32 startFrame; // 0x18
		::System::Int32 endFrame; // 0x1C
		::System::Int32 trackOrder; // 0x20
		::System::Boolean autoDestroy; // 0x24
		::System::Boolean brakeDestroy; // 0x25

		::System::Void _ctor(::DHLCPINOFBO BBMDGPCOFOF)
		{
			return ((::System::Void(*)(::PVOID, ::DHLCPINOFBO))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CPSKILLEFFECTDATA__CTOR_OFFSET))(this, BBMDGPCOFOF);
		}

		::System::Int32 EMEPDMJDHEM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CPSKILLEFFECTDATA_EMEPDMJDHEM_OFFSET))(this);
		}
	};
}
