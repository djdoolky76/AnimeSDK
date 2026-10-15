#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFilter; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JOAKJOLODCH_CTOR_OFFSET UNITYSDK_OFFSET(0xB29CF90)
#define JOAKJOLODCH_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xB29CFB0)

inline static constexpr unsigned int JOAKJOLODCH_TypeDefinitionIndex = 59198;

	class JOAKJOLODCH
	{
	public:
		::GELIALJDFBL* LLHKOFLJFCH; // 0x18
		::System::Void _ctor(::RPG::GameCore::TargetFilter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFilter*))((::PBYTE)hIl2Cpp + JOAKJOLODCH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + JOAKJOLODCH_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
