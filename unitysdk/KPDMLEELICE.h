#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPDMLEELICE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KPDMLEELICE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E88DDB0)
#define KPDMLEELICE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E88E080)
#define KPDMLEELICE_CDHEPOFDMPP_OFFSET UNITYSDK_OFFSET(0x1E88DA80)
#define KPDMLEELICE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E88DA00)
#define KPDMLEELICE_CPJGHGBBIMJ_OFFSET UNITYSDK_OFFSET(0x1E88DA60)
#define KPDMLEELICE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E88D9D0)
#define KPDMLEELICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E88D9C0)
#define KPDMLEELICE_DEKGFFNILPD_OFFSET UNITYSDK_OFFSET(0x1E88DA50)
#define KPDMLEELICE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E88DB70)
#define KPDMLEELICE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E88DA90)
#define KPDMLEELICE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E88DC40)
#define KPDMLEELICE_JHBKBFPJGPB_OFFSET UNITYSDK_OFFSET(0x1E88DA70)
#define KPDMLEELICE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E88D980)
#define KPDMLEELICE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E88DF00)
#define KPDMLEELICE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E88DEC0)
#define KPDMLEELICE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E88D9B0)
#define KPDMLEELICE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E88DC70)
#define KPDMLEELICE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E88DCD0)

inline static constexpr unsigned int KPDMLEELICE_TypeDefinitionIndex = 33284;

	class KPDMLEELICE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OGCMNCBOEJG; // 0x18
		::System::UInt32 GLFLHLCNOOH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KPDMLEELICE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KPDMLEELICE*>**)UnitySDK::FromName("", "KPDMLEELICE")->GetStaticField(0x22530);
		}

		// static const ::System::Object OPJGBPJDMKH; // 0x0
		// static const ::System::Object HDGKLMKGNND; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDMLEELICE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KPDMLEELICE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPDMLEELICE*))((::PBYTE)hIl2Cpp + KPDMLEELICE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPDMLEELICE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KPDMLEELICE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KPDMLEELICE*>*(*)())((::PBYTE)hIl2Cpp + KPDMLEELICE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDMLEELICE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KPDMLEELICE* Clone()
		{
			return ((::KPDMLEELICE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDMLEELICE_CLONE_OFFSET))(this);
		}

		::System::UInt32 DEKGFFNILPD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDMLEELICE_DEKGFFNILPD_OFFSET))(this);
		}

		::System::Void CPJGHGBBIMJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPDMLEELICE_CPJGHGBBIMJ_OFFSET))(this, a1);
		}

		::System::UInt32 JHBKBFPJGPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDMLEELICE_JHBKBFPJGPB_OFFSET))(this);
		}

		::System::Void CDHEPOFDMPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPDMLEELICE_CDHEPOFDMPP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPDMLEELICE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KPDMLEELICE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KPDMLEELICE*))((::PBYTE)hIl2Cpp + KPDMLEELICE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDMLEELICE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDMLEELICE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KPDMLEELICE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDMLEELICE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KPDMLEELICE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPDMLEELICE*))((::PBYTE)hIl2Cpp + KPDMLEELICE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KPDMLEELICE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
