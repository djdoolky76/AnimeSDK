#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTrailblazeBoughtGood; }

#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT___C__DISPLAYCLASS28_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D7AF0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT___C__DISPLAYCLASS28_0__GETMAZEBUFFBOUGHTGOODS_B__0_OFFSET UNITYSDK_OFFSET(0x1D3D7F50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrailblazeEffect___c__DisplayClass28_0_TypeDefinitionIndex = 67277;

	class GridFightTrailblazeEffect___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTrailblazeBoughtGood* boughtGood; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT___C__DISPLAYCLASS28_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMazeBuffBoughtGoods_b__0(::RPG::Client::GridFightTrailblazeBoughtGood* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrailblazeBoughtGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT___C__DISPLAYCLASS28_0__GETMAZEBUFFBOUGHTGOODS_B__0_OFFSET))(this, a1);
		}

	};
}
