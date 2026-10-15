#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Main_LittleGame_DoNothing; }
namespace RPG::GameCore { class TaskContext; }

#define DLGFCCHFFGF_CTOR_OFFSET UNITYSDK_OFFSET(0xF899A70)
#define DLGFCCHFFGF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF899A90)
#define DLGFCCHFFGF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF899B10)
#define DLGFCCHFFGF_TICK_OFFSET UNITYSDK_OFFSET(0xF899B60)

inline static constexpr unsigned int DLGFCCHFFGF_TypeDefinitionIndex = 52144;

	class DLGFCCHFFGF
	{
	public:
		::System::Single HIIGOGNOKGD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_LittleGame_DoNothing* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_LittleGame_DoNothing*))((::PBYTE)hIl2Cpp + DLGFCCHFFGF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLGFCCHFFGF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLGFCCHFFGF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLGFCCHFFGF_TICK_OFFSET))(this, a1);
		}

	};
