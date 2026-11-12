#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AdvNpcSearchProp; }
namespace RPG::GameCore { class TaskContext; }

#define ONDGBFKKIBD_CTOR_OFFSET UNITYSDK_OFFSET(0xC84D070)
#define ONDGBFKKIBD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC84D080)
#define ONDGBFKKIBD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC84D120)
#define ONDGBFKKIBD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC84D170)
#define ONDGBFKKIBD_TICK_OFFSET UNITYSDK_OFFSET(0xC84D0C0)

inline static constexpr unsigned int ONDGBFKKIBD_TypeDefinitionIndex = 53546;

	class ONDGBFKKIBD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::AdvNpcSearchProp* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcSearchProp* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcSearchProp*))((::PBYTE)hIl2Cpp + ONDGBFKKIBD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDGBFKKIBD_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ONDGBFKKIBD_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDGBFKKIBD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDGBFKKIBD_ONTASKRESET_OFFSET))(this);
		}

	};
