#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SetEntityAvailable; }
namespace RPG::GameCore { class TaskContext; }

#define DMPGOLGFAOG_AFMGGCOKCOD_OFFSET UNITYSDK_OFFSET(0xCA9ED50)
#define DMPGOLGFAOG_CTOR_OFFSET UNITYSDK_OFFSET(0xCA9EA10)
#define DMPGOLGFAOG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA9EA40)
#define DMPGOLGFAOG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCA9EA80)

inline static constexpr unsigned int DMPGOLGFAOG_TypeDefinitionIndex = 57622;

	class DMPGOLGFAOG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEntityAvailable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEntityAvailable*))((::PBYTE)hIl2Cpp + DMPGOLGFAOG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPGOLGFAOG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPGOLGFAOG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void AFMGGCOKCOD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DMPGOLGFAOG_AFMGGCOKCOD_OFFSET))(this, a1);
		}

	};
