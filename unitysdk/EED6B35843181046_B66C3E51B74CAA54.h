#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

#define EED6B35843181046_B66C3E51B74CAA54_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define EED6B35843181046_B66C3E51B74CAA54__CTOR_OFFSET UNITYSDK_OFFSET(0x3A697B0)

inline static constexpr unsigned int EED6B35843181046_B66C3E51B74CAA54_TypeDefinitionIndex = 11969;

class EED6B35843181046_B66C3E51B74CAA54 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EED6B35843181046_B66C3E51B74CAA54__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::UnityEngine::Object* Invoke(::System::String* EFF983A80A48BB2A, ::System::Type* B921B7FE9A0F70BF)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + EED6B35843181046_B66C3E51B74CAA54_INVOKE_OFFSET))(this, EFF983A80A48BB2A, B921B7FE9A0F70BF);
	}
};
