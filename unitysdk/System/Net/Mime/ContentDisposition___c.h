#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_MIME_CONTENTDISPOSITION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBE9AF0)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBE9B30)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION___C___CCTOR_B__13_0_OFFSET UNITYSDK_OFFSET(0x1CBE9B40)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION___C___CCTOR_B__13_1_OFFSET UNITYSDK_OFFSET(0x1CBE9BF0)

namespace System::Net::Mime
{
	inline static constexpr unsigned int ContentDisposition___c_TypeDefinitionIndex = 3609;

	class ContentDisposition___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ContentDisposition___c_TypeDefinitionIndex)->GetStaticField(0x2C40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION___C__CTOR_OFFSET))(this);
		}

		::System::Object* __cctor_b__13_0(::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION___C___CCTOR_B__13_0_OFFSET))(this, value);
		}

		::System::Object* __cctor_b__13_1(::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION___C___CCTOR_B__13_1_OFFSET))(this, value);
		}
	};
}
