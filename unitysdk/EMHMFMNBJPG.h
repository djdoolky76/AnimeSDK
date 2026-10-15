#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RedDotType.h"
#include "unitysdk/System/Object.h"
class ELENICENJKP;
class EMHMFMNBJPG;
class GMGOEKLIILL;

#define EMHMFMNBJPG_CLONE_OFFSET UNITYSDK_OFFSET(0x1552D0B0)
#define EMHMFMNBJPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1552D120)
#define EMHMFMNBJPG_FLUSH_OFFSET UNITYSDK_OFFSET(0x1552D130)
#define EMHMFMNBJPG_OKINNGPHENJ_OFFSET UNITYSDK_OFFSET(0x1552D1B0)

inline static constexpr unsigned int EMHMFMNBJPG_TypeDefinitionIndex = 79166;

	class EMHMFMNBJPG : public ::System::Object
	{
	public:
		::RPG::GameCore::RedDotType MOOODBAJBJG; // 0x10
		::System::Boolean IJCDEINGADN; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHMFMNBJPG_CTOR_OFFSET))(this);
		}

		::EMHMFMNBJPG* Clone()
		{
			return ((::EMHMFMNBJPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHMFMNBJPG_CLONE_OFFSET))(this);
		}

		::System::Void Flush(::GMGOEKLIILL* a1, ::ELENICENJKP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GMGOEKLIILL*, ::ELENICENJKP*))((::PBYTE)hIl2Cpp + EMHMFMNBJPG_FLUSH_OFFSET))(this, a1, a2);
		}

		static ::RPG::GameCore::RedDotType OKINNGPHENJ(::GMGOEKLIILL* a1, ::ELENICENJKP* a2)
		{
			return ((::RPG::GameCore::RedDotType(*)(::GMGOEKLIILL*, ::ELENICENJKP*))((::PBYTE)hIl2Cpp + EMHMFMNBJPG_OKINNGPHENJ_OFFSET))(a1, a2);
		}

	};
