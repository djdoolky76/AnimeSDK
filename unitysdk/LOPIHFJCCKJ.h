#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class NGGKPFPCOEA;
namespace RPG::Client::Prop { class V470CurveMovePuzzle; }
namespace RPG::GameCore { class TaskContext; }

#define LOPIHFJCCKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5C1100)
#define LOPIHFJCCKJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5C11B0)
#define LOPIHFJCCKJ_JBABKCIMGLP_OFFSET UNITYSDK_OFFSET(0x1A5C1280)
#define LOPIHFJCCKJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A5C1110)
#define LOPIHFJCCKJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A5C1160)
#define LOPIHFJCCKJ_TICK_OFFSET UNITYSDK_OFFSET(0x1A5C1200)

inline static constexpr unsigned int LOPIHFJCCKJ_TypeDefinitionIndex = 60114;

	class LOPIHFJCCKJ : public ::GELIALJDFBL
	{
	public:
		::NGGKPFPCOEA* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::RPG::Client::Prop::V470CurveMovePuzzle* CCAHGFIABKE; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NGGKPFPCOEA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NGGKPFPCOEA*))((::PBYTE)hIl2Cpp + LOPIHFJCCKJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOPIHFJCCKJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOPIHFJCCKJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOPIHFJCCKJ_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOPIHFJCCKJ_TICK_OFFSET))(this, a1);
		}

		::System::Boolean JBABKCIMGLP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOPIHFJCCKJ_JBABKCIMGLP_OFFSET))(this);
		}

	};
