#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPNHHGBPCGM.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define GFAPACGJCME_AMGPJCNOKHB_EBJGAGEHPOE_OFFSET UNITYSDK_OFFSET(0x189FB370)
#define GFAPACGJCME_AMGPJCNOKHB__CTOR_OFFSET UNITYSDK_OFFSET(0x189FB360)

inline static constexpr unsigned int GFAPACGJCME_AMGPJCNOKHB_TypeDefinitionIndex = 86889;

class GFAPACGJCME_AMGPJCNOKHB : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerable_1<::GPNHHGBPCGM>* OOCJGBEIDOC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAPACGJCME_AMGPJCNOKHB__CTOR_OFFSET))(this);
	}

	::System::Boolean EBJGAGEHPOE(::MoleMole::DownloadFileInfo* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + GFAPACGJCME_AMGPJCNOKHB_EBJGAGEHPOE_OFFSET))(this, HAAEBCOBKFF);
	}
};
