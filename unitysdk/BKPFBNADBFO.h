#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKPFBNADBFO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BKPFBNADBFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF5C590)
#define BKPFBNADBFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF5C630)
#define BKPFBNADBFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF5C280)
#define BKPFBNADBFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF5C250)
#define BKPFBNADBFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF5C240)
#define BKPFBNADBFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF5C390)
#define BKPFBNADBFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF5C2C0)
#define BKPFBNADBFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF5C4F0)
#define BKPFBNADBFO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF5C200)
#define BKPFBNADBFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF5C5E0)
#define BKPFBNADBFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF5C5B0)
#define BKPFBNADBFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF5C230)
#define BKPFBNADBFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF5C520)
#define BKPFBNADBFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF5C580)

	class BKPFBNADBFO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BKPFBNADBFO")->GetStaticField(0x4C140);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPFBNADBFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BKPFBNADBFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKPFBNADBFO*))((::PBYTE)hIl2Cpp + BKPFBNADBFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKPFBNADBFO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BKPFBNADBFO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPFBNADBFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BKPFBNADBFO* Clone()
		{
			return ((::BKPFBNADBFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPFBNADBFO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BKPFBNADBFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BKPFBNADBFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BKPFBNADBFO*))((::PBYTE)hIl2Cpp + BKPFBNADBFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPFBNADBFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPFBNADBFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BKPFBNADBFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPFBNADBFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BKPFBNADBFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKPFBNADBFO*))((::PBYTE)hIl2Cpp + BKPFBNADBFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BKPFBNADBFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
