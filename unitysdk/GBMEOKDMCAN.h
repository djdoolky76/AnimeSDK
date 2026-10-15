#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHJHLNDJKNM.h"
namespace RPG::GameCore { class SetAttachmentScaleForUI; }
namespace RPG::GameCore { class TaskContext; }

#define GBMEOKDMCAN_CTOR_OFFSET UNITYSDK_OFFSET(0x15947900)

inline static constexpr unsigned int GBMEOKDMCAN_TypeDefinitionIndex = 55885;

	class GBMEOKDMCAN : public ::JHJHLNDJKNM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAttachmentScaleForUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAttachmentScaleForUI*))((::PBYTE)hIl2Cpp + GBMEOKDMCAN_CTOR_OFFSET))(this, a1, a2);
		}

	};
