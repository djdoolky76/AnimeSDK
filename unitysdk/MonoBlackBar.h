#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define MONOBLACKBAR_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x2234B50)
#define MONOBLACKBAR_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x2234D70)
#define MONOBLACKBAR_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x2234A90)
#define MONOBLACKBAR_FD271E3EB68C808E_OFFSET UNITYSDK_OFFSET(0x2234BF0)
#define MONOBLACKBAR_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x22347F0)
#define MONOBLACKBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

inline static constexpr unsigned int MonoBlackBar_TypeDefinitionIndex = 9174;

class MonoBlackBar : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::UI::Image* _blackBarImage; // 0x20
	::UnityEngine::RectTransform* _rectTransform; // 0x28

	::System::Void AB36E0EE549986E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOBLACKBAR_AB36E0EE549986E5_OFFSET))(this);
	}

	::System::Void FD271E3EB68C808E(::UnityEngine::Vector2 EB211B01816ACA79, ::UnityEngine::Vector2 F54AF627638DE3C9, ::System::Boolean B3C251F68EAD9A3F)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOBLACKBAR_FD271E3EB68C808E_OFFSET))(this, EB211B01816ACA79, F54AF627638DE3C9, B3C251F68EAD9A3F);
	}

	::System::Void BFA7961FF2AC380B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOBLACKBAR_BFA7961FF2AC380B_OFFSET))(this);
	}

	::System::Void FDBCDBBFE02CD51A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOBLACKBAR_FDBCDBBFE02CD51A_OFFSET))(this);
	}

	::System::Void E85D1C741D5386D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOBLACKBAR_E85D1C741D5386D7_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOBLACKBAR__CTOR_OFFSET))(this);
	}
};
