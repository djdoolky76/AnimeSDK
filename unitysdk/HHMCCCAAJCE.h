#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class BlockUntilUIPageOpen; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define HHMCCCAAJCE_CTOR_OFFSET UNITYSDK_OFFSET(0x15CC6370)
#define HHMCCCAAJCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CC63E0)
#define HHMCCCAAJCE_OCEPPBHJLAC_OFFSET UNITYSDK_OFFSET(0x15CC6690)
#define HHMCCCAAJCE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CC64A0)
#define HHMCCCAAJCE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15CC6640)
#define HHMCCCAAJCE_TICK_OFFSET UNITYSDK_OFFSET(0x15CC6380)

inline static constexpr unsigned int HHMCCCAAJCE_TypeDefinitionIndex = 57961;

	class HHMCCCAAJCE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::BlockUntilUIPageOpen* OFKGLJOAMLD; // 0x20
		::System::UInt32 MGLEPKGFODH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BlockUntilUIPageOpen* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BlockUntilUIPageOpen*))((::PBYTE)hIl2Cpp + HHMCCCAAJCE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HHMCCCAAJCE_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMCCCAAJCE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMCCCAAJCE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMCCCAAJCE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OCEPPBHJLAC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHMCCCAAJCE_OCEPPBHJLAC_OFFSET))(this, a1);
		}

	};
