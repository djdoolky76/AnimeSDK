#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowFuncUnlockHintDialog; }
namespace RPG::GameCore { class TaskContext; }

#define CKPHEFPLIHD_CBPMJEONMPE_OFFSET UNITYSDK_OFFSET(0xD7691E0)
#define CKPHEFPLIHD_CTOR_OFFSET UNITYSDK_OFFSET(0xD7690F0)
#define CKPHEFPLIHD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD769100)
#define CKPHEFPLIHD_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0xD769520)
#define CKPHEFPLIHD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD769190)
#define CKPHEFPLIHD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD769470)
#define CKPHEFPLIHD_TICK_OFFSET UNITYSDK_OFFSET(0xD7694C0)

inline static constexpr unsigned int CKPHEFPLIHD_TypeDefinitionIndex = 58651;

	class CKPHEFPLIHD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowFuncUnlockHintDialog* OFKGLJOAMLD; // 0x18
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowFuncUnlockHintDialog* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowFuncUnlockHintDialog*))((::PBYTE)hIl2Cpp + CKPHEFPLIHD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPHEFPLIHD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPHEFPLIHD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPHEFPLIHD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CKPHEFPLIHD_TICK_OFFSET))(this, a1);
		}

		::System::Void CBPMJEONMPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPHEFPLIHD_CBPMJEONMPE_OFFSET))(this);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPHEFPLIHD_JNIKOAEAEHB_OFFSET))(this);
		}

	};
