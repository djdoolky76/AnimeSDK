#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole { class ComicImgStyleConfig; }

#define AJNINLCGMNJ_ONMONKJMKCN_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x1435AA80)
#define AJNINLCGMNJ_ONMONKJMKCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1435AA70)

inline static constexpr unsigned int AJNINLCGMNJ_ONMONKJMKCN_TypeDefinitionIndex = 73137;

class AJNINLCGMNJ_ONMONKJMKCN : public ::System::Object
{
public:
	::Foundation::AssetPath PJNJFACFJHP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNINLCGMNJ_ONMONKJMKCN__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::MoleMole::ComicImgStyleConfig*>* FLIAEJGDMLI()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::MoleMole::ComicImgStyleConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNINLCGMNJ_ONMONKJMKCN_FLIAEJGDMLI_OFFSET))(this);
	}
};
