#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEFEIJFPCKE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CEFEIJFPCKE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E064F20)
#define CEFEIJFPCKE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E065280)
#define CEFEIJFPCKE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E064A10)
#define CEFEIJFPCKE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E064980)
#define CEFEIJFPCKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E064930)
#define CEFEIJFPCKE_ECGLOKHJECI_OFFSET UNITYSDK_OFFSET(0x1E064A70)
#define CEFEIJFPCKE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E064BC0)
#define CEFEIJFPCKE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E064A90)
#define CEFEIJFPCKE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E064CB0)
#define CEFEIJFPCKE_HONGLJECAAC_OFFSET UNITYSDK_OFFSET(0x1E064A60)
#define CEFEIJFPCKE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0648C0)
#define CEFEIJFPCKE_KEFCMNNJDDM_OFFSET UNITYSDK_OFFSET(0x1E064A80)
#define CEFEIJFPCKE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0650A0)
#define CEFEIJFPCKE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E065050)
#define CEFEIJFPCKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E064920)
#define CEFEIJFPCKE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E064DB0)
#define CEFEIJFPCKE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E064E10)

inline static constexpr unsigned int CEFEIJFPCKE_TypeDefinitionIndex = 34756;

	class CEFEIJFPCKE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AFNHANNCAMC; // 0x18
		::System::UInt32 FFEICCANBDA; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CEFEIJFPCKE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CEFEIJFPCKE*>**)UnitySDK::FromName("", "CEFEIJFPCKE")->GetStaticField(0xFDD0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FCNMONMFJEF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CEFEIJFPCKE")->GetStaticField(0xFDD8);
		}

		// static const ::System::Object GEJEJNNMGGP; // 0x0
		// static const ::System::Object FIEKKDGLMJK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CEFEIJFPCKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEFEIJFPCKE*))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEFEIJFPCKE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CEFEIJFPCKE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CEFEIJFPCKE*>*(*)())((::PBYTE)hIl2Cpp + CEFEIJFPCKE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CEFEIJFPCKE* Clone()
		{
			return ((::CEFEIJFPCKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HONGLJECAAC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_HONGLJECAAC_OFFSET))(this);
		}

		::System::UInt32 ECGLOKHJECI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_ECGLOKHJECI_OFFSET))(this);
		}

		::System::Void KEFCMNNJDDM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_KEFCMNNJDDM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CEFEIJFPCKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CEFEIJFPCKE*))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CEFEIJFPCKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEFEIJFPCKE*))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CEFEIJFPCKE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
