#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDECDCEDPNM;
class MKEPKKAJONE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MKEPKKAJONE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA56620)
#define MKEPKKAJONE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA569C0)
#define MKEPKKAJONE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA56180)
#define MKEPKKAJONE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA560C0)
#define MKEPKKAJONE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA56070)
#define MKEPKKAJONE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA56330)
#define MKEPKKAJONE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA561E0)
#define MKEPKKAJONE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA561D0)
#define MKEPKKAJONE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA56450)
#define MKEPKKAJONE_JFJCCLMCAAH_OFFSET UNITYSDK_OFFSET(0x1EA561B0)
#define MKEPKKAJONE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA56030)
#define MKEPKKAJONE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA567F0)
#define MKEPKKAJONE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA56750)
#define MKEPKKAJONE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA561C0)
#define MKEPKKAJONE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA56060)
#define MKEPKKAJONE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA564C0)
#define MKEPKKAJONE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA56520)

inline static constexpr unsigned int MKEPKKAJONE_TypeDefinitionIndex = 35092;

	class MKEPKKAJONE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::FDECDCEDPNM*>* FMNJNBLCHNC; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MKEPKKAJONE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MKEPKKAJONE*>**)UnitySDK::FromName("", "MKEPKKAJONE")->GetStaticField(0x56820);
		}

		static ::Google::Protobuf::FieldCodec_1<::FDECDCEDPNM*>** StaticGet_HMAIEPJBMPP()
		{
			return (::Google::Protobuf::FieldCodec_1<::FDECDCEDPNM*>**)UnitySDK::FromName("", "MKEPKKAJONE")->GetStaticField(0x56828);
		}

		// static const ::System::Object DDKOKIGHPJF; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEPKKAJONE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MKEPKKAJONE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKEPKKAJONE*))((::PBYTE)hIl2Cpp + MKEPKKAJONE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKEPKKAJONE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MKEPKKAJONE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MKEPKKAJONE*>*(*)())((::PBYTE)hIl2Cpp + MKEPKKAJONE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEPKKAJONE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MKEPKKAJONE* Clone()
		{
			return ((::MKEPKKAJONE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEPKKAJONE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FDECDCEDPNM*>* JFJCCLMCAAH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FDECDCEDPNM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEPKKAJONE_JFJCCLMCAAH_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEPKKAJONE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKEPKKAJONE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MKEPKKAJONE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MKEPKKAJONE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MKEPKKAJONE*))((::PBYTE)hIl2Cpp + MKEPKKAJONE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEPKKAJONE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEPKKAJONE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MKEPKKAJONE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEPKKAJONE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MKEPKKAJONE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKEPKKAJONE*))((::PBYTE)hIl2Cpp + MKEPKKAJONE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MKEPKKAJONE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
