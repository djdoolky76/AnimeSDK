#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapCreator; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ODPCMGIOMEE_CTOR_OFFSET UNITYSDK_OFFSET(0xBDF21D0)
#define ODPCMGIOMEE_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xBDF21F0)

inline static constexpr unsigned int ODPCMGIOMEE_TypeDefinitionIndex = 59247;

	class ODPCMGIOMEE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapCreator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapCreator*))((::PBYTE)hIl2Cpp + ODPCMGIOMEE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + ODPCMGIOMEE_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
