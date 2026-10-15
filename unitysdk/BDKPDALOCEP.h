#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class NMALNALBEBM;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetBattleUIPauseEnvironmentInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BDKPDALOCEP_CTOR_OFFSET UNITYSDK_OFFSET(0x162FDAC0)
#define BDKPDALOCEP_LDMDENDECLA_OFFSET UNITYSDK_OFFSET(0x162FDB80)
#define BDKPDALOCEP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162FDAF0)
#define BDKPDALOCEP___COLLECTINFOS_B__2_0_OFFSET UNITYSDK_OFFSET(0x162FDE60)

inline static constexpr unsigned int BDKPDALOCEP_TypeDefinitionIndex = 55358;

	class BDKPDALOCEP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleUIPauseEnvironmentInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleUIPauseEnvironmentInfo*))((::PBYTE)hIl2Cpp + BDKPDALOCEP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKPDALOCEP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NMALNALBEBM*>* LDMDENDECLA()
		{
			return ((::System::Collections::Generic::List_1<::NMALNALBEBM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKPDALOCEP_LDMDENDECLA_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint __CollectInfos_b__2_0(::RPG::GameCore::DynamicFloat* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + BDKPDALOCEP___COLLECTINFOS_B__2_0_OFFSET))(this, a1);
		}

	};
