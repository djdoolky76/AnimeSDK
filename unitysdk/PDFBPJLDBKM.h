#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetAutoBlinkMaskRenderer; }
namespace RPG::GameCore { class TaskContext; }

#define PDFBPJLDBKM_CTOR_OFFSET UNITYSDK_OFFSET(0xC010E20)
#define PDFBPJLDBKM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC010E50)

	class PDFBPJLDBKM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAutoBlinkMaskRenderer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAutoBlinkMaskRenderer*))((::PBYTE)hIl2Cpp + PDFBPJLDBKM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFBPJLDBKM_ONTASKBEGIN_OFFSET))(this);
		}

	};
