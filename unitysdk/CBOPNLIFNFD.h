#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_ByHasPatrolPath; }
namespace RPG::GameCore { class TaskContext; }

#define CBOPNLIFNFD_CTOR_OFFSET UNITYSDK_OFFSET(0x18FEBD00)
#define CBOPNLIFNFD_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18FEBD30)

inline static constexpr unsigned int CBOPNLIFNFD_TypeDefinitionIndex = 53301;

	class CBOPNLIFNFD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByHasPatrolPath* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByHasPatrolPath*))((::PBYTE)hIl2Cpp + CBOPNLIFNFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOPNLIFNFD_EVALUATE_OFFSET))(this);
		}

	};
