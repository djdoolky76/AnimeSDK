#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UICONTROLLEREXTENSIONEMPTYGOLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1598D120)

namespace MoleMole
{
	inline static constexpr unsigned int UIControllerExtensionEmptyGoList_TypeDefinitionIndex = 69884;

	class UIControllerExtensionEmptyGoList : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* maskClickGameObjects; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLEREXTENSIONEMPTYGOLIST__CTOR_OFFSET))(this);
		}
	};
}
