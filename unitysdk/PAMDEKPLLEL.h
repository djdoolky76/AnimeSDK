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

#define PAMDEKPLLEL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20376960)
#define PAMDEKPLLEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x20376D00)
#define PAMDEKPLLEL_CLONE_OFFSET UNITYSDK_OFFSET(0x203764C0)
#define PAMDEKPLLEL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20376400)
#define PAMDEKPLLEL_CTOR_OFFSET UNITYSDK_OFFSET(0x203763B0)
#define PAMDEKPLLEL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20376670)
#define PAMDEKPLLEL_EQUALS_OFFSET UNITYSDK_OFFSET(0x20376520)
#define PAMDEKPLLEL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x20376510)
#define PAMDEKPLLEL_FHPHMJNNJLG_OFFSET UNITYSDK_OFFSET(0x203764F0)
#define PAMDEKPLLEL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20376790)
#define PAMDEKPLLEL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20376370)
#define PAMDEKPLLEL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20376B30)
#define PAMDEKPLLEL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20376A90)
#define PAMDEKPLLEL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x20376500)
#define PAMDEKPLLEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x203763A0)
#define PAMDEKPLLEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20376800)
#define PAMDEKPLLEL_WRITETO_OFFSET UNITYSDK_OFFSET(0x20376860)

inline static constexpr unsigned int PAMDEKPLLEL_TypeDefinitionIndex = 26516;

	class PAMDEKPLLEL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LFIKNHJBDBJ*>* KDHIJGLPMPM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::LFIKNHJBDBJ*>** StaticGet_BAAPCNCBGEP()
		{
			return (::Google::Protobuf::FieldCodec_1<::LFIKNHJBDBJ*>**)UnitySDK::FromName("", "PAMDEKPLLEL")->GetStaticField(0x2C3D0);
		}

		static ::Google::Protobuf::MessageParser_1<::PAMDEKPLLEL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PAMDEKPLLEL*>**)UnitySDK::FromName("", "PAMDEKPLLEL")->GetStaticField(0x2C3D8);
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
