#pragma once
#include "unitysdk/unitysdk.h"
class COAJLAFFGEL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CGFGDBGFIBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1785C030)
#define CGFGDBGFIBI_DJFNIHIENHO_OFFSET UNITYSDK_OFFSET(0x1785C1F0)
#define CGFGDBGFIBI_NABPJJLDEJK_OFFSET UNITYSDK_OFFSET(0x1785C150)
#define CGFGDBGFIBI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1785C060)

inline static constexpr unsigned int CGFGDBGFIBI_TypeDefinitionIndex = 56521;

	class CGFGDBGFIBI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::COAJLAFFGEL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::COAJLAFFGEL*))((::PBYTE)hIl2Cpp + CGFGDBGFIBI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGFGDBGFIBI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean NABPJJLDEJK(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CGFGDBGFIBI_NABPJJLDEJK_OFFSET))(this, a1, a2);
		}

		::System::Void DJFNIHIENHO(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CGFGDBGFIBI_DJFNIHIENHO_OFFSET))(this, a1, a2, a3);
		}

	};
