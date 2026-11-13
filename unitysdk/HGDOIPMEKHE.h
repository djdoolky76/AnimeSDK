#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class BattlePerformInit; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }

#define HGDOIPMEKHE_ABCMNBHIAKM_OFFSET UNITYSDK_OFFSET(0x1C43B810)
#define HGDOIPMEKHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C43B4F0)
#define HGDOIPMEKHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C43B500)
#define HGDOIPMEKHE_IJMONDLGAIP_OFFSET UNITYSDK_OFFSET(0x1C43B7C0)
#define HGDOIPMEKHE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C43B550)
#define HGDOIPMEKHE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1C43B710)
#define HGDOIPMEKHE_TICK_OFFSET UNITYSDK_OFFSET(0x1C43B760)

inline static constexpr unsigned int HGDOIPMEKHE_TypeDefinitionIndex = 59189;

	class HGDOIPMEKHE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::BattlePerformInit* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* LANHALCJKIM; // 0x20
		::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattlePerformInit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattlePerformInit*))((::PBYTE)hIl2Cpp + HGDOIPMEKHE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDOIPMEKHE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDOIPMEKHE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDOIPMEKHE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HGDOIPMEKHE_TICK_OFFSET))(this, a1);
		}

		::System::Void IJMONDLGAIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDOIPMEKHE_IJMONDLGAIP_OFFSET))(this);
		}

		::System::Void ABCMNBHIAKM(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + HGDOIPMEKHE_ABCMNBHIAKM_OFFSET))(this, a1);
		}

	};
