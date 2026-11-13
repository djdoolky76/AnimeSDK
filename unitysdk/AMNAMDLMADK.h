#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMNAMDLMADK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AMNAMDLMADK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x201963B0)
#define AMNAMDLMADK_CCTOR_OFFSET UNITYSDK_OFFSET(0x20196680)
#define AMNAMDLMADK_CLONE_OFFSET UNITYSDK_OFFSET(0x20195FB0)
#define AMNAMDLMADK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20195F80)
#define AMNAMDLMADK_CTOR_OFFSET UNITYSDK_OFFSET(0x20195F70)
#define AMNAMDLMADK_DKHEMJGCFIA_OFFSET UNITYSDK_OFFSET(0x20196020)
#define AMNAMDLMADK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20196170)
#define AMNAMDLMADK_EQUALS_OFFSET UNITYSDK_OFFSET(0x20196060)
#define AMNAMDLMADK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20196240)
#define AMNAMDLMADK_IOAIMNHMPEL_OFFSET UNITYSDK_OFFSET(0x20196050)
#define AMNAMDLMADK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20195F00)
#define AMNAMDLMADK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20196500)
#define AMNAMDLMADK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x201964C0)
#define AMNAMDLMADK_NGDELCBPBHO_OFFSET UNITYSDK_OFFSET(0x20196040)
#define AMNAMDLMADK_OLPCNEADPCP_OFFSET UNITYSDK_OFFSET(0x20196030)
#define AMNAMDLMADK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20195F60)
#define AMNAMDLMADK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20196270)
#define AMNAMDLMADK_WRITETO_OFFSET UNITYSDK_OFFSET(0x201962D0)

inline static constexpr unsigned int AMNAMDLMADK_TypeDefinitionIndex = 29758;

	class AMNAMDLMADK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LIPPAMNIABK; // 0x18
		::System::UInt32 IJDGOPFHKMG; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::AMNAMDLMADK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AMNAMDLMADK*>**)UnitySDK::FromName("", "AMNAMDLMADK")->GetStaticField(0x10890);
		}

		// static const ::System::Object EBMJNLIEPFI; // 0x0
		// static const ::System::Object FEPGGEDEKMK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNAMDLMADK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AMNAMDLMADK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMNAMDLMADK*))((::PBYTE)hIl2Cpp + AMNAMDLMADK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMNAMDLMADK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AMNAMDLMADK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AMNAMDLMADK*>*(*)())((::PBYTE)hIl2Cpp + AMNAMDLMADK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNAMDLMADK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AMNAMDLMADK* Clone()
		{
			return ((::AMNAMDLMADK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNAMDLMADK_CLONE_OFFSET))(this);
		}

		::System::UInt32 DKHEMJGCFIA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNAMDLMADK_DKHEMJGCFIA_OFFSET))(this);
		}

		::System::Void OLPCNEADPCP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMNAMDLMADK_OLPCNEADPCP_OFFSET))(this, a1);
		}

		::System::UInt32 NGDELCBPBHO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNAMDLMADK_NGDELCBPBHO_OFFSET))(this);
		}

		::System::Void IOAIMNHMPEL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMNAMDLMADK_IOAIMNHMPEL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMNAMDLMADK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AMNAMDLMADK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AMNAMDLMADK*))((::PBYTE)hIl2Cpp + AMNAMDLMADK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNAMDLMADK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNAMDLMADK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AMNAMDLMADK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNAMDLMADK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AMNAMDLMADK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMNAMDLMADK*))((::PBYTE)hIl2Cpp + AMNAMDLMADK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AMNAMDLMADK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
