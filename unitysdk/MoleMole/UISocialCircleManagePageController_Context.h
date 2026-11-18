#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDAEPNLCMPA.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/NACJNENFDGJ.h"

class FBEBLKFPKAK;
class IDGDIFDMIDP;
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UISOCIALCIRCLEMANAGEPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14814180)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleManagePageController_Context_TypeDefinitionIndex = 84984;

	class UISocialCircleManagePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::FBEBLKFPKAK* CircleStaticData; // 0x28
		::System::Action_2<::CDAEPNLCMPA, ::IDGDIFDMIDP*>* OnCloseAction; // 0x30
		::IDGDIFDMIDP* SocialCircleData; // 0x38
		::NACJNENFDGJ ManagePageMode; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMANAGEPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
