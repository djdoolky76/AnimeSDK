#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMHGIMGMOCJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KMHGIMGMOCJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E89AB10)
#define KMHGIMGMOCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E89AD30)
#define KMHGIMGMOCJ_CEOLKAELGBC_OFFSET UNITYSDK_OFFSET(0x1E89A7B0)
#define KMHGIMGMOCJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E89A760)
#define KMHGIMGMOCJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E89A730)
#define KMHGIMGMOCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E89A720)
#define KMHGIMGMOCJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E89A890)
#define KMHGIMGMOCJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E89A7C0)
#define KMHGIMGMOCJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E89AA00)
#define KMHGIMGMOCJ_IBJHNNDJNLN_OFFSET UNITYSDK_OFFSET(0x1E89A7A0)
#define KMHGIMGMOCJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E89A6E0)
#define KMHGIMGMOCJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E89ABD0)
#define KMHGIMGMOCJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E89ABA0)
#define KMHGIMGMOCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E89A710)
#define KMHGIMGMOCJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E89AA30)
#define KMHGIMGMOCJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E89AA90)

inline static constexpr unsigned int KMHGIMGMOCJ_TypeDefinitionIndex = 34175;

	class KMHGIMGMOCJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IMMNBFEDEIC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KMHGIMGMOCJ")->GetStaticField(0x22530);
		}

		// static const ::System::Object HNJHIDACEIM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHGIMGMOCJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KMHGIMGMOCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMHGIMGMOCJ*))((::PBYTE)hIl2Cpp + KMHGIMGMOCJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMHGIMGMOCJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KMHGIMGMOCJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHGIMGMOCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KMHGIMGMOCJ* Clone()
		{
			return ((::KMHGIMGMOCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHGIMGMOCJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 IBJHNNDJNLN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHGIMGMOCJ_IBJHNNDJNLN_OFFSET))(this);
		}

		::System::Void CEOLKAELGBC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMHGIMGMOCJ_CEOLKAELGBC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMHGIMGMOCJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KMHGIMGMOCJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KMHGIMGMOCJ*))((::PBYTE)hIl2Cpp + KMHGIMGMOCJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHGIMGMOCJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHGIMGMOCJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KMHGIMGMOCJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHGIMGMOCJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KMHGIMGMOCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMHGIMGMOCJ*))((::PBYTE)hIl2Cpp + KMHGIMGMOCJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KMHGIMGMOCJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
