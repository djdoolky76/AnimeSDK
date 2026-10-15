#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapBornPoint; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KIIEBAAILKM_CTOR_OFFSET UNITYSDK_OFFSET(0xB429B50)
#define KIIEBAAILKM_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xB429B70)

inline static constexpr unsigned int KIIEBAAILKM_TypeDefinitionIndex = 53809;

	class KIIEBAAILKM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::RtTargetMapBornPoint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapBornPoint*))((::PBYTE)hIl2Cpp + KIIEBAAILKM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + KIIEBAAILKM_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
