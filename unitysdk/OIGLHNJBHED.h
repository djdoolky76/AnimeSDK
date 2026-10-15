#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }

#define OIGLHNJBHED_CLEAR_OFFSET UNITYSDK_OFFSET(0xBE90D80)
#define OIGLHNJBHED_CTOR_OFFSET UNITYSDK_OFFSET(0xBE90DD0)
#define OIGLHNJBHED_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBE90D20)

inline static constexpr unsigned int OIGLHNJBHED_TypeDefinitionIndex = 55246;

	class OIGLHNJBHED : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
		::RPG::GameCore::SkillData* IJGAPCNDIAG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGLHNJBHED_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + OIGLHNJBHED_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGLHNJBHED_CLEAR_OFFSET))(this);
		}

	};
