#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGGKJBIIFLO.h"
namespace RPG::GameCore { class SetAttachmentVisibilityForUI; }
namespace RPG::GameCore { class TaskContext; }

#define KECNCOPCEOI_CTOR_OFFSET UNITYSDK_OFFSET(0xB3710E0)

	class KECNCOPCEOI : public ::NGGKJBIIFLO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAttachmentVisibilityForUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAttachmentVisibilityForUI*))((::PBYTE)hIl2Cpp + KECNCOPCEOI_CTOR_OFFSET))(this, a1, a2);
		}

	};
