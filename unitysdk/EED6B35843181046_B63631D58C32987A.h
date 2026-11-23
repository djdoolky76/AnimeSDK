#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EED6B35843181046_B63631D58C32987A_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define EED6B35843181046_B63631D58C32987A__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7B8D0)

inline static constexpr unsigned int EED6B35843181046_B63631D58C32987A_TypeDefinitionIndex = 11993;

class EED6B35843181046_B63631D58C32987A : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EED6B35843181046_B63631D58C32987A__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* E2692EDB678DEB5F, ::System::String* F0D3F87128A7C4CA, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + EED6B35843181046_B63631D58C32987A_INVOKE_OFFSET))(this, E2692EDB678DEB5F, F0D3F87128A7C4CA, E04D2BE64FCE9814);
	}
};
