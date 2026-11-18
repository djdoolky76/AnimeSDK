#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigLevelEndPerform; }
namespace MoleMole::Config { class ConfigLevelEndPerforms; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KJKHMICPAOD_MMHEAAPCEAH_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x1995C150)
#define KJKHMICPAOD_MMHEAAPCEAH_HJDFGAPKGKA_OFFSET UNITYSDK_OFFSET(0x1995BFC0)
#define KJKHMICPAOD_MMHEAAPCEAH__CTOR_OFFSET UNITYSDK_OFFSET(0x1995B010)

inline static constexpr unsigned int KJKHMICPAOD_MMHEAAPCEAH_TypeDefinitionIndex = 87429;

class KJKHMICPAOD_MMHEAAPCEAH : public ::System::Object
{
public:
	::Foundation::AssetPath PJNJFACFJHP; // 0x10
	::System::Func_2<::MoleMole::Config::ConfigLevelEndPerforms*, ::MoleMole::Config::ConfigLevelEndPerform*>* FFMGICPLKFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKHMICPAOD_MMHEAAPCEAH__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigLevelEndPerform* HJDFGAPKGKA(::MoleMole::Config::ConfigLevelEndPerforms* DFMKILICPFB)
	{
		return ((::MoleMole::Config::ConfigLevelEndPerform*(*)(::PVOID, ::MoleMole::Config::ConfigLevelEndPerforms*))((::PBYTE)hIl2Cpp + KJKHMICPAOD_MMHEAAPCEAH_HJDFGAPKGKA_OFFSET))(this, DFMKILICPFB);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::MoleMole::Config::ConfigLevelEndPerform*>* FLIAEJGDMLI()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::MoleMole::Config::ConfigLevelEndPerform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKHMICPAOD_MMHEAAPCEAH_FLIAEJGDMLI_OFFSET))(this);
	}
};
