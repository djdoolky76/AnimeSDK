#pragma once
#include "unitysdk/unitysdk.h"
class HIKAAGHELPH;
class IIFJAHONOGC;
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class Transform; }

#define SOFA_RUNTIME_TABHEADERTEXTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE976D20)
#define SOFA_RUNTIME_TABHEADERTEXTCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE9769B0)

namespace Sofa::Runtime
{
	inline static constexpr unsigned int TabHeaderTextControl_TypeDefinitionIndex = 49736;

	class TabHeaderTextControl
	{
	public:
		::RPG::Client::LocalizedText* _LabelText; // 0x70
		::UnityEngine::Transform* _RedDotRoot; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTCONTROL__BINDING_OFFSET))(this, a1);
		}

	};
}
