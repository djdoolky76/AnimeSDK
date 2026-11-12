#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFIKNHJBDBJ;
class PAMDEKPLLEL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PAMDEKPLLEL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F1B9890)
#define PAMDEKPLLEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1B9C30)
#define PAMDEKPLLEL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F1B93F0)
#define PAMDEKPLLEL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F1B9330)
#define PAMDEKPLLEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1B92E0)
#define PAMDEKPLLEL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F1B95A0)
#define PAMDEKPLLEL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F1B9450)
#define PAMDEKPLLEL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F1B9440)
#define PAMDEKPLLEL_FHPHMJNNJLG_OFFSET UNITYSDK_OFFSET(0x1F1B9420)
#define PAMDEKPLLEL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F1B96C0)
#define PAMDEKPLLEL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F1B92A0)
#define PAMDEKPLLEL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F1B9A60)
#define PAMDEKPLLEL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F1B99C0)
#define PAMDEKPLLEL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F1B9430)
#define PAMDEKPLLEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F1B92D0)
#define PAMDEKPLLEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F1B9730)
#define PAMDEKPLLEL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F1B9790)

inline static constexpr unsigned int PAMDEKPLLEL_TypeDefinitionIndex = 26516;

	class PAMDEKPLLEL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LFIKNHJBDBJ*>* KDHIJGLPMPM; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::LFIKNHJBDBJ*>** StaticGet_BAAPCNCBGEP()
		{
			return (::Google::Protobuf::FieldCodec_1<::LFIKNHJBDBJ*>**)UnitySDK::FromName("", "PAMDEKPLLEL")->GetStaticField(0x29A00);
		}

		static ::Google::Protobuf::MessageParser_1<::PAMDEKPLLEL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PAMDEKPLLEL*>**)UnitySDK::FromName("", "PAMDEKPLLEL")->GetStaticField(0x29A08);
		}

		// static const ::System::Object NHKEELOOHMF; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMDEKPLLEL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PAMDEKPLLEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAMDEKPLLEL*))((::PBYTE)hIl2Cpp + PAMDEKPLLEL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAMDEKPLLEL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PAMDEKPLLEL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PAMDEKPLLEL*>*(*)())((::PBYTE)hIl2Cpp + PAMDEKPLLEL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMDEKPLLEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PAMDEKPLLEL* Clone()
		{
			return ((::PAMDEKPLLEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMDEKPLLEL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LFIKNHJBDBJ*>* FHPHMJNNJLG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LFIKNHJBDBJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMDEKPLLEL_FHPHMJNNJLG_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMDEKPLLEL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PAMDEKPLLEL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PAMDEKPLLEL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PAMDEKPLLEL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PAMDEKPLLEL*))((::PBYTE)hIl2Cpp + PAMDEKPLLEL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMDEKPLLEL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMDEKPLLEL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PAMDEKPLLEL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMDEKPLLEL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PAMDEKPLLEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAMDEKPLLEL*))((::PBYTE)hIl2Cpp + PAMDEKPLLEL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PAMDEKPLLEL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
