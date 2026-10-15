#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMDACCNEEPL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BMDACCNEEPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E022AE0)
#define BMDACCNEEPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E022B80)
#define BMDACCNEEPL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0227D0)
#define BMDACCNEEPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0227A0)
#define BMDACCNEEPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E022790)
#define BMDACCNEEPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0228E0)
#define BMDACCNEEPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E022810)
#define BMDACCNEEPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E022A40)
#define BMDACCNEEPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E022750)
#define BMDACCNEEPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E022B30)
#define BMDACCNEEPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E022B00)
#define BMDACCNEEPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E022780)
#define BMDACCNEEPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E022A70)
#define BMDACCNEEPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E022AD0)

	class BMDACCNEEPL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BMDACCNEEPL")->GetStaticField(0x4FEF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDACCNEEPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BMDACCNEEPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMDACCNEEPL*))((::PBYTE)hIl2Cpp + BMDACCNEEPL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMDACCNEEPL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BMDACCNEEPL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDACCNEEPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BMDACCNEEPL* Clone()
		{
			return ((::BMDACCNEEPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDACCNEEPL_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMDACCNEEPL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BMDACCNEEPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMDACCNEEPL*))((::PBYTE)hIl2Cpp + BMDACCNEEPL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDACCNEEPL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDACCNEEPL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BMDACCNEEPL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDACCNEEPL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BMDACCNEEPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMDACCNEEPL*))((::PBYTE)hIl2Cpp + BMDACCNEEPL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BMDACCNEEPL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
