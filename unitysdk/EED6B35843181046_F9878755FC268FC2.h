#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define EED6B35843181046_F9878755FC268FC2_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define EED6B35843181046_F9878755FC268FC2__CTOR_OFFSET UNITYSDK_OFFSET(0x29BD7B0)

inline static constexpr unsigned int EED6B35843181046_F9878755FC268FC2_TypeDefinitionIndex = 11964;

class EED6B35843181046_F9878755FC268FC2 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EED6B35843181046_F9878755FC268FC2__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* A45600735D539BFC, ::System::String* B5459FABA90E20BD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EED6B35843181046_F9878755FC268FC2_INVOKE_OFFSET))(this, A45600735D539BFC, B5459FABA90E20BD);
	}
};
