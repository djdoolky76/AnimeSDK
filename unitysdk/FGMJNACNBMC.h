#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EIFCMMGNGNK;
namespace RPG::Client::Prop { class V470CurveMovePuzzle; }
namespace RPG::GameCore { class TaskContext; }

#define FGMJNACNBMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1668BC60)
#define FGMJNACNBMC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1668BD60)
#define FGMJNACNBMC_JBABKCIMGLP_OFFSET UNITYSDK_OFFSET(0x1668BEC0)
#define FGMJNACNBMC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1668BC70)
#define FGMJNACNBMC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1668BD10)
#define FGMJNACNBMC_TICK_OFFSET UNITYSDK_OFFSET(0x1668BDB0)

inline static constexpr unsigned int FGMJNACNBMC_TypeDefinitionIndex = 60117;

	class FGMJNACNBMC : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::Prop::V470CurveMovePuzzle* CCAHGFIABKE; // 0x18
		::EIFCMMGNGNK* IGHAHBNLIJA; // 0x20
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
		::System::Single KDGNDNJBIOE; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EIFCMMGNGNK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EIFCMMGNGNK*))((::PBYTE)hIl2Cpp + FGMJNACNBMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMJNACNBMC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMJNACNBMC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMJNACNBMC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGMJNACNBMC_TICK_OFFSET))(this, a1);
		}

		::System::Boolean JBABKCIMGLP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMJNACNBMC_JBABKCIMGLP_OFFSET))(this);
		}

	};
