#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/HttpHeaderKind.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Net::Http::Headers { class HttpHeaders; }

#define SYSTEM_NET_HTTP_HEADERS_HEADERINFO_CREATECOLLECTION_OFFSET UNITYSDK_OFFSET(0x1EAE1330)
#define SYSTEM_NET_HTTP_HEADERS_HEADERINFO_GET_SEPARATOR_OFFSET UNITYSDK_OFFSET(0x1EAE1350)
#define SYSTEM_NET_HTTP_HEADERS_HEADERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE1320)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HeaderInfo_TypeDefinitionIndex = 26077;

	class HeaderInfo : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::Func_2<::System::Object*, ::System::String*>* _CustomToString_k__BackingField; // 0x18
		::System::Net::Http::Headers::HttpHeaderKind HeaderKind; // 0x20
		::System::Boolean AllowsMany; // 0x24

		::System::Void _ctor(::System::String* name, ::System::Net::Http::Headers::HttpHeaderKind headerKind)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::Http::Headers::HttpHeaderKind))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HEADERINFO__CTOR_OFFSET))(this, name, headerKind);
		}

		::System::Object* CreateCollection(::System::Net::Http::Headers::HttpHeaders* headers)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Net::Http::Headers::HttpHeaders*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HEADERINFO_CREATECOLLECTION_OFFSET))(this, headers);
		}

		::System::String* get_Separator()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HEADERINFO_GET_SEPARATOR_OFFSET))(this);
		}
	};
}
