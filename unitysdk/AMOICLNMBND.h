#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDFDNJCFIHM.h"
namespace RPG::GameCore { class AnimationMoveRange; }
namespace RPG::GameCore { class MoveToTargetPosition; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AMOICLNMBND_CTOR_OFFSET UNITYSDK_OFFSET(0x15580AE0)
#define AMOICLNMBND_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15580C30)

inline static constexpr unsigned int AMOICLNMBND_TypeDefinitionIndex = 55229;

	class AMOICLNMBND
	{
	public:
		::Il2CppArray<::RPG::GameCore::AnimationMoveRange*>* KPENGHPHMFF; // 0x28
		::System::Collections::Generic::List_1<::DDFDNJCFIHM>* LOGMLFEHDGO; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MoveToTargetPosition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MoveToTargetPosition*))((::PBYTE)hIl2Cpp + AMOICLNMBND_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOICLNMBND_ONTASKBEGIN_OFFSET))(this);
		}

	};
