#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class IJHOJLILAOK;
namespace RPG::GameCore { class TaskContext; }

#define LBHMGNIODKO_CTOR_OFFSET UNITYSDK_OFFSET(0xB5FB060)
#define LBHMGNIODKO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5FB170)
#define LBHMGNIODKO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5FB070)
#define LBHMGNIODKO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB5FB120)
#define LBHMGNIODKO_TICK_OFFSET UNITYSDK_OFFSET(0xB5FB1B0)

	class LBHMGNIODKO : public ::GELIALJDFBL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IJHOJLILAOK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IJHOJLILAOK*))((::PBYTE)hIl2Cpp + LBHMGNIODKO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBHMGNIODKO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBHMGNIODKO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBHMGNIODKO_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LBHMGNIODKO_TICK_OFFSET))(this, a1);
		}

	};
