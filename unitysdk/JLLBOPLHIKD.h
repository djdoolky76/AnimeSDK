#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFGIHHJGCFA;
class JLLBOPLHIKD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JLLBOPLHIKD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7809A0)
#define JLLBOPLHIKD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E780D40)
#define JLLBOPLHIKD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7804F0)
#define JLLBOPLHIKD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E780460)
#define JLLBOPLHIKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E780420)
#define JLLBOPLHIKD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7806A0)
#define JLLBOPLHIKD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E780550)
#define JLLBOPLHIKD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E780540)
#define JLLBOPLHIKD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7807C0)
#define JLLBOPLHIKD_INJLCGGALGC_OFFSET UNITYSDK_OFFSET(0x1E780520)
#define JLLBOPLHIKD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7803E0)
#define JLLBOPLHIKD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E780B70)
#define JLLBOPLHIKD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E780AD0)
#define JLLBOPLHIKD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E780530)
#define JLLBOPLHIKD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E780410)
#define JLLBOPLHIKD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E780830)
#define JLLBOPLHIKD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E780890)

	class JLLBOPLHIKD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::EFGIHHJGCFA*>* EFHEPAJIOHG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JLLBOPLHIKD")->GetStaticField(0x6BA90);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_NLAAEADFOIK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "JLLBOPLHIKD")->GetStaticField(0x6BA98);
		}

		// static const ::System::Object LDPIDBDJDLO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLBOPLHIKD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JLLBOPLHIKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLLBOPLHIKD*))((::PBYTE)hIl2Cpp + JLLBOPLHIKD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLLBOPLHIKD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JLLBOPLHIKD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLBOPLHIKD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JLLBOPLHIKD* Clone()
		{
			return ((::JLLBOPLHIKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLBOPLHIKD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EFGIHHJGCFA*>* INJLCGGALGC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EFGIHHJGCFA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLBOPLHIKD_INJLCGGALGC_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLBOPLHIKD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLLBOPLHIKD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLLBOPLHIKD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JLLBOPLHIKD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLLBOPLHIKD*))((::PBYTE)hIl2Cpp + JLLBOPLHIKD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLBOPLHIKD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLBOPLHIKD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JLLBOPLHIKD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLBOPLHIKD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JLLBOPLHIKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLLBOPLHIKD*))((::PBYTE)hIl2Cpp + JLLBOPLHIKD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JLLBOPLHIKD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
