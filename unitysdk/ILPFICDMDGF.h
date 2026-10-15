#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByLocalPlayerIsFakeAvatar; }
namespace RPG::GameCore { class TaskContext; }

#define ILPFICDMDGF_CTOR_OFFSET UNITYSDK_OFFSET(0x164CBC80)
#define ILPFICDMDGF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x164CBCB0)

	class ILPFICDMDGF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar*))((::PBYTE)hIl2Cpp + ILPFICDMDGF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILPFICDMDGF_EVALUATE_OFFSET))(this);
		}

	};
