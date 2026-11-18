#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPNHHGBPCGM.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_UIPACKAGEDOWNLOADWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x168D5D70)

namespace MoleMole
{
	inline static constexpr unsigned int UIPackageDownloadWindowContext_TypeDefinitionIndex = 61981;

	class UIPackageDownloadWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::GPNHHGBPCGM>* downloadPackages; // 0x28
		::System::Action* SuccessCallback; // 0x30
		::System::Collections::Generic::IEnumerable_1<::System::Int32>* downloadTitles; // 0x38
		::System::Action* CancelCallback; // 0x40
		::System::Action* CancelAndDeleteCallback; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPACKAGEDOWNLOADWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
