#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MENCBJMOEML;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MENCBJMOEML_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA11770)
#define MENCBJMOEML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA11A00)
#define MENCBJMOEML_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA11390)
#define MENCBJMOEML_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA11360)
#define MENCBJMOEML_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA11350)
#define MENCBJMOEML_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA114D0)
#define MENCBJMOEML_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA11400)
#define MENCBJMOEML_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA11640)
#define MENCBJMOEML_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA11310)
#define MENCBJMOEML_LFFBJPAANPK_OFFSET UNITYSDK_OFFSET(0x1EA113F0)
#define MENCBJMOEML_LPIJKBNFEEP_OFFSET UNITYSDK_OFFSET(0x1EA113E0)
#define MENCBJMOEML_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA118A0)
#define MENCBJMOEML_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA11860)
#define MENCBJMOEML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA11340)
#define MENCBJMOEML_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA11680)
#define MENCBJMOEML_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA116E0)

	class MENCBJMOEML : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 CMKPAGJOPMB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MENCBJMOEML")->GetStaticField(0x4B370);
		}

		// static const ::System::Object JKCCMACNANL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENCBJMOEML_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MENCBJMOEML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MENCBJMOEML*))((::PBYTE)hIl2Cpp + MENCBJMOEML_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MENCBJMOEML_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MENCBJMOEML_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MENCBJMOEML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MENCBJMOEML* Clone()
		{
			return ((::MENCBJMOEML*(*)(::PVOID))((::PBYTE)hIl2Cpp + MENCBJMOEML_CLONE_OFFSET))(this);
		}

		::System::UInt64 LPIJKBNFEEP()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MENCBJMOEML_LPIJKBNFEEP_OFFSET))(this);
		}

		::System::Void LFFBJPAANPK(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MENCBJMOEML_LFFBJPAANPK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MENCBJMOEML_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MENCBJMOEML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MENCBJMOEML*))((::PBYTE)hIl2Cpp + MENCBJMOEML_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MENCBJMOEML_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MENCBJMOEML_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MENCBJMOEML_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MENCBJMOEML_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MENCBJMOEML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MENCBJMOEML*))((::PBYTE)hIl2Cpp + MENCBJMOEML_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MENCBJMOEML_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
