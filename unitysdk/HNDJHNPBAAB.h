#pragma once
#include "unitysdk/unitysdk.h"
class JHLOIKCAIFI;
namespace RPG::GameCore { class TaskContext; }

#define HNDJHNPBAAB_CTOR_OFFSET UNITYSDK_OFFSET(0x15D81810)
#define HNDJHNPBAAB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D81840)
#define HNDJHNPBAAB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D81880)
#define HNDJHNPBAAB_TICK_OFFSET UNITYSDK_OFFSET(0x15D81980)

inline static constexpr unsigned int HNDJHNPBAAB_TypeDefinitionIndex = 53333;

	class HNDJHNPBAAB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JHLOIKCAIFI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JHLOIKCAIFI*))((::PBYTE)hIl2Cpp + HNDJHNPBAAB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDJHNPBAAB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDJHNPBAAB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HNDJHNPBAAB_TICK_OFFSET))(this, a1);
		}

	};
