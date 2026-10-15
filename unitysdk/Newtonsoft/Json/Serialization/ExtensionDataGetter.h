#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATAGETTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C3DFEC0)
#define NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATAGETTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3DFDC0)
#define NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATAGETTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C3DFEF0)
#define NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATAGETTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C3DFEB0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int ExtensionDataGetter_TypeDefinitionIndex = 9724;

	class ExtensionDataGetter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATAGETTER_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair*>* Invoke(::System::Object* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair*>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATAGETTER_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATAGETTER_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair*>* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair*>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATAGETTER_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
