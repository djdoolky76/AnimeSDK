#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace UnityEngine::UI { class InputField; }

#define EED6B35843181046_FE0E6E467E57BB63_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define EED6B35843181046_FE0E6E467E57BB63__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7D60)

inline static constexpr unsigned int EED6B35843181046_FE0E6E467E57BB63_TypeDefinitionIndex = 11961;

class EED6B35843181046_FE0E6E467E57BB63 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EED6B35843181046_FE0E6E467E57BB63__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::UnityEngine::UI::InputField* EBA4611850663D53)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + EED6B35843181046_FE0E6E467E57BB63_INVOKE_OFFSET))(this, EBA4611850663D53);
	}
};
