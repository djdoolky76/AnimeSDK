#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMCLGNGCCEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BMCLGNGCCEO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC6F380)
#define BMCLGNGCCEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC6F640)
#define BMCLGNGCCEO_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC6EF00)
#define BMCLGNGCCEO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC6EE70)
#define BMCLGNGCCEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6EE20)
#define BMCLGNGCCEO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC6F080)
#define BMCLGNGCCEO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC6EF60)
#define BMCLGNGCCEO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC6F170)
#define BMCLGNGCCEO_JHEFPOGNBND_OFFSET UNITYSDK_OFFSET(0x1FC6EF50)
#define BMCLGNGCCEO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC6EDB0)
#define BMCLGNGCCEO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC6F470)
#define BMCLGNGCCEO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC6F420)
#define BMCLGNGCCEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC6EE10)
#define BMCLGNGCCEO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC6F270)
#define BMCLGNGCCEO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC6F2D0)

inline static constexpr unsigned int BMCLGNGCCEO_TypeDefinitionIndex = 27343;

	class BMCLGNGCCEO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JLFDMJMJDND; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JKBHDLODNOE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "BMCLGNGCCEO")->GetStaticField(0x58D70);
		}

		static ::Google::Protobuf::MessageParser_1<::BMCLGNGCCEO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BMCLGNGCCEO*>**)UnitySDK::FromName("", "BMCLGNGCCEO")->GetStaticField(0x58D78);
		}

		// static const ::System::Object CPBPPPJBFGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMCLGNGCCEO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BMCLGNGCCEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMCLGNGCCEO*))((::PBYTE)hIl2Cpp + BMCLGNGCCEO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMCLGNGCCEO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BMCLGNGCCEO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BMCLGNGCCEO*>*(*)())((::PBYTE)hIl2Cpp + BMCLGNGCCEO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMCLGNGCCEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BMCLGNGCCEO* Clone()
		{
			return ((::BMCLGNGCCEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMCLGNGCCEO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JHEFPOGNBND()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMCLGNGCCEO_JHEFPOGNBND_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMCLGNGCCEO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BMCLGNGCCEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMCLGNGCCEO*))((::PBYTE)hIl2Cpp + BMCLGNGCCEO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMCLGNGCCEO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMCLGNGCCEO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BMCLGNGCCEO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMCLGNGCCEO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BMCLGNGCCEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMCLGNGCCEO*))((::PBYTE)hIl2Cpp + BMCLGNGCCEO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BMCLGNGCCEO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
