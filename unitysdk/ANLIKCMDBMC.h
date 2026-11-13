#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class LDGFOHKLOII;
namespace RPG::Client::Prop { class V470CurveMovePuzzle; }
namespace RPG::GameCore { class TaskContext; }

#define ANLIKCMDBMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1A833190)
#define ANLIKCMDBMC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A833240)
#define ANLIKCMDBMC_JBABKCIMGLP_OFFSET UNITYSDK_OFFSET(0x1A833320)
#define ANLIKCMDBMC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A8331A0)
#define ANLIKCMDBMC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A8331F0)
#define ANLIKCMDBMC_TICK_OFFSET UNITYSDK_OFFSET(0x1A833290)

inline static constexpr unsigned int ANLIKCMDBMC_TypeDefinitionIndex = 60116;

	class ANLIKCMDBMC : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::Prop::V470CurveMovePuzzle* CCAHGFIABKE; // 0x18
		::LDGFOHKLOII* IGHAHBNLIJA; // 0x20
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LDGFOHKLOII* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LDGFOHKLOII*))((::PBYTE)hIl2Cpp + ANLIKCMDBMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLIKCMDBMC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLIKCMDBMC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLIKCMDBMC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ANLIKCMDBMC_TICK_OFFSET))(this, a1);
		}

		::System::Boolean JBABKCIMGLP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLIKCMDBMC_JBABKCIMGLP_OFFSET))(this);
		}

	};
