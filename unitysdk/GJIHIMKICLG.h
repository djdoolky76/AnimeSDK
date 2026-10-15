#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJIHIMKICLG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GJIHIMKICLG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4A89A0)
#define GJIHIMKICLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4A8BC0)
#define GJIHIMKICLG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4A8590)
#define GJIHIMKICLG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4A8560)
#define GJIHIMKICLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A8550)
#define GJIHIMKICLG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4A8720)
#define GJIHIMKICLG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4A8620)
#define GJIHIMKICLG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4A8890)
#define GJIHIMKICLG_ILENOEKGDAM_OFFSET UNITYSDK_OFFSET(0x1E4A8610)
#define GJIHIMKICLG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4A84E0)
#define GJIHIMKICLG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4A8A60)
#define GJIHIMKICLG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4A8A30)
#define GJIHIMKICLG_OAAPHHFLPIH_OFFSET UNITYSDK_OFFSET(0x1E4A8600)
#define GJIHIMKICLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4A8540)
#define GJIHIMKICLG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4A88C0)
#define GJIHIMKICLG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4A8920)

	class GJIHIMKICLG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CPPKHBLOFLK; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GJIHIMKICLG")->GetStaticField(0x1BA60);
		}

		// static const ::System::Object GPOBIPDLLFM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJIHIMKICLG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GJIHIMKICLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJIHIMKICLG*))((::PBYTE)hIl2Cpp + GJIHIMKICLG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJIHIMKICLG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GJIHIMKICLG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJIHIMKICLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GJIHIMKICLG* Clone()
		{
			return ((::GJIHIMKICLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJIHIMKICLG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAAPHHFLPIH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJIHIMKICLG_OAAPHHFLPIH_OFFSET))(this);
		}

		::System::Void ILENOEKGDAM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GJIHIMKICLG_ILENOEKGDAM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJIHIMKICLG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GJIHIMKICLG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GJIHIMKICLG*))((::PBYTE)hIl2Cpp + GJIHIMKICLG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJIHIMKICLG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJIHIMKICLG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GJIHIMKICLG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJIHIMKICLG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GJIHIMKICLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJIHIMKICLG*))((::PBYTE)hIl2Cpp + GJIHIMKICLG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GJIHIMKICLG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
