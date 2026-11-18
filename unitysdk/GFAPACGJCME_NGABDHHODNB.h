#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPNHHGBPCGM.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define GFAPACGJCME_NGABDHHODNB_BDKGEBJAHJN_OFFSET UNITYSDK_OFFSET(0x11DA18E0)
#define GFAPACGJCME_NGABDHHODNB__CTOR_OFFSET UNITYSDK_OFFSET(0x11DA18D0)

inline static constexpr unsigned int GFAPACGJCME_NGABDHHODNB_TypeDefinitionIndex = 86890;

class GFAPACGJCME_NGABDHHODNB : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerable_1<::GPNHHGBPCGM>* BIOFPOLJAMN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAPACGJCME_NGABDHHODNB__CTOR_OFFSET))(this);
	}

	::System::Boolean BDKGEBJAHJN(::MoleMole::DownloadFileInfo* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + GFAPACGJCME_NGABDHHODNB_BDKGEBJAHJN_OFFSET))(this, HAAEBCOBKFF);
	}
};
