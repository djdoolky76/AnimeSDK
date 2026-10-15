#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class SetHudTemplate; }
namespace RPG::GameCore { class TaskContext; }

#define IIMGCMOIDDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1644DEB0)
#define IIMGCMOIDDF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1644DEC0)
#define IIMGCMOIDDF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1644DF00)
#define IIMGCMOIDDF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1644E060)
#define IIMGCMOIDDF_TICK_OFFSET UNITYSDK_OFFSET(0x1644E0B0)

	class IIMGCMOIDDF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetHudTemplate* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetHudTemplate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetHudTemplate*))((::PBYTE)hIl2Cpp + IIMGCMOIDDF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMGCMOIDDF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMGCMOIDDF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMGCMOIDDF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMGCMOIDDF_TICK_OFFSET))(this, a1);
		}

	};
