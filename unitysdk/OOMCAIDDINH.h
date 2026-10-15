#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapEntityInGrid; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OOMCAIDDINH_CTOR_OFFSET UNITYSDK_OFFSET(0xBF8D180)
#define OOMCAIDDINH_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xBF8D1A0)

	class OOMCAIDDINH
	{
	public:
		::GELIALJDFBL* LLHKOFLJFCH; // 0x18
		::System::Void _ctor(::RPG::GameCore::RtTargetMapEntityInGrid* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapEntityInGrid*))((::PBYTE)hIl2Cpp + OOMCAIDDINH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + OOMCAIDDINH_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
