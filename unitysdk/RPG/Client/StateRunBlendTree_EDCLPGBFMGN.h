#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_STATERUNBLENDTREE_EDCLPGBFMGN_CTOR_OFFSET UNITYSDK_OFFSET(0xEBDD590)
#define RPG_CLIENT_STATERUNBLENDTREE_EDCLPGBFMGN_GKFGJFKMFKD_OFFSET UNITYSDK_OFFSET(0xEBDF3B0)

namespace RPG::Client
{
	inline static constexpr unsigned int StateRunBlendTree_EDCLPGBFMGN_TypeDefinitionIndex = 70796;

	class StateRunBlendTree_EDCLPGBFMGN : public ::System::Object
	{
	public:
		::System::Single MCLLALGABAB; // 0x10
		::System::Single IEHPFADHJFD; // 0x14
		::System::Single MIAJNJNECOG; // 0x18
		::System::Single GPOFMFPENLH; // 0x1C
		::System::Int32 NNACKOBKFGE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_EDCLPGBFMGN_CTOR_OFFSET))(this);
		}

		::System::Single GKFGJFKMFKD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_EDCLPGBFMGN_GKFGJFKMFKD_OFFSET))(this);
		}

	};
}
