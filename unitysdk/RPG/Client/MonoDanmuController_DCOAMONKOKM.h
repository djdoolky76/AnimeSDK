#pragma once
#include "unitysdk/unitysdk.h"
class MFLJIEBFMOF;

#define RPG_CLIENT_MONODANMUCONTROLLER_DCOAMONKOKM_CTOR_OFFSET UNITYSDK_OFFSET(0xE9CD0)
#define RPG_CLIENT_MONODANMUCONTROLLER_DCOAMONKOKM_GET_CONTENTDATA_OFFSET UNITYSDK_OFFSET(0x1D30)
#define RPG_CLIENT_MONODANMUCONTROLLER_DCOAMONKOKM_GET_FLYSPEED_OFFSET UNITYSDK_OFFSET(0x1D20)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDanmuController_DCOAMONKOKM_TypeDefinitionIndex = 68948;

	struct alignas(8) MonoDanmuController_DCOAMONKOKM
	{
		::MFLJIEBFMOF* _ContentData_k__BackingField; // 0x10
		::System::Single _FlySpeed_k__BackingField; // 0x18
		::System::Void _ctor(::MFLJIEBFMOF* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::MFLJIEBFMOF*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_DCOAMONKOKM_CTOR_OFFSET))(this, a1, a2);
		}

		::MFLJIEBFMOF* get_ContentData()
		{
			return ((::MFLJIEBFMOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_DCOAMONKOKM_GET_CONTENTDATA_OFFSET))(this);
		}

		::System::Single get_FlySpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_DCOAMONKOKM_GET_FLYSPEED_OFFSET))(this);
		}

	};
}
