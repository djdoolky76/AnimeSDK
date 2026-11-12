#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Text::RegularExpressions { class Match; }

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS90_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDC8A6E0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS90_0___FILLREMARKPARAMS_B__0_OFFSET UNITYSDK_OFFSET(0xDC8D790)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightManager___c__DisplayClass90_0_TypeDefinitionIndex = 66979;

	class GridFightSpotLightManager___c__DisplayClass90_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* paramList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS90_0_CTOR_OFFSET))(this);
		}

		::System::String* __FillRemarkParams_b__0(::System::Text::RegularExpressions::Match* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Text::RegularExpressions::Match*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS90_0___FILLREMARKPARAMS_B__0_OFFSET))(this, a1);
		}

	};
}
