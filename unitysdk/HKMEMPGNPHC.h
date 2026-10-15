#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetIndex; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HKMEMPGNPHC_CTOR_OFFSET UNITYSDK_OFFSET(0x15D4E930)
#define HKMEMPGNPHC_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x15D4E950)

inline static constexpr unsigned int HKMEMPGNPHC_TypeDefinitionIndex = 59204;

	class HKMEMPGNPHC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetIndex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetIndex*))((::PBYTE)hIl2Cpp + HKMEMPGNPHC_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + HKMEMPGNPHC_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
