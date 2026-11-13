#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UseSkillErrorCode.h"
#include "unitysdk/System/Object.h"
class GELIALJDFBL;
namespace RPG::GameCore { class DynamicToastConfig; }

#define HIPJPNGLMEP_CPHHGKLIAKM_OFFSET UNITYSDK_OFFSET(0x181F1330)
#define HIPJPNGLMEP_CTOR_OFFSET UNITYSDK_OFFSET(0x181F13B0)

inline static constexpr unsigned int HIPJPNGLMEP_TypeDefinitionIndex = 58918;

	class HIPJPNGLMEP : public ::System::Object
	{
	public:
		::GELIALJDFBL* PGDOEKBEAJM; // 0x10
		::RPG::GameCore::DynamicToastConfig* KKPDPAFFLBA; // 0x18
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
