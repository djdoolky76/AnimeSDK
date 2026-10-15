#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_SERIALIZATION_RESOLVERCONTRACTKEY_CTOR_OFFSET UNITYSDK_OFFSET(0x10480)
#define NEWTONSOFT_JSON_SERIALIZATION_RESOLVERCONTRACTKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2F0BEE0)
#define NEWTONSOFT_JSON_SERIALIZATION_RESOLVERCONTRACTKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C259B0)
#define NEWTONSOFT_JSON_SERIALIZATION_RESOLVERCONTRACTKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C259A0)

namespace Newtonsoft::Json::Serialization
{
	struct alignas(8) ResolverContractKey
	{
		::System::Type* _resolverType; // 0x10
		::System::Type* _contractType; // 0x18
		::System::Void _ctor(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_RESOLVERCONTRACTKEY_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_RESOLVERCONTRACTKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_RESOLVERCONTRACTKEY_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::Newtonsoft::Json::Serialization::ResolverContractKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Serialization::ResolverContractKey))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_RESOLVERCONTRACTKEY_EQUALS_1_OFFSET))(this, a1);
		}
		*/

	};
}
