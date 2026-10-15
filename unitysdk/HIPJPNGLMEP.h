#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UseSkillErrorCode.h"
#include "unitysdk/System/Object.h"
class GELIALJDFBL;
namespace RPG::GameCore { class DynamicToastConfig; }

#define HIPJPNGLMEP_CPHHGKLIAKM_OFFSET UNITYSDK_OFFSET(0x15D01250)
#define HIPJPNGLMEP_CTOR_OFFSET UNITYSDK_OFFSET(0x15D012D0)

inline static constexpr unsigned int HIPJPNGLMEP_TypeDefinitionIndex = 57686;

	class HIPJPNGLMEP : public ::System::Object
	{
	public:
		::RPG::GameCore::DynamicToastConfig* KKPDPAFFLBA; // 0x10
		::GELIALJDFBL* PGDOEKBEAJM; // 0x18
		::RPG::GameCore::UseSkillErrorCode LDNBNFEAGMK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPJPNGLMEP_CTOR_OFFSET))(this);
		}

		::System::Boolean CPHHGKLIAKM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPJPNGLMEP_CPHHGKLIAKM_OFFSET))(this);
		}

	};
