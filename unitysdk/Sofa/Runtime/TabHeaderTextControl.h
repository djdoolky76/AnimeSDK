#pragma once
#include "unitysdk/unitysdk.h"
class HIKAAGHELPH;
class IIFJAHONOGC;
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class Transform; }

#define SOFA_RUNTIME_TABHEADERTEXTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE981290)
#define SOFA_RUNTIME_TABHEADERTEXTCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE980F20)

namespace Sofa::Runtime
{
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
