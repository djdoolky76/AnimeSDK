#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapActionBarAdjoinEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOHCBGNJCON_CTOR_OFFSET UNITYSDK_OFFSET(0x158EACB0)
#define FOHCBGNJCON_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x158EACD0)

inline static constexpr unsigned int FOHCBGNJCON_TypeDefinitionIndex = 59110;

	class FOHCBGNJCON
	{
	public:
		::GELIALJDFBL* LLHKOFLJFCH; // 0x18
		::System::Void _ctor(::RPG::GameCore::TargetMapActionBarAdjoinEntityList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList*))((::PBYTE)hIl2Cpp + FOHCBGNJCON_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + FOHCBGNJCON_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
