#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RequestChangeMatchThreeBirdLocation; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define MOCBHBDGKLM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA24CC0)
#define MOCBHBDGKLM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA24CD0)
#define MOCBHBDGKLM_KCOJAGFHDNM_OFFSET UNITYSDK_OFFSET(0xBA25000)
#define MOCBHBDGKLM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA24E30)
#define MOCBHBDGKLM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA24D20)
#define MOCBHBDGKLM_TICK_OFFSET UNITYSDK_OFFSET(0xBA24DD0)

	class MOCBHBDGKLM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RequestChangeMatchThreeBirdLocation* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::UInt32 NFPAFAKKALP; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RequestChangeMatchThreeBirdLocation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RequestChangeMatchThreeBirdLocation*))((::PBYTE)hIl2Cpp + MOCBHBDGKLM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCBHBDGKLM_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOCBHBDGKLM_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCBHBDGKLM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCBHBDGKLM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void KCOJAGFHDNM(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + MOCBHBDGKLM_KCOJAGFHDNM_OFFSET))(this, a1, a2);
		}

	};
