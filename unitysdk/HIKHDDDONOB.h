#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropCurveMoveFinish; }
namespace System { class Object; }
namespace System { class String; }

#define HIKHDDDONOB_CTOR_OFFSET UNITYSDK_OFFSET(0x15CE3430)
#define HIKHDDDONOB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CE34B0)
#define HIKHDDDONOB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CE36D0)
#define HIKHDDDONOB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15CE3600)
#define HIKHDDDONOB_PMNFDCPMFHI_OFFSET UNITYSDK_OFFSET(0x15CE3950)
#define HIKHDDDONOB_TICK_OFFSET UNITYSDK_OFFSET(0x15CE3870)

inline static constexpr unsigned int HIKHDDDONOB_TypeDefinitionIndex = 58915;

	class HIKHDDDONOB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x18
		::System::String* IJMGEMMNNPI; // 0x20
		::RPG::GameCore::WaitPropCurveMoveFinish* OFKGLJOAMLD; // 0x28
		::KFELGAIGHAP* HFOFIODMFGB; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::System::UInt32 NNGMJFCCMAI; // 0x40
		::System::UInt32 MDFOOOPHGKC; // 0x44
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropCurveMoveFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropCurveMoveFinish*))((::PBYTE)hIl2Cpp + HIKHDDDONOB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKHDDDONOB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKHDDDONOB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKHDDDONOB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HIKHDDDONOB_TICK_OFFSET))(this, a1);
		}

		::System::Void PMNFDCPMFHI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIKHDDDONOB_PMNFDCPMFHI_OFFSET))(this, a1);
		}

	};
