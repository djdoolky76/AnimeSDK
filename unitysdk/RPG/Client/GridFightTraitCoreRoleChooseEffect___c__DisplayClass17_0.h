#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGridMember; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT___C__DISPLAYCLASS17_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F6600)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT___C__DISPLAYCLASS17_0__GETSUBTRAITCONFIGBYUID_B__0_OFFSET UNITYSDK_OFFSET(0x1D3F7080)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitCoreRoleChooseEffect___c__DisplayClass17_0_TypeDefinitionIndex = 67238;

	class GridFightTraitCoreRoleChooseEffect___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT___C__DISPLAYCLASS17_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSubTraitConfigByUID_b__0(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT___C__DISPLAYCLASS17_0__GETSUBTRAITCONFIGBYUID_B__0_OFFSET))(this, a1);
		}

	};
}
