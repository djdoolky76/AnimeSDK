#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class MonoItemStateItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOITEMSTATE_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18102820)
#define MOLEMOLE_MONOITEMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x181029A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoItemState_TypeDefinitionIndex = 87136;

	class MonoItemState : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::MonoItemStateItem*>* Items; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMSTATE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* GetTransform(::System::String* MCOHLHMKLIP)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMSTATE_GETTRANSFORM_OFFSET))(this, MCOHLHMKLIP);
		}
	};
}
