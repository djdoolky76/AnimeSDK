#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapAllOffTeamMember; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDCIFKHNOFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1598A6D0)
#define GDCIFKHNOFI_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1598A6F0)

inline static constexpr unsigned int GDCIFKHNOFI_TypeDefinitionIndex = 59240;

	class GDCIFKHNOFI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapAllOffTeamMember* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapAllOffTeamMember*))((::PBYTE)hIl2Cpp + GDCIFKHNOFI_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + GDCIFKHNOFI_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
