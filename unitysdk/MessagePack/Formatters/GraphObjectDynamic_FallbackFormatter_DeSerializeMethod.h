#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/MessagePack/MessagePackReader.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_DESERIALIZEMETHOD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EF18B30)
#define MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_DESERIALIZEMETHOD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EF18BC0)
#define MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_DESERIALIZEMETHOD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EF18560)
#define MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_DESERIALIZEMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF18550)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int GraphObjectDynamic_FallbackFormatter_DeSerializeMethod_TypeDefinitionIndex = 30095;

	class GraphObjectDynamic_FallbackFormatter_DeSerializeMethod : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_DESERIALIZEMETHOD__CTOR_OFFSET))(this, object, method);
		}

		::System::Object* Invoke(::System::Object* dynamicFormatter, ::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_DESERIALIZEMETHOD_INVOKE_OFFSET))(this, dynamicFormatter, reader, options);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* dynamicFormatter, ::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_DESERIALIZEMETHOD_BEGININVOKE_OFFSET))(this, dynamicFormatter, reader, options, callback, object);
		}

		::System::Object* EndInvoke(::MessagePack::MessagePackReader& reader, ::System::IAsyncResult* result)
		{
			return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_DESERIALIZEMETHOD_ENDINVOKE_OFFSET))(this, reader, result);
		}
	};
}
