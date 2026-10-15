#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ArchiveWolfBroPuzzle; }
namespace RPG::GameCore { class TaskContext; }

#define COIBMCBLKNJ_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB7AE0)
#define COIBMCBLKNJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCB7DB0)
#define COIBMCBLKNJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCB7AF0)
#define COIBMCBLKNJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDCB7D60)
#define COIBMCBLKNJ_TICK_OFFSET UNITYSDK_OFFSET(0xDCB7DF0)

inline static constexpr unsigned int COIBMCBLKNJ_TypeDefinitionIndex = 57935;

	class COIBMCBLKNJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::ArchiveWolfBroPuzzle* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ArchiveWolfBroPuzzle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ArchiveWolfBroPuzzle*))((::PBYTE)hIl2Cpp + COIBMCBLKNJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COIBMCBLKNJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COIBMCBLKNJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COIBMCBLKNJ_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COIBMCBLKNJ_TICK_OFFSET))(this, a1);
		}

	};
