#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowFuncUnlockHintDialog; }
namespace RPG::GameCore { class TaskContext; }

#define CKPHEFPLIHD_CBPMJEONMPE_OFFSET UNITYSDK_OFFSET(0x1AD51B20)
#define CKPHEFPLIHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1AD51A30)
#define CKPHEFPLIHD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AD51A40)
#define CKPHEFPLIHD_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0x1AD51E60)
#define CKPHEFPLIHD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AD51AD0)
#define CKPHEFPLIHD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1AD51DB0)
#define CKPHEFPLIHD_TICK_OFFSET UNITYSDK_OFFSET(0x1AD51E00)

inline static constexpr unsigned int CKPHEFPLIHD_TypeDefinitionIndex = 59918;

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
