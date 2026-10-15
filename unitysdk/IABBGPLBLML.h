#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IABBGPLBLML;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IABBGPLBLML_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E602650)
#define IABBGPLBLML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E602870)
#define IABBGPLBLML_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6022A0)
#define IABBGPLBLML_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E602270)
#define IABBGPLBLML_CTOR_OFFSET UNITYSDK_OFFSET(0x1E602260)
#define IABBGPLBLML_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6023D0)
#define IABBGPLBLML_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E602300)
#define IABBGPLBLML_GBLDNPABAJO_OFFSET UNITYSDK_OFFSET(0x1E6022E0)
#define IABBGPLBLML_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E602540)
#define IABBGPLBLML_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E602220)
#define IABBGPLBLML_KBDHFLGFKDH_OFFSET UNITYSDK_OFFSET(0x1E6022F0)
#define IABBGPLBLML_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E602710)
#define IABBGPLBLML_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6026E0)
#define IABBGPLBLML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E602250)
#define IABBGPLBLML_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E602570)
#define IABBGPLBLML_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6025D0)

	class IABBGPLBLML : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JEGLLEFCMCE; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IABBGPLBLML")->GetStaticField(0x52A20);
		}

		// static const ::System::Object MNDHIFGLPKI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABBGPLBLML_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IABBGPLBLML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IABBGPLBLML*))((::PBYTE)hIl2Cpp + IABBGPLBLML_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IABBGPLBLML_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IABBGPLBLML_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IABBGPLBLML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IABBGPLBLML* Clone()
		{
			return ((::IABBGPLBLML*(*)(::PVOID))((::PBYTE)hIl2Cpp + IABBGPLBLML_CLONE_OFFSET))(this);
		}

		::System::UInt32 GBLDNPABAJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IABBGPLBLML_GBLDNPABAJO_OFFSET))(this);
		}

		::System::Void KBDHFLGFKDH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IABBGPLBLML_KBDHFLGFKDH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IABBGPLBLML_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IABBGPLBLML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IABBGPLBLML*))((::PBYTE)hIl2Cpp + IABBGPLBLML_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IABBGPLBLML_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IABBGPLBLML_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IABBGPLBLML_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IABBGPLBLML_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IABBGPLBLML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IABBGPLBLML*))((::PBYTE)hIl2Cpp + IABBGPLBLML_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IABBGPLBLML_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
