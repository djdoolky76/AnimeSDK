#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }

#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS28_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDB59980)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS28_0__GETGAINOTHERROLETRAITIDS_B__0_OFFSET UNITYSDK_OFFSET(0xDB59990)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTrait___c__DisplayClass28_0_TypeDefinitionIndex = 67303;

	class GridFightGameTrait___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTrait* trait; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS28_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetGainOtherRoleTraitIDs_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS28_0__GETGAINOTHERROLETRAITIDS_B__0_OFFSET))(this, a1);
		}

	};
}
