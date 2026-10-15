#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByFormation; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIEBDGMBEFA_COMPARE_OFFSET UNITYSDK_OFFSET(0xB94C300)
#define MIEBDGMBEFA_CTOR_OFFSET UNITYSDK_OFFSET(0xB94C2E0)
#define MIEBDGMBEFA_JIGJDOFEJMI_OFFSET UNITYSDK_OFFSET(0xB94C4E0)
#define MIEBDGMBEFA_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xB94C530)

inline static constexpr unsigned int MIEBDGMBEFA_TypeDefinitionIndex = 59169;

	class MIEBDGMBEFA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetSortByFormation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByFormation*))((::PBYTE)hIl2Cpp + MIEBDGMBEFA_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MIEBDGMBEFA_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Void JIGJDOFEJMI(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + MIEBDGMBEFA_JIGJDOFEJMI_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + MIEBDGMBEFA_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
