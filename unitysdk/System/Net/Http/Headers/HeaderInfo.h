#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/HttpHeaderKind.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Net::Http::Headers { class HttpHeaders; }

#define SYSTEM_NET_HTTP_HEADERS_HEADERINFO_CREATECOLLECTION_OFFSET UNITYSDK_OFFSET(0x1EE4ED20)
#define SYSTEM_NET_HTTP_HEADERS_HEADERINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE4ED10)
#define SYSTEM_NET_HTTP_HEADERS_HEADERINFO_GET_CUSTOMTOSTRING_OFFSET UNITYSDK_OFFSET(0x1EE4EDC0)
#define SYSTEM_NET_HTTP_HEADERS_HEADERINFO_GET_SEPARATOR_OFFSET UNITYSDK_OFFSET(0x1EE4EDE0)
#define SYSTEM_NET_HTTP_HEADERS_HEADERINFO_SET_CUSTOMTOSTRING_OFFSET UNITYSDK_OFFSET(0x1EE4EDD0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HeaderInfo_TypeDefinitionIndex = 3788;

	class HeaderInfo : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::Func_2<::System::Object*, ::System::String*>* _CustomToString_k__BackingField; // 0x18
		::System::Net::Http::Headers::HttpHeaderKind HeaderKind; // 0x20
		::System::Boolean AllowsMany; // 0x24
		::System::Void _ctor(::System::String* a1, ::System::Net::Http::Headers::HttpHeaderKind a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::Http::Headers::HttpHeaderKind))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HEADERINFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* CreateCollection(::System::Net::Http::Headers::HttpHeaders* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Net::Http::Headers::HttpHeaders*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HEADERINFO_CREATECOLLECTION_OFFSET))(this, a1);
		}

		::System::Func_2<::System::Object*, ::System::String*>* get_CustomToString()
		{
			return ((::System::Func_2<::System::Object*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HEADERINFO_GET_CUSTOMTOSTRING_OFFSET))(this);
		}

		::System::Void set_CustomToString(::System::Func_2<::System::Object*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Object*, ::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HEADERINFO_SET_CUSTOMTOSTRING_OFFSET))(this, a1);
		}

		::System::String* get_Separator()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HEADERINFO_GET_SEPARATOR_OFFSET))(this);
		}

	};
}
