#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBKBHENKCPF;
class JBMJOIPJPLH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FBKBHENKCPF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E309CB0)
#define FBKBHENKCPF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E30A030)
#define FBKBHENKCPF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3097F0)
#define FBKBHENKCPF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E309760)
#define FBKBHENKCPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E309720)
#define FBKBHENKCPF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3099A0)
#define FBKBHENKCPF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E309850)
#define FBKBHENKCPF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E309830)
#define FBKBHENKCPF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E309AD0)
#define FBKBHENKCPF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3096E0)
#define FBKBHENKCPF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E309E60)
#define FBKBHENKCPF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E309DC0)
#define FBKBHENKCPF_NMCNIHKNFHK_OFFSET UNITYSDK_OFFSET(0x1E309840)
#define FBKBHENKCPF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E309820)
#define FBKBHENKCPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E309710)
#define FBKBHENKCPF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E309B40)
#define FBKBHENKCPF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E309BA0)

inline static constexpr unsigned int FBKBHENKCPF_TypeDefinitionIndex = 28481;

	class FBKBHENKCPF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JBMJOIPJPLH*>* MPAKMADDJOH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::JBMJOIPJPLH*>** StaticGet_PCJPMHKCJLP()
		{
			return (::Google::Protobuf::FieldCodec_1<::JBMJOIPJPLH*>**)UnitySDK::FromName("", "FBKBHENKCPF")->GetStaticField(0x4EBB0);
		}

		static ::Google::Protobuf::MessageParser_1<::FBKBHENKCPF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FBKBHENKCPF*>**)UnitySDK::FromName("", "FBKBHENKCPF")->GetStaticField(0x4EBB8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JBMFAOPMFDI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKBHENKCPF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FBKBHENKCPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBKBHENKCPF*))((::PBYTE)hIl2Cpp + FBKBHENKCPF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBKBHENKCPF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FBKBHENKCPF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FBKBHENKCPF*>*(*)())((::PBYTE)hIl2Cpp + FBKBHENKCPF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKBHENKCPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FBKBHENKCPF* Clone()
		{
			return ((::FBKBHENKCPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKBHENKCPF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKBHENKCPF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBKBHENKCPF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JBMJOIPJPLH*>* NMCNIHKNFHK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JBMJOIPJPLH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKBHENKCPF_NMCNIHKNFHK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBKBHENKCPF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FBKBHENKCPF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBKBHENKCPF*))((::PBYTE)hIl2Cpp + FBKBHENKCPF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKBHENKCPF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKBHENKCPF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FBKBHENKCPF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKBHENKCPF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FBKBHENKCPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBKBHENKCPF*))((::PBYTE)hIl2Cpp + FBKBHENKCPF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FBKBHENKCPF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
