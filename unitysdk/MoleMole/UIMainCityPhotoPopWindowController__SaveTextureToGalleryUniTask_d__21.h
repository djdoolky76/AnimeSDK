#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIMainCityPhotoPopWindowController; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class RenderTexture; }

#define MOLEMOLE_UIMAINCITYPHOTOPOPWINDOWCONTROLLER__SAVETEXTURETOGALLERYUNITASK_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7D8460)
#define MOLEMOLE_UIMAINCITYPHOTOPOPWINDOWCONTROLLER__SAVETEXTURETOGALLERYUNITASK_D__21_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityPhotoPopWindowController__SaveTextureToGalleryUniTask_d__21_TypeDefinitionIndex = 86411;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
	struct alignas(8) UIMainCityPhotoPopWindowController__SaveTextureToGalleryUniTask_d__21
	{
		::System::Object* __u__1; // 0x10
		::System::Byte _padding0[0x10];
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x28
		::UnityEngine::RenderTexture* rt; // 0x38
		::MoleMole::UIMainCityPhotoPopWindowController* __4__this; // 0x40
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPHOTOPOPWINDOWCONTROLLER__SAVETEXTURETOGALLERYUNITASK_D__21_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPHOTOPOPWINDOWCONTROLLER__SAVETEXTURETOGALLERYUNITASK_D__21_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
