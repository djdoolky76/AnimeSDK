#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class DOFEffect; }
namespace RPG::GameCore { class TaskContext; }

#define KHBJPJBKMGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB3F7140)
#define KHBJPJBKMGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3F7150)
#define KHBJPJBKMGJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3F7190)
#define KHBJPJBKMGJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB3F7600)
#define KHBJPJBKMGJ_TICK_OFFSET UNITYSDK_OFFSET(0xB3F7650)

inline static constexpr unsigned int KHBJPJBKMGJ_TypeDefinitionIndex = 54978;

	class KHBJPJBKMGJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::DOFEffect* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DOFEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DOFEffect*))((::PBYTE)hIl2Cpp + KHBJPJBKMGJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBJPJBKMGJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBJPJBKMGJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBJPJBKMGJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KHBJPJBKMGJ_TICK_OFFSET))(this, a1);
		}

	};
