#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class LockToast; }
namespace RPG::GameCore { class TaskContext; }

#define DLCLDBBIELJ_CTOR_OFFSET UNITYSDK_OFFSET(0x186641B0)
#define DLCLDBBIELJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x186641C0)
#define DLCLDBBIELJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18664200)
#define DLCLDBBIELJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18664280)
#define DLCLDBBIELJ_TICK_OFFSET UNITYSDK_OFFSET(0x186642D0)

inline static constexpr unsigned int DLCLDBBIELJ_TypeDefinitionIndex = 59463;

	class DLCLDBBIELJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::LockToast* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockToast* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockToast*))((::PBYTE)hIl2Cpp + DLCLDBBIELJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCLDBBIELJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCLDBBIELJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCLDBBIELJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLCLDBBIELJ_TICK_OFFSET))(this, a1);
		}

	};
