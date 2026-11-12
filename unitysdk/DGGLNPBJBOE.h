#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetCountDownWarning; }
namespace RPG::GameCore { class TaskContext; }

#define DGGLNPBJBOE_CTOR_OFFSET UNITYSDK_OFFSET(0xF41BDB0)
#define DGGLNPBJBOE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF41BDC0)
#define DGGLNPBJBOE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF41BE00)
#define DGGLNPBJBOE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF41BF30)
#define DGGLNPBJBOE_TICK_OFFSET UNITYSDK_OFFSET(0xF41BF80)

inline static constexpr unsigned int DGGLNPBJBOE_TypeDefinitionIndex = 57618;

	class DGGLNPBJBOE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetCountDownWarning* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCountDownWarning* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCountDownWarning*))((::PBYTE)hIl2Cpp + DGGLNPBJBOE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGLNPBJBOE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGLNPBJBOE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGLNPBJBOE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DGGLNPBJBOE_TICK_OFFSET))(this, a1);
		}

	};
