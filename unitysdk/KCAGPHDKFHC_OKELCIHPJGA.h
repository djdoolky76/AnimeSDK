#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::LevelPerform { class LevelPerformConfig; }

#define KCAGPHDKFHC_OKELCIHPJGA_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x14FCC2F0)
#define KCAGPHDKFHC_OKELCIHPJGA__CTOR_OFFSET UNITYSDK_OFFSET(0x14FCC2E0)

inline static constexpr unsigned int KCAGPHDKFHC_OKELCIHPJGA_TypeDefinitionIndex = 40214;

class KCAGPHDKFHC_OKELCIHPJGA : public ::System::Object
{
public:
	::Foundation::AssetPath PJNJFACFJHP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCAGPHDKFHC_OKELCIHPJGA__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::MoleMole::LevelPerform::LevelPerformConfig*>* FLIAEJGDMLI()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::MoleMole::LevelPerform::LevelPerformConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCAGPHDKFHC_OKELCIHPJGA_FLIAEJGDMLI_OFFSET))(this);
	}
};
