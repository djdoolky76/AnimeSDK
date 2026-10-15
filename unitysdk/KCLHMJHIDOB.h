#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCLHMJHIDOB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KCLHMJHIDOB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7F9D20)
#define KCLHMJHIDOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7F9FF0)
#define KCLHMJHIDOB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7F9920)
#define KCLHMJHIDOB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7F98F0)
#define KCLHMJHIDOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F98E0)
#define KCLHMJHIDOB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7F9AE0)
#define KCLHMJHIDOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7F99D0)
#define KCLHMJHIDOB_FFNNBDLOKLH_OFFSET UNITYSDK_OFFSET(0x1E7F9990)
#define KCLHMJHIDOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7F9BB0)
#define KCLHMJHIDOB_JGDJGILDNJF_OFFSET UNITYSDK_OFFSET(0x1E7F99C0)
#define KCLHMJHIDOB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7F9870)
#define KCLHMJHIDOB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7F9E70)
#define KCLHMJHIDOB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7F9E30)
#define KCLHMJHIDOB_NNBAOEHFDJM_OFFSET UNITYSDK_OFFSET(0x1E7F99B0)
#define KCLHMJHIDOB_ONNJNAPGLEG_OFFSET UNITYSDK_OFFSET(0x1E7F99A0)
#define KCLHMJHIDOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7F98D0)
#define KCLHMJHIDOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7F9BE0)
#define KCLHMJHIDOB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7F9C40)

	class KCLHMJHIDOB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MEPOEBNNJMI; // 0x18
		::System::UInt32 MJLPADMLMIC; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KCLHMJHIDOB")->GetStaticField(0x10250);
		}

		// static const ::System::Object IINLIAJDKKA; // 0x0
		// static const ::System::Object AGGOGPLGGOE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLHMJHIDOB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KCLHMJHIDOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCLHMJHIDOB*))((::PBYTE)hIl2Cpp + KCLHMJHIDOB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCLHMJHIDOB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KCLHMJHIDOB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLHMJHIDOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KCLHMJHIDOB* Clone()
		{
			return ((::KCLHMJHIDOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLHMJHIDOB_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFNNBDLOKLH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLHMJHIDOB_FFNNBDLOKLH_OFFSET))(this);
		}

		::System::Void ONNJNAPGLEG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KCLHMJHIDOB_ONNJNAPGLEG_OFFSET))(this, a1);
		}

		::System::UInt32 NNBAOEHFDJM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLHMJHIDOB_NNBAOEHFDJM_OFFSET))(this);
		}

		::System::Void JGDJGILDNJF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KCLHMJHIDOB_JGDJGILDNJF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCLHMJHIDOB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KCLHMJHIDOB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KCLHMJHIDOB*))((::PBYTE)hIl2Cpp + KCLHMJHIDOB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLHMJHIDOB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLHMJHIDOB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KCLHMJHIDOB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLHMJHIDOB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KCLHMJHIDOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCLHMJHIDOB*))((::PBYTE)hIl2Cpp + KCLHMJHIDOB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KCLHMJHIDOB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
