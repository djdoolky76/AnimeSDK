#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering::Universal { class MaterialPropertyBlockContent; }

#define MATERIALPROPERTYBLOCKDEBUGGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1107F5C0)
#define MATERIALPROPERTYBLOCKDEBUGGER_REFRESH_OFFSET UNITYSDK_OFFSET(0x1107EF70)
#define MATERIALPROPERTYBLOCKDEBUGGER_RELEASECONTENTS_OFFSET UNITYSDK_OFFSET(0x1107F400)
#define MATERIALPROPERTYBLOCKDEBUGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1107F610)

inline static constexpr unsigned int MaterialPropertyBlockDebugger_TypeDefinitionIndex = 96776;

class MaterialPropertyBlockDebugger : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Renderer* _renderer; // 0x18
	::UnityEngine::Rendering::Universal::MaterialPropertyBlockContent* rendererMpbContent; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::MaterialPropertyBlockContent*>* materialMpbContents; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPROPERTYBLOCKDEBUGGER__CTOR_OFFSET))(this);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPROPERTYBLOCKDEBUGGER_REFRESH_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPROPERTYBLOCKDEBUGGER_ONDESTROY_OFFSET))(this);
	}

	::System::Void ReleaseContents()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPROPERTYBLOCKDEBUGGER_RELEASECONTENTS_OFFSET))(this);
	}
};
