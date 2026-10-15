#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CILKIOLEJFJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CILKIOLEJFJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0D5D90)
#define CILKIOLEJFJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D5FB0)
#define CILKIOLEJFJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0D59E0)
#define CILKIOLEJFJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0D59B0)
#define CILKIOLEJFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D59A0)
#define CILKIOLEJFJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0D5B10)
#define CILKIOLEJFJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0D5A40)
#define CILKIOLEJFJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0D5A30)
#define CILKIOLEJFJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0D5C80)
#define CILKIOLEJFJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0D5960)
#define CILKIOLEJFJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0D5E50)
#define CILKIOLEJFJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0D5E20)
#define CILKIOLEJFJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0D5A20)
#define CILKIOLEJFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0D5990)
#define CILKIOLEJFJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0D5CB0)
#define CILKIOLEJFJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0D5D10)

	class CILKIOLEJFJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CILKIOLEJFJ")->GetStaticField(0x187A0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CILKIOLEJFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CILKIOLEJFJ*))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CILKIOLEJFJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CILKIOLEJFJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CILKIOLEJFJ* Clone()
		{
			return ((::CILKIOLEJFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CILKIOLEJFJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CILKIOLEJFJ*))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CILKIOLEJFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CILKIOLEJFJ*))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
