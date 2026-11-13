#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACNDKIFJLJC;
namespace RPG::Client { class GridFightMoonGameSpotLightTraitEffect; }

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS115_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1E169DB0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS115_0__GETMOONGAMEBINDING_B__0_OFFSET UNITYSDK_OFFSET(0x1E16A8E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightManager___c__DisplayClass115_0_TypeDefinitionIndex = 66965;

	class GridFightSpotLightManager___c__DisplayClass115_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightMoonGameSpotLightTraitEffect* effect; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS115_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMoonGameBinding_b__0(::ACNDKIFJLJC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ACNDKIFJLJC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS115_0__GETMOONGAMEBINDING_B__0_OFFSET))(this, a1);
		}

	};
}
