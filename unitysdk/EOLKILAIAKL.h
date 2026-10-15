#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
class EOLKILAIAKL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EOLKILAIAKL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2D25C0)
#define EOLKILAIAKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D28B0)
#define EOLKILAIAKL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2D20C0)
#define EOLKILAIAKL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2D2030)
#define EOLKILAIAKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D1FF0)
#define EOLKILAIAKL_ELDKBECIJPD_OFFSET UNITYSDK_OFFSET(0x1E2D2110)
#define EOLKILAIAKL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2D2280)
#define EOLKILAIAKL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2D2120)
#define EOLKILAIAKL_FKOKFCNEMIA_OFFSET UNITYSDK_OFFSET(0x1E2D20F0)
#define EOLKILAIAKL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2D23B0)
#define EOLKILAIAKL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2D1FB0)
#define EOLKILAIAKL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2D26F0)
#define EOLKILAIAKL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2D2650)
#define EOLKILAIAKL_ODPOIFPMCLD_OFFSET UNITYSDK_OFFSET(0x1E2D2100)
#define EOLKILAIAKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2D1FE0)
#define EOLKILAIAKL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2D2420)
#define EOLKILAIAKL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2D2480)

inline static constexpr unsigned int EOLKILAIAKL_TypeDefinitionIndex = 33602;

	class EOLKILAIAKL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* GCCGFMGNAFN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean OFOMKCGKEGC; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>** StaticGet_MCKALMBEFGM()
		{
			return (::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>**)UnitySDK::FromName("", "EOLKILAIAKL")->GetStaticField(0x47540);
		}

		static ::Google::Protobuf::MessageParser_1<::EOLKILAIAKL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EOLKILAIAKL*>**)UnitySDK::FromName("", "EOLKILAIAKL")->GetStaticField(0x47548);
		}

		// static const ::System::Object PAPMELCOCEP; // 0x0
		// static const ::System::Object KBMPMGHEKKA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOLKILAIAKL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EOLKILAIAKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOLKILAIAKL*))((::PBYTE)hIl2Cpp + EOLKILAIAKL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOLKILAIAKL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EOLKILAIAKL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EOLKILAIAKL*>*(*)())((::PBYTE)hIl2Cpp + EOLKILAIAKL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOLKILAIAKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EOLKILAIAKL* Clone()
		{
			return ((::EOLKILAIAKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOLKILAIAKL_CLONE_OFFSET))(this);
		}

		::System::Boolean FKOKFCNEMIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EOLKILAIAKL_FKOKFCNEMIA_OFFSET))(this);
		}

		::System::Void ODPOIFPMCLD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EOLKILAIAKL_ODPOIFPMCLD_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* ELDKBECIJPD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOLKILAIAKL_ELDKBECIJPD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EOLKILAIAKL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EOLKILAIAKL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EOLKILAIAKL*))((::PBYTE)hIl2Cpp + EOLKILAIAKL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOLKILAIAKL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOLKILAIAKL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EOLKILAIAKL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOLKILAIAKL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EOLKILAIAKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOLKILAIAKL*))((::PBYTE)hIl2Cpp + EOLKILAIAKL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EOLKILAIAKL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
