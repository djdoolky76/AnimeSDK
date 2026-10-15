#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetDynamicValueByAddValue; }
namespace RPG::GameCore { class TaskContext; }

#define NGLAGDPJBIK_CTOR_OFFSET UNITYSDK_OFFSET(0xBBAD1C0)
#define NGLAGDPJBIK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBAD1D0)
#define NGLAGDPJBIK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBAD210)
#define NGLAGDPJBIK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBBAD660)
#define NGLAGDPJBIK_TICK_OFFSET UNITYSDK_OFFSET(0xBBAD6B0)

	class NGLAGDPJBIK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetDynamicValueByAddValue* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByAddValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByAddValue*))((::PBYTE)hIl2Cpp + NGLAGDPJBIK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLAGDPJBIK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLAGDPJBIK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLAGDPJBIK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NGLAGDPJBIK_TICK_OFFSET))(this, a1);
		}

	};
