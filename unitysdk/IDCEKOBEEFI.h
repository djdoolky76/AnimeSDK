#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGKLPPLJBNB;
class DIKBPKAKENO;
class IDCEKOBEEFI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IDCEKOBEEFI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6290C0)
#define IDCEKOBEEFI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E629540)
#define IDCEKOBEEFI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E628CA0)
#define IDCEKOBEEFI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E628BC0)
#define IDCEKOBEEFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E628B60)
#define IDCEKOBEEFI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E628D40)
#define IDCEKOBEEFI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E628D10)
#define IDCEKOBEEFI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E628D00)
#define IDCEKOBEEFI_FKNHIHMOFKJ_OFFSET UNITYSDK_OFFSET(0x1E628CD0)
#define IDCEKOBEEFI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E628E90)
#define IDCEKOBEEFI_HNHBMJOPNMB_OFFSET UNITYSDK_OFFSET(0x1E628CE0)
#define IDCEKOBEEFI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E628B20)
#define IDCEKOBEEFI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E629330)
#define IDCEKOBEEFI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E629220)
#define IDCEKOBEEFI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E628CF0)
#define IDCEKOBEEFI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E628B50)
#define IDCEKOBEEFI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E628F20)
#define IDCEKOBEEFI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E628F80)

	class IDCEKOBEEFI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::DIKBPKAKENO*>* AIGCJNICBLC; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::DGKLPPLJBNB*>* GAPFBJGNLKN; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_PGOFKDELCHG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IDCEKOBEEFI")->GetStaticField(0x45870);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_MAOKHPPJMHI()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IDCEKOBEEFI")->GetStaticField(0x45878);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IDCEKOBEEFI")->GetStaticField(0x45880);
		}

		// static const ::System::Object MDGPFKOMNHD; // 0x0
		// static const ::System::Object KNHOFEEHAMM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCEKOBEEFI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IDCEKOBEEFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDCEKOBEEFI*))((::PBYTE)hIl2Cpp + IDCEKOBEEFI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDCEKOBEEFI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IDCEKOBEEFI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCEKOBEEFI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IDCEKOBEEFI* Clone()
		{
			return ((::IDCEKOBEEFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCEKOBEEFI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DGKLPPLJBNB*>* FKNHIHMOFKJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DGKLPPLJBNB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCEKOBEEFI_FKNHIHMOFKJ_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DIKBPKAKENO*>* HNHBMJOPNMB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DIKBPKAKENO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCEKOBEEFI_HNHBMJOPNMB_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCEKOBEEFI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDCEKOBEEFI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDCEKOBEEFI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IDCEKOBEEFI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDCEKOBEEFI*))((::PBYTE)hIl2Cpp + IDCEKOBEEFI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCEKOBEEFI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCEKOBEEFI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IDCEKOBEEFI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCEKOBEEFI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IDCEKOBEEFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDCEKOBEEFI*))((::PBYTE)hIl2Cpp + IDCEKOBEEFI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IDCEKOBEEFI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
