#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginBase.h"
#include "unitysdk/MoleMole/MonoEffectPluginDither_ALEAKBOKLIM.h"
#include "unitysdk/MoleMole/MonoEffectPluginDither_AMBNPJLGAOB.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MONOEFFECTPLUGINDITHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1468D3E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginDither_TypeDefinitionIndex = 68226;

	class MonoEffectPluginDither : public ::MoleMole::MonoEffectPluginBase
	{
	public:
		::MoleMole::MonoEffectPluginDither_AMBNPJLGAOB mode; // 0x18
		::MoleMole::MonoEffectPluginDither_ALEAKBOKLIM effectKind; // 0x1C
		::System::String* ditherKey; // 0x20
		::System::Boolean IsIgnoreList; // 0x28
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::HashSet_1<::UnityEngine::Renderer*>* rendererSelectList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINDITHER__CTOR_OFFSET))(this);
		}
	};
}
