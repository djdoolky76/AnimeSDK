#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SwitchHandCatchItem; }
namespace RPG::GameCore { class TaskContext; }

#define CDJAJLNGFPC_CTOR_OFFSET UNITYSDK_OFFSET(0xD0D3CF0)
#define CDJAJLNGFPC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD0D3D00)
#define CDJAJLNGFPC_OHMNAFJEMJL_OFFSET UNITYSDK_OFFSET(0xD0D4230)
#define CDJAJLNGFPC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD0D3DA0)
#define CDJAJLNGFPC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD0D41E0)
#define CDJAJLNGFPC_TICK_OFFSET UNITYSDK_OFFSET(0xD0D3D40)

inline static constexpr unsigned int CDJAJLNGFPC_TypeDefinitionIndex = 54469;

	class CDJAJLNGFPC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::SwitchHandCatchItem* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandCatchItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandCatchItem*))((::PBYTE)hIl2Cpp + CDJAJLNGFPC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJAJLNGFPC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CDJAJLNGFPC_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJAJLNGFPC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJAJLNGFPC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OHMNAFJEMJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJAJLNGFPC_OHMNAFJEMJL_OFFSET))(this);
		}

	};
