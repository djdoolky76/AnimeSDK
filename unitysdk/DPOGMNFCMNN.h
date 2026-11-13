#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPOGMNFCMNN;
class NMEGIPHFFDA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DPOGMNFCMNN_BGAPBAMMAGK_OFFSET UNITYSDK_OFFSET(0x203E0B80)
#define DPOGMNFCMNN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x203E0FF0)
#define DPOGMNFCMNN_CCTOR_OFFSET UNITYSDK_OFFSET(0x203E1380)
#define DPOGMNFCMNN_CLONE_OFFSET UNITYSDK_OFFSET(0x203E0B50)
#define DPOGMNFCMNN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x203E0AC0)
#define DPOGMNFCMNN_CTOR_OFFSET UNITYSDK_OFFSET(0x203E0A80)
#define DPOGMNFCMNN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x203E0D00)
#define DPOGMNFCMNN_EQUALS_OFFSET UNITYSDK_OFFSET(0x203E0BB0)
#define DPOGMNFCMNN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x203E0BA0)
#define DPOGMNFCMNN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x203E0E20)
#define DPOGMNFCMNN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x203E0A40)
#define DPOGMNFCMNN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x203E11C0)
#define DPOGMNFCMNN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x203E1120)
#define DPOGMNFCMNN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x203E0B90)
#define DPOGMNFCMNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x203E0A70)
#define DPOGMNFCMNN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x203E0E90)
#define DPOGMNFCMNN_WRITETO_OFFSET UNITYSDK_OFFSET(0x203E0EF0)

inline static constexpr unsigned int DPOGMNFCMNN_TypeDefinitionIndex = 27198;

	class DPOGMNFCMNN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::NMEGIPHFFDA*>* OJFJBMMAHEJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DPOGMNFCMNN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DPOGMNFCMNN*>**)UnitySDK::FromName("", "DPOGMNFCMNN")->GetStaticField(0x3D120);
		}

		static ::Google::Protobuf::FieldCodec_1<::NMEGIPHFFDA*>** StaticGet_GCHJHCOKFGD()
		{
			return (::Google::Protobuf::FieldCodec_1<::NMEGIPHFFDA*>**)UnitySDK::FromName("", "DPOGMNFCMNN")->GetStaticField(0x3D128);
		}

		// static const ::System::Object CMOMAELPCOE; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOGMNFCMNN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DPOGMNFCMNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPOGMNFCMNN*))((::PBYTE)hIl2Cpp + DPOGMNFCMNN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPOGMNFCMNN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DPOGMNFCMNN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DPOGMNFCMNN*>*(*)())((::PBYTE)hIl2Cpp + DPOGMNFCMNN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOGMNFCMNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DPOGMNFCMNN* Clone()
		{
			return ((::DPOGMNFCMNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOGMNFCMNN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NMEGIPHFFDA*>* BGAPBAMMAGK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NMEGIPHFFDA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOGMNFCMNN_BGAPBAMMAGK_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOGMNFCMNN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DPOGMNFCMNN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPOGMNFCMNN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DPOGMNFCMNN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DPOGMNFCMNN*))((::PBYTE)hIl2Cpp + DPOGMNFCMNN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOGMNFCMNN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOGMNFCMNN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DPOGMNFCMNN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOGMNFCMNN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DPOGMNFCMNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPOGMNFCMNN*))((::PBYTE)hIl2Cpp + DPOGMNFCMNN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DPOGMNFCMNN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
