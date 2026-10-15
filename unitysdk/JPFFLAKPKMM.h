#pragma once
#include "unitysdk/unitysdk.h"
class NBHCDAEKHGJ;
class PEMEHFIAHKI;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define JPFFLAKPKMM_CTOR_OFFSET UNITYSDK_OFFSET(0xB2B5E30)
#define JPFFLAKPKMM_GDELEEDKCPE_OFFSET UNITYSDK_OFFSET(0xB2B63F0)
#define JPFFLAKPKMM_NKIFGEOHLBM_OFFSET UNITYSDK_OFFSET(0xB2B6650)
#define JPFFLAKPKMM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2B5E60)

inline static constexpr unsigned int JPFFLAKPKMM_TypeDefinitionIndex = 55219;

	class JPFFLAKPKMM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PEMEHFIAHKI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PEMEHFIAHKI*))((::PBYTE)hIl2Cpp + JPFFLAKPKMM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPFFLAKPKMM_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* NKIFGEOHLBM()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPFFLAKPKMM_NKIFGEOHLBM_OFFSET))(this);
		}

		::System::Void GDELEEDKCPE(::NBHCDAEKHGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBHCDAEKHGJ*))((::PBYTE)hIl2Cpp + JPFFLAKPKMM_GDELEEDKCPE_OFFSET))(this, a1);
		}

	};
