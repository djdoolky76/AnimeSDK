#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENEHBCOCEGB;
class KAODLPJMEFE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define ENEHBCOCEGB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2BDC80)
#define ENEHBCOCEGB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2BE120)
#define ENEHBCOCEGB_CIINPAGCGFD_OFFSET UNITYSDK_OFFSET(0x1E2BD770)
#define ENEHBCOCEGB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2BD740)
#define ENEHBCOCEGB_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E2BD780)
#define ENEHBCOCEGB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2BD640)
#define ENEHBCOCEGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2BD5F0)
#define ENEHBCOCEGB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2BD7F0)
#define ENEHBCOCEGB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2BD7C0)
#define ENEHBCOCEGB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2BD7B0)
#define ENEHBCOCEGB_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E2BD790)
#define ENEHBCOCEGB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2BD9D0)
#define ENEHBCOCEGB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2BD5B0)
#define ENEHBCOCEGB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2BDEF0)
#define ENEHBCOCEGB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2BDDE0)
#define ENEHBCOCEGB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2BD7A0)
#define ENEHBCOCEGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2BD5E0)
#define ENEHBCOCEGB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2BDAB0)
#define ENEHBCOCEGB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2BDB10)

inline static constexpr unsigned int ENEHBCOCEGB_TypeDefinitionIndex = 29019;

	class ENEHBCOCEGB : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::KAODLPJMEFE*>* MGNMGOKNKHB; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::ENEHBCOCEGB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ENEHBCOCEGB*>**)UnitySDK::FromName("", "ENEHBCOCEGB")->GetStaticField(0x445F0);
		}

		static ::Google::Protobuf::FieldCodec_1<::KAODLPJMEFE*>** StaticGet_DCBLHKDPAOP()
		{
			return (::Google::Protobuf::FieldCodec_1<::KAODLPJMEFE*>**)UnitySDK::FromName("", "ENEHBCOCEGB")->GetStaticField(0x445F8);
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

		static ::Google::Protobuf::MessageParser_1<::ENEHBCOCEGB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ENEHBCOCEGB*>*(*)())((::PBYTE)hIl2Cpp + ENEHBCOCEGB_JJGHOBBFNJD_OFFSET))();
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
