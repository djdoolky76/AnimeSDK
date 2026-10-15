#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetShuffle; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NLNFHPIOCHF_CTOR_OFFSET UNITYSDK_OFFSET(0xBC572F0)
#define NLNFHPIOCHF_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xBC76390)

inline static constexpr unsigned int NLNFHPIOCHF_TypeDefinitionIndex = 59205;

	class NLNFHPIOCHF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetShuffle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetShuffle*))((::PBYTE)hIl2Cpp + NLNFHPIOCHF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NLNFHPIOCHF_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
