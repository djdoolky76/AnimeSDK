#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Xml { class SecureStringHasher_HashCodeOfStringDelegate; }

#define SYSTEM_XML_SECURESTRINGHASHER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EEC58D0)
#define SYSTEM_XML_SECURESTRINGHASHER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EEC5920)
#define SYSTEM_XML_SECURESTRINGHASHER_GETHASHCODEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1EEC59B0)
#define SYSTEM_XML_SECURESTRINGHASHER_GETHASHCODEOFSTRING_OFFSET UNITYSDK_OFFSET(0x1EEC5AF0)
#define SYSTEM_XML_SECURESTRINGHASHER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EEC5940)

namespace System::Xml
{
	inline static constexpr unsigned int SecureStringHasher_TypeDefinitionIndex = 1826;

	class SecureStringHasher : public ::System::Object
	{
	public:
		::System::Int32 hashCodeRandomizer; // 0x10
		static ::System::Xml::SecureStringHasher_HashCodeOfStringDelegate** StaticGet_hashCodeDelegate()
		{
			return (::System::Xml::SecureStringHasher_HashCodeOfStringDelegate**)UnitySDK::FromName("System.Xml", "SecureStringHasher")->GetStaticField(0x30900);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SECURESTRINGHASHER_CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SECURESTRINGHASHER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SECURESTRINGHASHER_GETHASHCODE_OFFSET))(this, a1);
		}

		static ::System::Int32 GetHashCodeOfString(::System::String* a1, ::System::Int32 a2, ::System::Int64 a3)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SECURESTRINGHASHER_GETHASHCODEOFSTRING_OFFSET))(a1, a2, a3);
		}

		static ::System::Xml::SecureStringHasher_HashCodeOfStringDelegate* GetHashCodeDelegate()
		{
			return ((::System::Xml::SecureStringHasher_HashCodeOfStringDelegate*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SECURESTRINGHASHER_GETHASHCODEDELEGATE_OFFSET))();
		}

	};
}
