#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class DCHHHHKEGOP;
class GBCOPPGPOCL;
namespace MoleMole { class UIGeneralTipsWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class RectTransform; }

#define NCCMMBBAJNL_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x105ABE60)
#define NCCMMBBAJNL_IENEDFIMHJA_OFFSET UNITYSDK_OFFSET(0x105ABFC0)
#define NCCMMBBAJNL_IOAFIEBCLJL_OFFSET UNITYSDK_OFFSET(0x105ABD30)
#define NCCMMBBAJNL__CTOR_OFFSET UNITYSDK_OFFSET(0x105ABC50)

inline static constexpr unsigned int NCCMMBBAJNL_TypeDefinitionIndex = 90772;

class NCCMMBBAJNL : public ::System::Object
{
public:
	::DCHHHHKEGOP* BKDKEDCOENK; // 0x10
	::System::Collections::Generic::List_1<::GBCOPPGPOCL*>* KCCIJAKPLFA; // 0x18
	::UnityEngine::AnimationCurve* BNGFIPMHBOG; // 0x20
	::Foundation::Coroutine::CoroutineHandle BAPDOFBDGED; // 0x28

	::System::Void _ctor(::UnityEngine::RectTransform* MGOFOAFCFIJ, ::UnityEngine::AnimationCurve* FAJHPKBELMF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + NCCMMBBAJNL__CTOR_OFFSET))(this, MGOFOAFCFIJ, FAJHPKBELMF);
	}

	::System::Void IOAFIEBCLJL(::MoleMole::UIGeneralTipsWidgetController* NPIGINFAKGN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralTipsWidgetController*))((::PBYTE)hIl2Cpp + NCCMMBBAJNL_IOAFIEBCLJL_OFFSET))(this, NPIGINFAKGN);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCMMBBAJNL_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void IENEDFIMHJA(::MoleMole::UIGeneralTipsWidgetController* NPIGINFAKGN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralTipsWidgetController*))((::PBYTE)hIl2Cpp + NCCMMBBAJNL_IENEDFIMHJA_OFFSET))(this, NPIGINFAKGN);
	}
};
