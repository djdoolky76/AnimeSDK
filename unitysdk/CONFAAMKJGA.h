#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropAttachPointRendererSetVisibility; }
namespace RPG::GameCore { class TaskContext; }

#define CONFAAMKJGA_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB9120)
#define CONFAAMKJGA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCB9150)

inline static constexpr unsigned int CONFAAMKJGA_TypeDefinitionIndex = 58302;

	class CONFAAMKJGA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropAttachPointRendererSetVisibility* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropAttachPointRendererSetVisibility*))((::PBYTE)hIl2Cpp + CONFAAMKJGA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFAAMKJGA_ONTASKBEGIN_OFFSET))(this);
		}

	};
