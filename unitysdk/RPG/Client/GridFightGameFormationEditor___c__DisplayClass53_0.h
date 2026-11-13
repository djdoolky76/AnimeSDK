#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightSpotLightRecommend; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS53_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D683F10)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS53_0___REPLACEROLEIDINMARKS_B__0_OFFSET UNITYSDK_OFFSET(0x1D68BAB0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS53_0___REPLACEROLEIDINMARKS_B__1_OFFSET UNITYSDK_OFFSET(0x1D68BAC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor___c__DisplayClass53_0_TypeDefinitionIndex = 66187;

	class GridFightGameFormationEditor___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::System::UInt32 newRoleID; // 0x10
		::System::UInt32 oldRoleID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS53_0_CTOR_OFFSET))(this);
		}

		::System::UInt32 __ReplaceRoleIDInMarks_b__0(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS53_0___REPLACEROLEIDINMARKS_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __ReplaceRoleIDInMarks_b__1(::RPG::Client::GridFightSpotLightRecommend* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSpotLightRecommend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS53_0___REPLACEROLEIDINMARKS_B__1_OFFSET))(this, a1);
		}

	};
}
