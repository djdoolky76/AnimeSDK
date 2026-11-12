#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACNDKIFJLJC;

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS73_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDC88E20)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS73_0__GETACTIVESPOTLIGHTBINDINGBYROLEID_B__0_OFFSET UNITYSDK_OFFSET(0xDC8D6A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightManager___c__DisplayClass73_0_TypeDefinitionIndex = 66976;

	class GridFightSpotLightManager___c__DisplayClass73_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS73_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetActiveSpotLightBindingByRoleId_b__0(::ACNDKIFJLJC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ACNDKIFJLJC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS73_0__GETACTIVESPOTLIGHTBINDINGBYROLEID_B__0_OFFSET))(this, a1);
		}

	};
}
