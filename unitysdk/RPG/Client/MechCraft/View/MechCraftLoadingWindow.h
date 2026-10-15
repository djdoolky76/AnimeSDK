#pragma once
#include "unitysdk/unitysdk.h"
class HHLOEMDFFMG;

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTLOADINGWINDOW_CTOR_OFFSET UNITYSDK_OFFSET(0xD6481D0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftLoadingWindow_TypeDefinitionIndex = 79976;

	class MechCraftLoadingWindow
	{
	public:
		::System::Void _ctor(::HHLOEMDFFMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHLOEMDFFMG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTLOADINGWINDOW_CTOR_OFFSET))(this, a1);
		}

	};
}
