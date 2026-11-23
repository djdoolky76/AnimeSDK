#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/AD61077CFCBEFAEA.h"

namespace ABC::UI { class MonoLocalizedTmp; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define ABC_UI_MONOHINTTAG_E3D815C5535F6868_1_OFFSET UNITYSDK_OFFSET(0x218DDC0)
#define ABC_UI_MONOHINTTAG_E3D815C5535F6868_OFFSET UNITYSDK_OFFSET(0x218DC60)
#define ABC_UI_MONOHINTTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoHintTag_TypeDefinitionIndex = 8789;

	class MonoHintTag : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* Animator; // 0x20
		::ABC::UI::MonoLocalizedTmp* ActivateText; // 0x28

		::System::Void E3D815C5535F6868(::System::Boolean E525D3AA9A998686, ::System::String* FE0B9D5AFAFC4018, ::System::String* F15E0CC205015656)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ABC_UI_MONOHINTTAG_E3D815C5535F6868_OFFSET))(this, E525D3AA9A998686, FE0B9D5AFAFC4018, F15E0CC205015656);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOHINTTAG__CTOR_OFFSET))(this);
		}

		::System::Void E3D815C5535F6868_1(::System::Boolean E525D3AA9A998686, ::AD61077CFCBEFAEA EAB0BDEE7FA0FE3C, ::AD61077CFCBEFAEA ADDA29F4A282D665)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::AD61077CFCBEFAEA, ::AD61077CFCBEFAEA))((::PBYTE)hIl2Cpp + ABC_UI_MONOHINTTAG_E3D815C5535F6868_1_OFFSET))(this, E525D3AA9A998686, EAB0BDEE7FA0FE3C, ADDA29F4A282D665);
		}
	};
}
