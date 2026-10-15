#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
class EOLKILAIAKL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EOLKILAIAKL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2FFC50)
#define EOLKILAIAKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2FFF40)
#define EOLKILAIAKL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2FF750)
#define EOLKILAIAKL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2FF6C0)
#define EOLKILAIAKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2FF680)
#define EOLKILAIAKL_ELDKBECIJPD_OFFSET UNITYSDK_OFFSET(0x1E2FF7A0)
#define EOLKILAIAKL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2FF910)
#define EOLKILAIAKL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2FF7B0)
#define EOLKILAIAKL_FKOKFCNEMIA_OFFSET UNITYSDK_OFFSET(0x1E2FF780)
#define EOLKILAIAKL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2FFA40)
#define EOLKILAIAKL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2FF640)
#define EOLKILAIAKL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2FFD80)
#define EOLKILAIAKL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2FFCE0)
#define EOLKILAIAKL_ODPOIFPMCLD_OFFSET UNITYSDK_OFFSET(0x1E2FF790)
#define EOLKILAIAKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2FF670)
#define EOLKILAIAKL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2FFAB0)
#define EOLKILAIAKL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2FFB10)

inline static constexpr unsigned int EOLKILAIAKL_TypeDefinitionIndex = 33602;

	class EOLKILAIAKL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* GCCGFMGNAFN; // 0x18
		::System::Boolean OFOMKCGKEGC; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_MCKALMBEFGM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "EOLKILAIAKL")->GetStaticField(0x55280);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EOLKILAIAKL")->GetStaticField(0x55288);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EOLKILAIAKL_JJGHOBBFNJD_OFFSET))();
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
