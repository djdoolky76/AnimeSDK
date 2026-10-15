#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBFCKPFCNBD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DBFCKPFCNBD_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E12BA60)
#define DBFCKPFCNBD_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E12BA70)
#define DBFCKPFCNBD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E12BDA0)
#define DBFCKPFCNBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E12C070)
#define DBFCKPFCNBD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E12B9F0)
#define DBFCKPFCNBD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E12B9C0)
#define DBFCKPFCNBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E12B9B0)
#define DBFCKPFCNBD_DGFHKHPFDJP_OFFSET UNITYSDK_OFFSET(0x1E12BA50)
#define DBFCKPFCNBD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E12BB60)
#define DBFCKPFCNBD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E12BA80)
#define DBFCKPFCNBD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E12BC30)
#define DBFCKPFCNBD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E12B970)
#define DBFCKPFCNBD_KLGCEOIKOAM_OFFSET UNITYSDK_OFFSET(0x1E12BA40)
#define DBFCKPFCNBD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E12BEF0)
#define DBFCKPFCNBD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E12BEB0)
#define DBFCKPFCNBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E12B9A0)
#define DBFCKPFCNBD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E12BC60)
#define DBFCKPFCNBD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E12BCC0)

inline static constexpr unsigned int DBFCKPFCNBD_TypeDefinitionIndex = 26358;

	class DBFCKPFCNBD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		::System::UInt32 ENBHGNLCJGJ; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::DBFCKPFCNBD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DBFCKPFCNBD*>**)UnitySDK::FromName("", "DBFCKPFCNBD")->GetStaticField(0x225E0);
		}

		// static const ::System::Object GEDMKNBINHK; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFCKPFCNBD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DBFCKPFCNBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBFCKPFCNBD*))((::PBYTE)hIl2Cpp + DBFCKPFCNBD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBFCKPFCNBD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DBFCKPFCNBD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DBFCKPFCNBD*>*(*)())((::PBYTE)hIl2Cpp + DBFCKPFCNBD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFCKPFCNBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DBFCKPFCNBD* Clone()
		{
			return ((::DBFCKPFCNBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFCKPFCNBD_CLONE_OFFSET))(this);
		}

		::System::UInt32 KLGCEOIKOAM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFCKPFCNBD_KLGCEOIKOAM_OFFSET))(this);
		}

		::System::Void DGFHKHPFDJP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBFCKPFCNBD_DGFHKHPFDJP_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFCKPFCNBD_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBFCKPFCNBD_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBFCKPFCNBD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DBFCKPFCNBD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DBFCKPFCNBD*))((::PBYTE)hIl2Cpp + DBFCKPFCNBD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFCKPFCNBD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFCKPFCNBD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DBFCKPFCNBD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFCKPFCNBD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DBFCKPFCNBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBFCKPFCNBD*))((::PBYTE)hIl2Cpp + DBFCKPFCNBD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DBFCKPFCNBD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
