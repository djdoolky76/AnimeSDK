#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PlayScreenDissolve; }
namespace RPG::GameCore { class TaskContext; }

#define DFKJEDFFDBN_CTOR_OFFSET UNITYSDK_OFFSET(0xE8310F0)
#define DFKJEDFFDBN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE831410)
#define DFKJEDFFDBN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE831100)
#define DFKJEDFFDBN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE8313C0)
#define DFKJEDFFDBN_TICK_OFFSET UNITYSDK_OFFSET(0xE831450)

	class DFKJEDFFDBN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::PlayScreenDissolve* OFKGLJOAMLD; // 0x20
		// static const ::System::String* CAGBCAELNEE; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayScreenDissolve* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayScreenDissolve*))((::PBYTE)hIl2Cpp + DFKJEDFFDBN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKJEDFFDBN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKJEDFFDBN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKJEDFFDBN_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DFKJEDFFDBN_TICK_OFFSET))(this, a1);
		}

	};
