#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIMLFNKOCLN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OIMLFNKOCLN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE74520)
#define OIMLFNKOCLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE745C0)
#define OIMLFNKOCLN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE74210)
#define OIMLFNKOCLN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE741E0)
#define OIMLFNKOCLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE741D0)
#define OIMLFNKOCLN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE74320)
#define OIMLFNKOCLN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE74250)
#define OIMLFNKOCLN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE74480)
#define OIMLFNKOCLN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE74190)
#define OIMLFNKOCLN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE74570)
#define OIMLFNKOCLN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE74540)
#define OIMLFNKOCLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE741C0)
#define OIMLFNKOCLN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE744B0)
#define OIMLFNKOCLN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE74510)

	class OIMLFNKOCLN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OIMLFNKOCLN")->GetStaticField(0x1D5D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMLFNKOCLN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OIMLFNKOCLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIMLFNKOCLN*))((::PBYTE)hIl2Cpp + OIMLFNKOCLN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIMLFNKOCLN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OIMLFNKOCLN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMLFNKOCLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OIMLFNKOCLN* Clone()
		{
			return ((::OIMLFNKOCLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMLFNKOCLN_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIMLFNKOCLN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OIMLFNKOCLN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OIMLFNKOCLN*))((::PBYTE)hIl2Cpp + OIMLFNKOCLN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMLFNKOCLN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMLFNKOCLN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OIMLFNKOCLN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMLFNKOCLN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OIMLFNKOCLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIMLFNKOCLN*))((::PBYTE)hIl2Cpp + OIMLFNKOCLN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OIMLFNKOCLN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
