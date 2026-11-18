#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANNEDDFCFKN.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

class AODIFLIBBJA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMAINCITYCAMERAV2CONTEXT_ADDMODES_OFFSET UNITYSDK_OFFSET(0x183E5330)
#define MOLEMOLE_UIMAINCITYCAMERAV2CONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x183E53F0)
#define MOLEMOLE_UIMAINCITYCAMERAV2CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x183E5280)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityCameraV2Context_TypeDefinitionIndex = 91115;

	class UIMainCityCameraV2Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClose; // 0x28
		::System::Collections::Generic::List_1<::AODIFLIBBJA*>* PhotoCameraModes; // 0x30
		::System::Nullable_1<::ANNEDDFCFKN> InitCameraModeType; // 0x38
		::System::Nullable_1<::System::Boolean> IsLoadLastPhotoSetting; // 0x40
		::System::Boolean IsHideBattleUI; // 0x42
		::System::Boolean IsClosePlayFadeoutAnim; // 0x43
		::System::Boolean IsCursorHide; // 0x44
		::System::Byte _padding0[0x3];
		::System::Nullable_1<::System::Int32> InitShowPhotoFrameID; // 0x48

		::System::Void _ctor(::Il2CppArray<::AODIFLIBBJA*>* cameraModes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::AODIFLIBBJA*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAV2CONTEXT__CTOR_OFFSET))(this, cameraModes);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAV2CONTEXT__CTOR_1_OFFSET))(this);
		}

		::System::Void AddModes(::Il2CppArray<::AODIFLIBBJA*>* cameraModes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::AODIFLIBBJA*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAV2CONTEXT_ADDMODES_OFFSET))(this, cameraModes);
		}
	};
}
