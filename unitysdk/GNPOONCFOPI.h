#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class PerceiveValueTriggerConfig; }
namespace RPG::GameCore { class TaskContext; }

#define GNPOONCFOPI_CTOR_OFFSET UNITYSDK_OFFSET(0x15B1FD10)
#define GNPOONCFOPI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B1FD20)
#define GNPOONCFOPI_HEHOEOFNGPG_OFFSET UNITYSDK_OFFSET(0x15B1FD70)
#define GNPOONCFOPI_KINLCNAJDMC_OFFSET UNITYSDK_OFFSET(0x15B1FE10)

	class GNPOONCFOPI : public ::System::Object
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x10
		::RPG::GameCore::PerceiveValueTriggerConfig* IGHAHBNLIJA; // 0x18
		::System::Single OKDDBCHCNGO; // 0x20
		::System::Void _ctor(::RPG::GameCore::PerceiveValueTriggerConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerceiveValueTriggerConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + GNPOONCFOPI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPOONCFOPI_DISPOSE_OFFSET))(this);
		}

		::System::Void HEHOEOFNGPG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNPOONCFOPI_HEHOEOFNGPG_OFFSET))(this, a1);
		}

		::System::Void KINLCNAJDMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPOONCFOPI_KINLCNAJDMC_OFFSET))(this);
		}

	};
