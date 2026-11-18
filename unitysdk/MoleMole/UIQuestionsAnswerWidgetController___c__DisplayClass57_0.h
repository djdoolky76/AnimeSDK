#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

class IBDADAFOKJN;
class KFGGFDDILAG;
namespace MoleMole { class UIQuestionsAnswerWidgetController; }
namespace System { class String; }

#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18FF29A0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_B__3_OFFSET UNITYSDK_OFFSET(0x18FF2AD0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__BOTTOMFADEIN_2_OFFSET UNITYSDK_OFFSET(0x18FF2A70)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__BOTTOMFADEOUT_5_OFFSET UNITYSDK_OFFSET(0x18FF2B60)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__CHANGETONPC_0_OFFSET UNITYSDK_OFFSET(0x18FF29B0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__CHATFADEANDSHOW_1_OFFSET UNITYSDK_OFFSET(0x18FF2A10)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__CHATTASK_4_OFFSET UNITYSDK_OFFSET(0x18FF2B00)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerWidgetController___c__DisplayClass57_0_TypeDefinitionIndex = 53752;

	class UIQuestionsAnswerWidgetController___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::System::String* replyOption; // 0x10
		::MoleMole::UIQuestionsAnswerWidgetController* __4__this; // 0x18
		::System::String* replyEx; // 0x20
		::IBDADAFOKJN* eventConfig; // 0x28
		::KFGGFDDILAG* npcConfig; // 0x30
		::System::String* reply; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _TryNextNpc_g__ChangeToNpc_0()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__CHANGETONPC_0_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _TryNextNpc_g__ChatFadeAndShow_1()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__CHATFADEANDSHOW_1_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _TryNextNpc_g__BottomFadeIn_2()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__BOTTOMFADEIN_2_OFFSET))(this);
		}

		::System::Void _TryNextNpc_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_B__3_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _TryNextNpc_g__ChatTask_4()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__CHATTASK_4_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _TryNextNpc_g__BottomFadeOut_5()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__BOTTOMFADEOUT_5_OFFSET))(this);
		}
	};
}
