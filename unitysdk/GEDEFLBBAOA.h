#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDIHJENNBEE.h"
#include "unitysdk/System/Object.h"
class BDPDNAECJII;
namespace RPG::GameCore { class TeamTowersPassiveSkillConfig; }

#define GEDEFLBBAOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C60C520)
#define GEDEFLBBAOA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C60C130)
#define GEDEFLBBAOA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C60BFE0)
#define GEDEFLBBAOA_MEFDOMKEHFD_OFFSET UNITYSDK_OFFSET(0x1C60C240)

inline static constexpr unsigned int GEDEFLBBAOA_TypeDefinitionIndex = 37121;

	class GEDEFLBBAOA : public ::System::Object
	{
	public:
		::RPG::GameCore::TeamTowersPassiveSkillConfig* GKJJANMBBHK; // 0x10
		::BDPDNAECJII* NMNILJHPGOK; // 0x18
		::LDIHJENNBEE EEFMDEHLLFI; // 0x20
		::System::UInt32 BOHKGIMLCNH; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDEFLBBAOA_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::BDPDNAECJII* a1, ::System::UInt32 a2, ::RPG::GameCore::TeamTowersPassiveSkillConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BDPDNAECJII*, ::System::UInt32, ::RPG::GameCore::TeamTowersPassiveSkillConfig*))((::PBYTE)hIl2Cpp + GEDEFLBBAOA_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDEFLBBAOA_DISPOSE_OFFSET))(this);
		}

		::System::Void MEFDOMKEHFD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GEDEFLBBAOA_MEFDOMKEHFD_OFFSET))(this, a1);
		}

	};
