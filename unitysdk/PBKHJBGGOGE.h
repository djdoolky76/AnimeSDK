#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class ResetAllPuzzleStatesClientOnly; }
namespace RPG::GameCore { class TaskContext; }

#define PBKHJBGGOGE_CMMJFAELBKE_OFFSET UNITYSDK_OFFSET(0xBFF2530)
#define PBKHJBGGOGE_CTOR_OFFSET UNITYSDK_OFFSET(0xBFF1F10)
#define PBKHJBGGOGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFF1F40)
#define PBKHJBGGOGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFF1F90)

inline static constexpr unsigned int PBKHJBGGOGE_TypeDefinitionIndex = 58391;

	class PBKHJBGGOGE
	{
	public:
		::RPG::Client::RuntimeGroupManager* KDCJFIMPKLP; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetAllPuzzleStatesClientOnly* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetAllPuzzleStatesClientOnly*))((::PBYTE)hIl2Cpp + PBKHJBGGOGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBKHJBGGOGE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBKHJBGGOGE_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::PropComponent* CMMJFAELBKE(::RPG::GameCore::DynamicString* a1, ::RPG::GameCore::DynamicFloat* a2, ::RPG::GameCore::DynamicFloat* a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::RPG::GameCore::PropComponent*(*)(::PVOID, ::RPG::GameCore::DynamicString*, ::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::DynamicFloat*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PBKHJBGGOGE_CMMJFAELBKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
