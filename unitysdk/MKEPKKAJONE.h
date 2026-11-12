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

#define MKEPKKAJONE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDA8DF0)
#define MKEPKKAJONE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDA9170)
#define MKEPKKAJONE_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDA8940)
#define MKEPKKAJONE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDA8880)
#define MKEPKKAJONE_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDA8830)
#define MKEPKKAJONE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDA8AF0)
#define MKEPKKAJONE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDA89A0)
#define MKEPKKAJONE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FDA8980)
#define MKEPKKAJONE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDA8C20)
#define MKEPKKAJONE_JFJCCLMCAAH_OFFSET UNITYSDK_OFFSET(0x1FDA8990)
#define MKEPKKAJONE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDA87F0)
#define MKEPKKAJONE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDA8FA0)
#define MKEPKKAJONE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDA8F00)
#define MKEPKKAJONE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FDA8970)
#define MKEPKKAJONE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDA8820)
#define MKEPKKAJONE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDA8C90)
#define MKEPKKAJONE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDA8CF0)

inline static constexpr unsigned int MKEPKKAJONE_TypeDefinitionIndex = 36020;

	class MKEPKKAJONE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::FDECDCEDPNM*>* FMNJNBLCHNC; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MKEPKKAJONE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MKEPKKAJONE*>**)UnitySDK::FromName("", "MKEPKKAJONE")->GetStaticField(0x5B810);
		}

		static ::Google::Protobuf::FieldCodec_1<::FDECDCEDPNM*>** StaticGet_HMAIEPJBMPP()
		{
			return (::Google::Protobuf::FieldCodec_1<::FDECDCEDPNM*>**)UnitySDK::FromName("", "MKEPKKAJONE")->GetStaticField(0x5B818);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DDKOKIGHPJF; // 0x0
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

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEPKKAJONE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKEPKKAJONE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FDECDCEDPNM*>* JFJCCLMCAAH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FDECDCEDPNM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEPKKAJONE_JFJCCLMCAAH_OFFSET))(this);
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
