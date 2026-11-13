#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RedDotType.h"
#include "unitysdk/System/Object.h"
class ELENICENJKP;
class EMHMFMNBJPG;
class GMGOEKLIILL;

#define EMHMFMNBJPG_CLONE_OFFSET UNITYSDK_OFFSET(0x187D3FC0)
#define EMHMFMNBJPG_CTOR_OFFSET UNITYSDK_OFFSET(0x187D4030)
#define EMHMFMNBJPG_FLUSH_OFFSET UNITYSDK_OFFSET(0x187D4040)
#define EMHMFMNBJPG_OKINNGPHENJ_OFFSET UNITYSDK_OFFSET(0x187D40C0)

inline static constexpr unsigned int EMHMFMNBJPG_TypeDefinitionIndex = 81942;

	class EMHMFMNBJPG : public ::System::Object
	{
	public:
		::System::Boolean IJCDEINGADN; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::RedDotType MOOODBAJBJG; // 0x14
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
