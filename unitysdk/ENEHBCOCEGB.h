#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENEHBCOCEGB;
class KAODLPJMEFE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define ENEHBCOCEGB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2EB300)
#define ENEHBCOCEGB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2EB7A0)
#define ENEHBCOCEGB_CIINPAGCGFD_OFFSET UNITYSDK_OFFSET(0x1E2EADF0)
#define ENEHBCOCEGB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2EADC0)
#define ENEHBCOCEGB_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E2EAE00)
#define ENEHBCOCEGB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2EACC0)
#define ENEHBCOCEGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2EAC70)
#define ENEHBCOCEGB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2EAE70)
#define ENEHBCOCEGB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2EAE40)
#define ENEHBCOCEGB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2EAE30)
#define ENEHBCOCEGB_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E2EAE10)
#define ENEHBCOCEGB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2EB050)
#define ENEHBCOCEGB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2EAC30)
#define ENEHBCOCEGB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2EB570)
#define ENEHBCOCEGB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2EB460)
#define ENEHBCOCEGB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2EAE20)
#define ENEHBCOCEGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2EAC60)
#define ENEHBCOCEGB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2EB130)
#define ENEHBCOCEGB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2EB190)

	class ENEHBCOCEGB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::KAODLPJMEFE*>* MGNMGOKNKHB; // 0x18
		::Proto::ItemList* JDAFJANAEBG; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ENEHBCOCEGB")->GetStaticField(0x54430);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_DCBLHKDPAOP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "ENEHBCOCEGB")->GetStaticField(0x54438);
		}

		// static const ::System::Object DEENBNDCNGE; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEHBCOCEGB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ENEHBCOCEGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENEHBCOCEGB*))((::PBYTE)hIl2Cpp + ENEHBCOCEGB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENEHBCOCEGB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ENEHBCOCEGB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEHBCOCEGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ENEHBCOCEGB* Clone()
		{
			return ((::ENEHBCOCEGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEHBCOCEGB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KAODLPJMEFE*>* CIINPAGCGFD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KAODLPJMEFE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEHBCOCEGB_CIINPAGCGFD_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEHBCOCEGB_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + ENEHBCOCEGB_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEHBCOCEGB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ENEHBCOCEGB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENEHBCOCEGB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ENEHBCOCEGB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENEHBCOCEGB*))((::PBYTE)hIl2Cpp + ENEHBCOCEGB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEHBCOCEGB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEHBCOCEGB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ENEHBCOCEGB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEHBCOCEGB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ENEHBCOCEGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENEHBCOCEGB*))((::PBYTE)hIl2Cpp + ENEHBCOCEGB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ENEHBCOCEGB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
