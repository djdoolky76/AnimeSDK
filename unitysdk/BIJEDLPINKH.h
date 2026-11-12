#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIJEDLPINKH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BIJEDLPINKH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F160350)
#define BIJEDLPINKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1603F0)
#define BIJEDLPINKH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F160040)
#define BIJEDLPINKH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F160010)
#define BIJEDLPINKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F160000)
#define BIJEDLPINKH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F160150)
#define BIJEDLPINKH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F160080)
#define BIJEDLPINKH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F1602B0)
#define BIJEDLPINKH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F15FFC0)
#define BIJEDLPINKH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F1603A0)
#define BIJEDLPINKH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F160370)
#define BIJEDLPINKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F15FFF0)
#define BIJEDLPINKH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F1602E0)
#define BIJEDLPINKH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F160340)

inline static constexpr unsigned int BIJEDLPINKH_TypeDefinitionIndex = 30900;

	class BIJEDLPINKH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::BIJEDLPINKH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BIJEDLPINKH*>**)UnitySDK::FromName("", "BIJEDLPINKH")->GetStaticField(0x4A420);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJEDLPINKH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BIJEDLPINKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIJEDLPINKH*))((::PBYTE)hIl2Cpp + BIJEDLPINKH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIJEDLPINKH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BIJEDLPINKH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BIJEDLPINKH*>*(*)())((::PBYTE)hIl2Cpp + BIJEDLPINKH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJEDLPINKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BIJEDLPINKH* Clone()
		{
			return ((::BIJEDLPINKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJEDLPINKH_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BIJEDLPINKH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BIJEDLPINKH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BIJEDLPINKH*))((::PBYTE)hIl2Cpp + BIJEDLPINKH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJEDLPINKH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJEDLPINKH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BIJEDLPINKH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJEDLPINKH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BIJEDLPINKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIJEDLPINKH*))((::PBYTE)hIl2Cpp + BIJEDLPINKH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BIJEDLPINKH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
