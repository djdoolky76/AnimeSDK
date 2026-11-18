#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
namespace MoleMole { class UIActivityReturnPageController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A31BFD0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS19_0__PLAYTRAILVIDEO_B__0_OFFSET UNITYSDK_OFFSET(0x1A31BFE0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS19_0__PLAYTRAILVIDEO_B__1_OFFSET UNITYSDK_OFFSET(0x1A31C030)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnPageController___c__DisplayClass19_0_TypeDefinitionIndex = 59712;

	class UIActivityReturnPageController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::Action_1<::DGDNKBFMHME*>* OnVideoFinished; // 0x10
		::MoleMole::UIActivityReturnPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayTrailVideo_b__0(::DGDNKBFMHME* vp)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS19_0__PLAYTRAILVIDEO_B__0_OFFSET))(this, vp);
		}

		::System::Void _PlayTrailVideo_b__1(::DGDNKBFMHME* vp)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS19_0__PLAYTRAILVIDEO_B__1_OFFSET))(this, vp);
		}
	};
}
