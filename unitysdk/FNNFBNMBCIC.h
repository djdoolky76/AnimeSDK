#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetProbePuzzleResetNumber; }
namespace RPG::GameCore { class TaskContext; }

#define FNNFBNMBCIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1587A170)
#define FNNFBNMBCIC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1587A390)
#define FNNFBNMBCIC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1587A180)
#define FNNFBNMBCIC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1587A340)
#define FNNFBNMBCIC_TICK_OFFSET UNITYSDK_OFFSET(0x1587A3D0)

inline static constexpr unsigned int FNNFBNMBCIC_TypeDefinitionIndex = 58567;

	class FNNFBNMBCIC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetProbePuzzleResetNumber* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetProbePuzzleResetNumber* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetProbePuzzleResetNumber*))((::PBYTE)hIl2Cpp + FNNFBNMBCIC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNFBNMBCIC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNFBNMBCIC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNFBNMBCIC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FNNFBNMBCIC_TICK_OFFSET))(this, a1);
		}

	};
