#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OverrideModifierName; }
namespace RPG::GameCore { class TaskContext; }

#define NGCFKNAHJDF_CTOR_OFFSET UNITYSDK_OFFSET(0xBBA2330)
#define NGCFKNAHJDF_DHHJIGBBKLO_OFFSET UNITYSDK_OFFSET(0xBBA2730)
#define NGCFKNAHJDF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBA2360)

	class NGCFKNAHJDF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideModifierName* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideModifierName*))((::PBYTE)hIl2Cpp + NGCFKNAHJDF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCFKNAHJDF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void DHHJIGBBKLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCFKNAHJDF_DHHJIGBBKLO_OFFSET))(this);
		}

	};
