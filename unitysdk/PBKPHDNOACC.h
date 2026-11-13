#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class BFJNCOLIEMM;
namespace RPG::Client::Prop { class V470CurveMovePuzzle; }
namespace RPG::GameCore { class TaskContext; }

#define PBKPHDNOACC_CTOR_OFFSET UNITYSDK_OFFSET(0x1AAC1A10)
#define PBKPHDNOACC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AAC1AC0)
#define PBKPHDNOACC_JBABKCIMGLP_OFFSET UNITYSDK_OFFSET(0x1AAC1BC0)
#define PBKPHDNOACC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AAC1A20)
#define PBKPHDNOACC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1AAC1A70)
#define PBKPHDNOACC_TICK_OFFSET UNITYSDK_OFFSET(0x1AAC1B10)

inline static constexpr unsigned int PBKPHDNOACC_TypeDefinitionIndex = 60115;

	class PBKPHDNOACC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::Client::Prop::V470CurveMovePuzzle* CCAHGFIABKE; // 0x20
		::BFJNCOLIEMM* IGHAHBNLIJA; // 0x28
		::System::Boolean OAMIIFMFEIE; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BFJNCOLIEMM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BFJNCOLIEMM*))((::PBYTE)hIl2Cpp + PBKPHDNOACC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBKPHDNOACC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBKPHDNOACC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBKPHDNOACC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PBKPHDNOACC_TICK_OFFSET))(this, a1);
		}

		::System::Boolean JBABKCIMGLP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBKPHDNOACC_JBABKCIMGLP_OFFSET))(this);
		}

	};
