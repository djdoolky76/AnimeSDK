#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByPropertyRatio; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLGAHLAIOGH_COMPARE_OFFSET UNITYSDK_OFFSET(0x15830190)
#define FLGAHLAIOGH_CTOR_OFFSET UNITYSDK_OFFSET(0x15830170)
#define FLGAHLAIOGH_JADDDEEOOAE_OFFSET UNITYSDK_OFFSET(0x15830370)
#define FLGAHLAIOGH_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x15830530)

inline static constexpr unsigned int FLGAHLAIOGH_TypeDefinitionIndex = 59166;

	class FLGAHLAIOGH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetSortByPropertyRatio* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByPropertyRatio*))((::PBYTE)hIl2Cpp + FLGAHLAIOGH_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FLGAHLAIOGH_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Void JADDDEEOOAE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLGAHLAIOGH_JADDDEEOOAE_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + FLGAHLAIOGH_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
