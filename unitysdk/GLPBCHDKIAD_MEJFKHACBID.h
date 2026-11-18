#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ScenePerformConfig; }

#define GLPBCHDKIAD_MEJFKHACBID__CTOR_OFFSET UNITYSDK_OFFSET(0x15D75990)

inline static constexpr unsigned int GLPBCHDKIAD_MEJFKHACBID_TypeDefinitionIndex = 91797;

class GLPBCHDKIAD_MEJFKHACBID : public ::System::Object
{
public:
	::MoleMole::Config::ScenePerformConfig* AKKFADGKFNA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_MEJFKHACBID__CTOR_OFFSET))(this);
	}
};
