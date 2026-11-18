#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPNHHGBPCGM.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define GFAPACGJCME_KHKNJBHHAAL_OOICHIKNDOO_OFFSET UNITYSDK_OFFSET(0x125CC5C0)
#define GFAPACGJCME_KHKNJBHHAAL__CTOR_OFFSET UNITYSDK_OFFSET(0x125CC5B0)

inline static constexpr unsigned int GFAPACGJCME_KHKNJBHHAAL_TypeDefinitionIndex = 86886;

class GFAPACGJCME_KHKNJBHHAAL : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerable_1<::GPNHHGBPCGM>* BIOFPOLJAMN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAPACGJCME_KHKNJBHHAAL__CTOR_OFFSET))(this);
	}

	::System::Boolean OOICHIKNDOO(::MoleMole::DownloadFileInfo* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + GFAPACGJCME_KHKNJBHHAAL_OOICHIKNDOO_OFFSET))(this, HAAEBCOBKFF);
	}
};
