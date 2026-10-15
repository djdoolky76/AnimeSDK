#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapSkillSubTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BMPBLBGFBMF_CTOR_OFFSET UNITYSDK_OFFSET(0xBDC06E0)
#define BMPBLBGFBMF_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xBDC0700)

inline static constexpr unsigned int BMPBLBGFBMF_TypeDefinitionIndex = 59120;

	class BMPBLBGFBMF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapSkillSubTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapSkillSubTarget*))((::PBYTE)hIl2Cpp + BMPBLBGFBMF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + BMPBLBGFBMF_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
