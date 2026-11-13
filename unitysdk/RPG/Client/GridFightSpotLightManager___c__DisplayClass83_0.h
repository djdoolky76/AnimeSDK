#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACNDKIFJLJC;

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS83_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1674F0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS83_0__SHOULDSHOWTRAITLAYERBUFFMARK_B__0_OFFSET UNITYSDK_OFFSET(0x1E16ACC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightManager___c__DisplayClass83_0_TypeDefinitionIndex = 66978;

	class GridFightSpotLightManager___c__DisplayClass83_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS83_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _ShouldShowTraitLayerBuffMark_b__0(::ACNDKIFJLJC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ACNDKIFJLJC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS83_0__SHOULDSHOWTRAITLAYERBUFFMARK_B__0_OFFSET))(this, a1);
		}

	};
}
