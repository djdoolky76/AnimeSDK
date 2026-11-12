#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGABEIOCONI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BGABEIOCONI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD31170)
#define BGABEIOCONI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD31390)
#define BGABEIOCONI_CDHEPOFDMPP_OFFSET UNITYSDK_OFFSET(0x1FD30DE0)
#define BGABEIOCONI_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD30D60)
#define BGABEIOCONI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD30D30)
#define BGABEIOCONI_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD30D20)
#define BGABEIOCONI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD30EF0)
#define BGABEIOCONI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD30DF0)
#define BGABEIOCONI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD31060)
#define BGABEIOCONI_JHBKBFPJGPB_OFFSET UNITYSDK_OFFSET(0x1FD30DD0)
#define BGABEIOCONI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD30CB0)
#define BGABEIOCONI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD31230)
#define BGABEIOCONI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD31200)
#define BGABEIOCONI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD30D10)
#define BGABEIOCONI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD31090)
#define BGABEIOCONI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD310F0)

inline static constexpr unsigned int BGABEIOCONI_TypeDefinitionIndex = 30295;

	class BGABEIOCONI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OGCMNCBOEJG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BGABEIOCONI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BGABEIOCONI*>**)UnitySDK::FromName("", "BGABEIOCONI")->GetStaticField(0x42BF0);
		}

		// static const ::System::Object HDGKLMKGNND; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGABEIOCONI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BGABEIOCONI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGABEIOCONI*))((::PBYTE)hIl2Cpp + BGABEIOCONI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGABEIOCONI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BGABEIOCONI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BGABEIOCONI*>*(*)())((::PBYTE)hIl2Cpp + BGABEIOCONI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGABEIOCONI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BGABEIOCONI* Clone()
		{
			return ((::BGABEIOCONI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGABEIOCONI_CLONE_OFFSET))(this);
		}

		::System::UInt32 JHBKBFPJGPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGABEIOCONI_JHBKBFPJGPB_OFFSET))(this);
		}

		::System::Void CDHEPOFDMPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGABEIOCONI_CDHEPOFDMPP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGABEIOCONI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BGABEIOCONI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGABEIOCONI*))((::PBYTE)hIl2Cpp + BGABEIOCONI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGABEIOCONI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGABEIOCONI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BGABEIOCONI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGABEIOCONI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BGABEIOCONI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGABEIOCONI*))((::PBYTE)hIl2Cpp + BGABEIOCONI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BGABEIOCONI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
