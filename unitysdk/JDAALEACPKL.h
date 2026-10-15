#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDAALEACPKL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JDAALEACPKL_AOIAGOPLPHO_OFFSET UNITYSDK_OFFSET(0x1E705E50)
#define JDAALEACPKL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7061B0)
#define JDAALEACPKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7063D0)
#define JDAALEACPKL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E705E00)
#define JDAALEACPKL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E705DD0)
#define JDAALEACPKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E705DC0)
#define JDAALEACPKL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E705F30)
#define JDAALEACPKL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E705E60)
#define JDAALEACPKL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7060A0)
#define JDAALEACPKL_GNBHJPJKCNE_OFFSET UNITYSDK_OFFSET(0x1E705E40)
#define JDAALEACPKL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E705D80)
#define JDAALEACPKL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E706270)
#define JDAALEACPKL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E706240)
#define JDAALEACPKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E705DB0)
#define JDAALEACPKL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7060D0)
#define JDAALEACPKL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E706130)

	class JDAALEACPKL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BPHDNNEOBIH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JDAALEACPKL")->GetStaticField(0x5DA10);
		}

		// static const ::System::Object POJHDFPIFCJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAALEACPKL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JDAALEACPKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDAALEACPKL*))((::PBYTE)hIl2Cpp + JDAALEACPKL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDAALEACPKL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JDAALEACPKL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAALEACPKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JDAALEACPKL* Clone()
		{
			return ((::JDAALEACPKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAALEACPKL_CLONE_OFFSET))(this);
		}

		::System::UInt32 GNBHJPJKCNE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAALEACPKL_GNBHJPJKCNE_OFFSET))(this);
		}

		::System::Void AOIAGOPLPHO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDAALEACPKL_AOIAGOPLPHO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDAALEACPKL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JDAALEACPKL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JDAALEACPKL*))((::PBYTE)hIl2Cpp + JDAALEACPKL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAALEACPKL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAALEACPKL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JDAALEACPKL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAALEACPKL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JDAALEACPKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDAALEACPKL*))((::PBYTE)hIl2Cpp + JDAALEACPKL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JDAALEACPKL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
