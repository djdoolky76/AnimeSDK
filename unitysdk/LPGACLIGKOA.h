#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchFightMVPEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LPGACLIGKOA_CTOR_OFFSET UNITYSDK_OFFSET(0xB8192E0)
#define LPGACLIGKOA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB819330)

inline static constexpr unsigned int LPGACLIGKOA_TypeDefinitionIndex = 59126;

	class LPGACLIGKOA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchFightMVPEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchFightMVPEntity*))((::PBYTE)hIl2Cpp + LPGACLIGKOA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + LPGACLIGKOA_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
