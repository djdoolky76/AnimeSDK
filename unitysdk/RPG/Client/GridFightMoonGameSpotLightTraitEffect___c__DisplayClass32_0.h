#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTMOONGAMESPOTLIGHTTRAITEFFECT___C__DISPLAYCLASS32_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDC0A960)
#define RPG_CLIENT_GRIDFIGHTMOONGAMESPOTLIGHTTRAITEFFECT___C__DISPLAYCLASS32_0__PULLPENDINGGOLDENHANCEUIDS_B__0_OFFSET UNITYSDK_OFFSET(0xDC0A970)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMoonGameSpotLightTraitEffect___c__DisplayClass32_0_TypeDefinitionIndex = 67215;

	class GridFightMoonGameSpotLightTraitEffect___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* current; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMOONGAMESPOTLIGHTTRAITEFFECT___C__DISPLAYCLASS32_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _PullPendingGoldEnhanceUIDs_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMOONGAMESPOTLIGHTTRAITEFFECT___C__DISPLAYCLASS32_0__PULLPENDINGGOLDENHANCEUIDS_B__0_OFFSET))(this, a1);
		}

	};
}
