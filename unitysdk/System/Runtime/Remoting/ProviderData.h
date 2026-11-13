#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IList; }
namespace System::Runtime::Remoting { class ProviderData; }

#define SYSTEM_RUNTIME_REMOTING_PROVIDERDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1A720C10)
#define SYSTEM_RUNTIME_REMOTING_PROVIDERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A721900)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ProviderData_TypeDefinitionIndex = 1215;

	class ProviderData : public ::System::Object
	{
	public:
		::System::String* Ref; // 0x10
		::System::Collections::IList* CustomData; // 0x18
		::System::String* Type; // 0x20
		::System::String* Id; // 0x28
		::System::Collections::Hashtable* CustomProperties; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROVIDERDATA_CTOR_OFFSET))(this);
		}

		::System::Void CopyFrom(::System::Runtime::Remoting::ProviderData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::ProviderData*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROVIDERDATA_COPYFROM_OFFSET))(this, a1);
		}

	};
}
