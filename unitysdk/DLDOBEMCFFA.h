#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLDOBEMCFFA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DLDOBEMCFFA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1E0FB0)
#define DLDOBEMCFFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1E11D0)
#define DLDOBEMCFFA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1E0C00)
#define DLDOBEMCFFA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1E0BD0)
#define DLDOBEMCFFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E0BC0)
#define DLDOBEMCFFA_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E1E0C40)
#define DLDOBEMCFFA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1E0D30)
#define DLDOBEMCFFA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1E0C60)
#define DLDOBEMCFFA_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E1E0C50)
#define DLDOBEMCFFA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1E0EA0)
#define DLDOBEMCFFA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1E0B80)
#define DLDOBEMCFFA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1E1070)
#define DLDOBEMCFFA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1E1040)
#define DLDOBEMCFFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1E0BB0)
#define DLDOBEMCFFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1E0ED0)
#define DLDOBEMCFFA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1E0F30)

	class DLDOBEMCFFA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GEMFJILOPLL; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DLDOBEMCFFA")->GetStaticField(0x3C390);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLDOBEMCFFA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DLDOBEMCFFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLDOBEMCFFA*))((::PBYTE)hIl2Cpp + DLDOBEMCFFA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLDOBEMCFFA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DLDOBEMCFFA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLDOBEMCFFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DLDOBEMCFFA* Clone()
		{
			return ((::DLDOBEMCFFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLDOBEMCFFA_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLDOBEMCFFA_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DLDOBEMCFFA_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DLDOBEMCFFA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DLDOBEMCFFA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DLDOBEMCFFA*))((::PBYTE)hIl2Cpp + DLDOBEMCFFA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLDOBEMCFFA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLDOBEMCFFA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DLDOBEMCFFA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLDOBEMCFFA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DLDOBEMCFFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLDOBEMCFFA*))((::PBYTE)hIl2Cpp + DLDOBEMCFFA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DLDOBEMCFFA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
