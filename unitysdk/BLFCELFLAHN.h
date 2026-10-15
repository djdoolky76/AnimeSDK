#pragma once
#include "unitysdk/unitysdk.h"
class BLFCELFLAHN_JFFJHPDECHA;
class GJDPEGIFLGB;
namespace RPG::GameCore { class ST_Side_Hipplen_Set_Neck_IK; }
namespace RPG::GameCore { class TaskContext; }

#define BLFCELFLAHN_CTOR_OFFSET UNITYSDK_OFFSET(0xBA6BB20)
#define BLFCELFLAHN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA6C120)
#define BLFCELFLAHN_LHANNPMCFLO_OFFSET UNITYSDK_OFFSET(0xBA6C0C0)
#define BLFCELFLAHN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA6BC70)
#define BLFCELFLAHN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA6C040)
#define BLFCELFLAHN_TICK_OFFSET UNITYSDK_OFFSET(0xBA6BED0)

inline static constexpr unsigned int BLFCELFLAHN_TypeDefinitionIndex = 52290;

	class BLFCELFLAHN
	{
	public:
		::GJDPEGIFLGB* JPMDHLLOGBD; // 0x28
		::BLFCELFLAHN_JFFJHPDECHA* CBECKJGOCPH; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_Hipplen_Set_Neck_IK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_Hipplen_Set_Neck_IK*))((::PBYTE)hIl2Cpp + BLFCELFLAHN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFCELFLAHN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLFCELFLAHN_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFCELFLAHN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFCELFLAHN_DISPOSE_OFFSET))(this);
		}

		::System::Void LHANNPMCFLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFCELFLAHN_LHANNPMCFLO_OFFSET))(this);
		}

	};
