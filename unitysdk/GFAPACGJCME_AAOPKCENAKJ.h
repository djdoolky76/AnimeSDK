#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCCJJOFALCD.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }

#define GFAPACGJCME_AAOPKCENAKJ_AOJMHBJGDHK_OFFSET UNITYSDK_OFFSET(0x16CBF000)
#define GFAPACGJCME_AAOPKCENAKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16CBEFF0)

inline static constexpr unsigned int GFAPACGJCME_AAOPKCENAKJ_TypeDefinitionIndex = 86888;

class GFAPACGJCME_AAOPKCENAKJ : public ::System::Object
{
public:
	::Il2CppArray<::FCCJJOFALCD>* KFLJMGFFNGE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAPACGJCME_AAOPKCENAKJ__CTOR_OFFSET))(this);
	}

	::System::Boolean AOJMHBJGDHK(::MoleMole::DownloadFileInfo* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + GFAPACGJCME_AAOPKCENAKJ_AOJMHBJGDHK_OFFSET))(this, HAAEBCOBKFF);
	}
};
