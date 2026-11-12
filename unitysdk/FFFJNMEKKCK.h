#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class DOACJOJNGPE;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class TaskContext; }

#define FFFJNMEKKCK_CTOR_OFFSET UNITYSDK_OFFSET(0x16650F30)
#define FFFJNMEKKCK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x166514E0)
#define FFFJNMEKKCK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16650F40)
#define FFFJNMEKKCK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16651490)
#define FFFJNMEKKCK_TICK_OFFSET UNITYSDK_OFFSET(0x16651530)

inline static constexpr unsigned int FFFJNMEKKCK_TypeDefinitionIndex = 59461;

	class FFFJNMEKKCK : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::Stage* KJINONHOAKO; // 0x18
		::DOACJOJNGPE* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DOACJOJNGPE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DOACJOJNGPE*))((::PBYTE)hIl2Cpp + FFFJNMEKKCK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFJNMEKKCK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFJNMEKKCK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFJNMEKKCK_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FFFJNMEKKCK_TICK_OFFSET))(this, a1);
		}

	};
