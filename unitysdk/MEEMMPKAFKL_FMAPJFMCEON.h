#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Level { class LevelConfig; }
namespace System { class Action; }

#define MEEMMPKAFKL_FMAPJFMCEON_JCDKHNLDOKL_OFFSET UNITYSDK_OFFSET(0x17D1D210)
#define MEEMMPKAFKL_FMAPJFMCEON__CTOR_OFFSET UNITYSDK_OFFSET(0x17D1D200)

inline static constexpr unsigned int MEEMMPKAFKL_FMAPJFMCEON_TypeDefinitionIndex = 63986;

class MEEMMPKAFKL_FMAPJFMCEON : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_FMAPJFMCEON__CTOR_OFFSET))(this);
	}

	::System::Void JCDKHNLDOKL(::MoleMole::Level::LevelConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Level::LevelConfig*))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_FMAPJFMCEON_JCDKHNLDOKL_OFFSET))(this, DFMKILICPFB);
	}
};
