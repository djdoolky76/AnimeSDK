#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHJGEGJAODM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GHJGEGJAODM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E48BF40)
#define GHJGEGJAODM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E48C160)
#define GHJGEGJAODM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E48BB90)
#define GHJGEGJAODM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E48BB60)
#define GHJGEGJAODM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E48BB50)
#define GHJGEGJAODM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E48BCC0)
#define GHJGEGJAODM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E48BBF0)
#define GHJGEGJAODM_FEBAAKOEDBM_OFFSET UNITYSDK_OFFSET(0x1E48BBE0)
#define GHJGEGJAODM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E48BE30)
#define GHJGEGJAODM_HHNOCOEPMEH_OFFSET UNITYSDK_OFFSET(0x1E48BBD0)
#define GHJGEGJAODM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E48BB10)
#define GHJGEGJAODM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E48C000)
#define GHJGEGJAODM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E48BFD0)
#define GHJGEGJAODM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E48BB40)
#define GHJGEGJAODM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E48BE60)
#define GHJGEGJAODM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E48BEC0)

inline static constexpr unsigned int GHJGEGJAODM_TypeDefinitionIndex = 29095;

	class GHJGEGJAODM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PPCKJOJIPEK; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GHJGEGJAODM")->GetStaticField(0x17300);
		}

		// static const ::System::Object IGBPOIIKLCM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJGEGJAODM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GHJGEGJAODM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHJGEGJAODM*))((::PBYTE)hIl2Cpp + GHJGEGJAODM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHJGEGJAODM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GHJGEGJAODM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJGEGJAODM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GHJGEGJAODM* Clone()
		{
			return ((::GHJGEGJAODM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJGEGJAODM_CLONE_OFFSET))(this);
		}

		::System::UInt32 HHNOCOEPMEH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJGEGJAODM_HHNOCOEPMEH_OFFSET))(this);
		}

		::System::Void FEBAAKOEDBM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHJGEGJAODM_FEBAAKOEDBM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHJGEGJAODM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GHJGEGJAODM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHJGEGJAODM*))((::PBYTE)hIl2Cpp + GHJGEGJAODM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJGEGJAODM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJGEGJAODM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GHJGEGJAODM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJGEGJAODM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GHJGEGJAODM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHJGEGJAODM*))((::PBYTE)hIl2Cpp + GHJGEGJAODM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GHJGEGJAODM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
