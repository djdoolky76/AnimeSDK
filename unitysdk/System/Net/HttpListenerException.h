#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Win32Exception.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class String; }

#define SYSTEM_NET_HTTPLISTENEREXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3E4B6A0)
#define SYSTEM_NET_HTTPLISTENEREXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3E4B640)
#define SYSTEM_NET_HTTPLISTENEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3E4B6B0)

namespace System::Net
{
	inline static constexpr unsigned int HttpListenerException_TypeDefinitionIndex = 14859;

	class HttpListenerException : public ::System::ComponentModel::Win32Exception
	{
	public:
		::System::Void _ctor(::E519989062D53DE5* EE8EA789BF8D394F, ::B6564CAC678AC465 B2E673F362AA060E)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENEREXCEPTION__CTOR_OFFSET))(this, EE8EA789BF8D394F, B2E673F362AA060E);
		}

		::System::Void _ctor_1(::System::Int32 B3F53603F39CD6A9, ::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENEREXCEPTION__CTOR_1_OFFSET))(this, B3F53603F39CD6A9, B083BE7841B347C4);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENEREXCEPTION__CTOR_2_OFFSET))(this);
		}
	};
}
