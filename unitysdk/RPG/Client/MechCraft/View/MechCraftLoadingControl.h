#pragma once
#include "unitysdk/unitysdk.h"
class HHLOEMDFFMG;
class HIKAAGHELPH;

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTLOADINGCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD63F5A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTLOADINGCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xD63F550)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftLoadingControl_TypeDefinitionIndex = 79974;

	class MechCraftLoadingControl
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTLOADINGCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTLOADINGCONTROL__BINDING_OFFSET))(this, a1);
		}

	};
}
