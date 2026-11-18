#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KOKBJFJMFPA.h"
#include "unitysdk/MoleMole/FairyTextUpdateType.h"
#include "unitysdk/NAEJHLDILFD.h"
#include "unitysdk/System/ValueTuple_2.h"

class LJPJIMHIFIP;
namespace System { class String; }

#define MOLEMOLE_HADALSCORESUBSYSTEM_BINDCONTEXT_OFFSET UNITYSDK_OFFSET(0x13590830)
#define MOLEMOLE_HADALSCORESUBSYSTEM_CLOSESCOREUI_OFFSET UNITYSDK_OFFSET(0x135905D0)
#define MOLEMOLE_HADALSCORESUBSYSTEM_DISPATCHSCOREUIOPERATION_OFFSET UNITYSDK_OFFSET(0x13590A70)
#define MOLEMOLE_HADALSCORESUBSYSTEM_GETSCORETEXT_OFFSET UNITYSDK_OFFSET(0x13590FC0)
#define MOLEMOLE_HADALSCORESUBSYSTEM_GETSTAGEDISPLAY_OFFSET UNITYSDK_OFFSET(0x13590EB0)
#define MOLEMOLE_HADALSCORESUBSYSTEM_GET_ISSCOREUIOPEN_OFFSET UNITYSDK_OFFSET(0x135904F0)
#define MOLEMOLE_HADALSCORESUBSYSTEM_INVALIDATETEXTCACHE_OFFSET UNITYSDK_OFFSET(0x13590A10)
#define MOLEMOLE_HADALSCORESUBSYSTEM_ONOPERATIONSCOREADDED_OFFSET UNITYSDK_OFFSET(0x135913B0)
#define MOLEMOLE_HADALSCORESUBSYSTEM_ONSCORECHANGED_OFFSET UNITYSDK_OFFSET(0x13590DF0)
#define MOLEMOLE_HADALSCORESUBSYSTEM_OPENSCOREUI_OFFSET UNITYSDK_OFFSET(0x13590680)
#define MOLEMOLE_HADALSCORESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x13590500)
#define MOLEMOLE_HADALSCORESUBSYSTEM_UNBINDCONTEXT_OFFSET UNITYSDK_OFFSET(0x13590C30)
#define MOLEMOLE_HADALSCORESUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x13590560)
#define MOLEMOLE_HADALSCORESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x13591550)
#define MOLEMOLE_HADALSCORESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x13591570)
#define MOLEMOLE_HADALSCORESUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x13591600)

namespace MoleMole
{
	inline static constexpr unsigned int HadalScoreSubsystem_TypeDefinitionIndex = 42850;

	class HadalScoreSubsystem
	{
	public:
		// static const ::System::String* ScoreTextC; // 0x0
		// static const ::System::String* ScoreTextB; // 0x0
		// static const ::System::String* ScoreTextA; // 0x0
		// static const ::System::String* ScoreTextS; // 0x0
		// static const ::System::String* ScoreTextShort; // 0x0
		::System::String* _cachedText; // 0x10
		::System::String* _cachedKey; // 0x18
		::LJPJIMHIFIP* _context; // 0x20
		::KOKBJFJMFPA _curStage; // 0x28
		::System::Int32 _cachedTarget; // 0x2C
		::System::Int32 _cachedExtraScore; // 0x30
		::System::Int32 _cachedScore; // 0x34
		::System::Boolean _hasOpened; // 0x38
		::System::Boolean _lastMiddleTip; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSCORESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsScoreUIOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSCORESUBSYSTEM_GET_ISSCOREUIOPEN_OFFSET))(this);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSCORESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSCORESUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OpenScoreUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSCORESUBSYSTEM_OPENSCOREUI_OFFSET))(this);
		}

		::System::Void CloseScoreUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSCORESUBSYSTEM_CLOSESCOREUI_OFFSET))(this);
		}

		::System::Void BindContext(::LJPJIMHIFIP* context)
		{
			return ((::System::Void(*)(::PVOID, ::LJPJIMHIFIP*))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSCORESUBSYSTEM_BINDCONTEXT_OFFSET))(this, context);
		}

		::System::Void UnbindContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSCORESUBSYSTEM_UNBINDCONTEXT_OFFSET))(this);
		}

		::System::Void OnScoreChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSCORESUBSYSTEM_ONSCORECHANGED_OFFSET))(this);
		}

		::System::Void GetStageDisplay(::System::String*& textKey, ::System::Int32& targetScore)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSCORESUBSYSTEM_GETSTAGEDISPLAY_OFFSET))(this, textKey, targetScore);
		}

		::System::ValueTuple_2<::System::String*, ::MoleMole::FairyTextUpdateType> GetScoreText()
		{
			return ((::System::ValueTuple_2<::System::String*, ::MoleMole::FairyTextUpdateType>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSCORESUBSYSTEM_GETSCORETEXT_OFFSET))(this);
		}

		::System::Void OnOperationScoreAdded(::System::String* textMapKey, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSCORESUBSYSTEM_ONOPERATIONSCOREADDED_OFFSET))(this, textMapKey, value);
		}

		::System::Void DispatchScoreUIOperation(::NAEJHLDILFD operation)
		{
			return ((::System::Void(*)(::PVOID, ::NAEJHLDILFD))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSCORESUBSYSTEM_DISPATCHSCOREUIOPERATION_OFFSET))(this, operation);
		}

		::System::Void InvalidateTextCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSCORESUBSYSTEM_INVALIDATETEXTCACHE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSCORESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void __base_UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSCORESUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
