#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBLEHOCIBOG;
class JJEFLBCLBFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FBLEHOCIBOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3387D0)
#define FBLEHOCIBOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E338B40)
#define FBLEHOCIBOG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E338320)
#define FBLEHOCIBOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E338290)
#define FBLEHOCIBOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E338250)
#define FBLEHOCIBOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3384D0)
#define FBLEHOCIBOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E338380)
#define FBLEHOCIBOG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E338360)
#define FBLEHOCIBOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E338600)
#define FBLEHOCIBOG_JCBCKGHAGMJ_OFFSET UNITYSDK_OFFSET(0x1E338370)
#define FBLEHOCIBOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E338210)
#define FBLEHOCIBOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E338980)
#define FBLEHOCIBOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3388E0)
#define FBLEHOCIBOG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E338350)
#define FBLEHOCIBOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E338240)
#define FBLEHOCIBOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E338670)
#define FBLEHOCIBOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3386D0)

	class FBLEHOCIBOG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::JJEFLBCLBFN*>* GEGKDEALGDF; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_BHAFPFJMPEH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "FBLEHOCIBOG")->GetStaticField(0x59AD0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FBLEHOCIBOG")->GetStaticField(0x59AD8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object GODKLBDAMJO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLEHOCIBOG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FBLEHOCIBOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBLEHOCIBOG*))((::PBYTE)hIl2Cpp + FBLEHOCIBOG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBLEHOCIBOG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FBLEHOCIBOG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLEHOCIBOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FBLEHOCIBOG* Clone()
		{
			return ((::FBLEHOCIBOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLEHOCIBOG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLEHOCIBOG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBLEHOCIBOG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JJEFLBCLBFN*>* JCBCKGHAGMJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JJEFLBCLBFN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLEHOCIBOG_JCBCKGHAGMJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBLEHOCIBOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FBLEHOCIBOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBLEHOCIBOG*))((::PBYTE)hIl2Cpp + FBLEHOCIBOG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLEHOCIBOG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLEHOCIBOG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FBLEHOCIBOG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLEHOCIBOG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FBLEHOCIBOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBLEHOCIBOG*))((::PBYTE)hIl2Cpp + FBLEHOCIBOG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FBLEHOCIBOG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
