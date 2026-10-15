#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RogueMagicFinish; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define JPEHDDNLAMI_CDFEGIGHJPO_OFFSET UNITYSDK_OFFSET(0xB2BBE30)
#define JPEHDDNLAMI_CTOR_OFFSET UNITYSDK_OFFSET(0xB2BBAE0)
#define JPEHDDNLAMI_DAAHFEAMMKK_OFFSET UNITYSDK_OFFSET(0xB2BBCD0)
#define JPEHDDNLAMI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2BBDE0)
#define JPEHDDNLAMI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2BBB50)
#define JPEHDDNLAMI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB2BBD90)
#define JPEHDDNLAMI_TICK_OFFSET UNITYSDK_OFFSET(0xB2BBAF0)

inline static constexpr unsigned int JPEHDDNLAMI_TypeDefinitionIndex = 58468;

	class JPEHDDNLAMI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueMagicFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueMagicFinish*))((::PBYTE)hIl2Cpp + JPEHDDNLAMI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JPEHDDNLAMI_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEHDDNLAMI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEHDDNLAMI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEHDDNLAMI_DISPOSE_OFFSET))(this);
		}

		::System::Void CDFEGIGHJPO(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + JPEHDDNLAMI_CDFEGIGHJPO_OFFSET))(this, a1, a2);
		}

		::System::Void DAAHFEAMMKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEHDDNLAMI_DAAHFEAMMKK_OFFSET))(this);
		}

	};
