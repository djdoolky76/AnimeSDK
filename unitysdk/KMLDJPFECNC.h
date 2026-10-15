#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PropResetPuzzle; }
namespace RPG::GameCore { class TaskContext; }

#define KMLDJPFECNC_CTOR_OFFSET UNITYSDK_OFFSET(0xB5660C0)
#define KMLDJPFECNC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5662A0)
#define KMLDJPFECNC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5660D0)
#define KMLDJPFECNC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB566250)
#define KMLDJPFECNC_TICK_OFFSET UNITYSDK_OFFSET(0xB5662E0)

inline static constexpr unsigned int KMLDJPFECNC_TypeDefinitionIndex = 58343;

	class KMLDJPFECNC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PropResetPuzzle* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropResetPuzzle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropResetPuzzle*))((::PBYTE)hIl2Cpp + KMLDJPFECNC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLDJPFECNC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLDJPFECNC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLDJPFECNC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KMLDJPFECNC_TICK_OFFSET))(this, a1);
		}

	};
