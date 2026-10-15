#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class EnterMapByCondition; }
namespace RPG::GameCore { class TaskContext; }

#define IDEOIBLIKBP_CTOR_OFFSET UNITYSDK_OFFSET(0x15EC6F10)
#define IDEOIBLIKBP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EC6F20)
#define IDEOIBLIKBP_LEFPGHOAMGP_OFFSET UNITYSDK_OFFSET(0x15EC71B0)
#define IDEOIBLIKBP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15EC6F60)
#define IDEOIBLIKBP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15EC73F0)
#define IDEOIBLIKBP_TICK_OFFSET UNITYSDK_OFFSET(0x15EC7440)

inline static constexpr unsigned int IDEOIBLIKBP_TypeDefinitionIndex = 52753;

	class IDEOIBLIKBP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::EnterMapByCondition* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnterMapByCondition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnterMapByCondition*))((::PBYTE)hIl2Cpp + IDEOIBLIKBP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEOIBLIKBP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEOIBLIKBP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEOIBLIKBP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IDEOIBLIKBP_TICK_OFFSET))(this, a1);
		}

		::System::Void LEFPGHOAMGP(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IDEOIBLIKBP_LEFPGHOAMGP_OFFSET))(this, a1, a2, a3, a4);
		}

	};
