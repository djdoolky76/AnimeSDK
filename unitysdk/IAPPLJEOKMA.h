#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RogueTakeInitialScore; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define IAPPLJEOKMA_CTOR_OFFSET UNITYSDK_OFFSET(0x15E27430)
#define IAPPLJEOKMA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E27440)
#define IAPPLJEOKMA_OLECHPLCOHK_OFFSET UNITYSDK_OFFSET(0x15E27600)
#define IAPPLJEOKMA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E27560)
#define IAPPLJEOKMA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E275B0)
#define IAPPLJEOKMA_TICK_OFFSET UNITYSDK_OFFSET(0x15E27500)

	class IAPPLJEOKMA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RogueTakeInitialScore* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueTakeInitialScore* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueTakeInitialScore*))((::PBYTE)hIl2Cpp + IAPPLJEOKMA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPPLJEOKMA_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IAPPLJEOKMA_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPPLJEOKMA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPPLJEOKMA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OLECHPLCOHK(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + IAPPLJEOKMA_OLECHPLCOHK_OFFSET))(this, a1, a2);
		}

	};
