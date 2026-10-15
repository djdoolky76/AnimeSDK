#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLFJAELPOPL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HLFJAELPOPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5BD8C0)
#define HLFJAELPOPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5BD960)
#define HLFJAELPOPL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5BD5B0)
#define HLFJAELPOPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5BD580)
#define HLFJAELPOPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BD570)
#define HLFJAELPOPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5BD6C0)
#define HLFJAELPOPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5BD5F0)
#define HLFJAELPOPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5BD820)
#define HLFJAELPOPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5BD530)
#define HLFJAELPOPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5BD910)
#define HLFJAELPOPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5BD8E0)
#define HLFJAELPOPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5BD560)
#define HLFJAELPOPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5BD850)
#define HLFJAELPOPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5BD8B0)

	class HLFJAELPOPL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HLFJAELPOPL")->GetStaticField(0x47D20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFJAELPOPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HLFJAELPOPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLFJAELPOPL*))((::PBYTE)hIl2Cpp + HLFJAELPOPL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLFJAELPOPL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HLFJAELPOPL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFJAELPOPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HLFJAELPOPL* Clone()
		{
			return ((::HLFJAELPOPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFJAELPOPL_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLFJAELPOPL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HLFJAELPOPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HLFJAELPOPL*))((::PBYTE)hIl2Cpp + HLFJAELPOPL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFJAELPOPL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFJAELPOPL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HLFJAELPOPL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFJAELPOPL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HLFJAELPOPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLFJAELPOPL*))((::PBYTE)hIl2Cpp + HLFJAELPOPL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HLFJAELPOPL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
