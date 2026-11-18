#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/NodeMapEntry.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_NODEMAP_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x135C6670)
#define MOLEMOLE_NODEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x135C67E0)

namespace MoleMole
{
	inline static constexpr unsigned int NodeMap_TypeDefinitionIndex = 56173;

	class NodeMap : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::NodeMapEntry>* items; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NODEMAP__CTOR_OFFSET))(this);
		}

		::System::Boolean TryGetValue(::System::String* MCOHLHMKLIP, ::System::Collections::Generic::List_1<::System::String*>*& EGEGIMGMJHN)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_NODEMAP_TRYGETVALUE_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN);
		}
	};
}
