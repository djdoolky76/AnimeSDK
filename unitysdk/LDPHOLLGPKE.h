#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACIHMMBKMIM;
class LDPHOLLGPKE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LDPHOLLGPKE_AFDDABNNLJP_OFFSET UNITYSDK_OFFSET(0x1E8D5180)
#define LDPHOLLGPKE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8D56A0)
#define LDPHOLLGPKE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8D5AD0)
#define LDPHOLLGPKE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8D5150)
#define LDPHOLLGPKE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8D5090)
#define LDPHOLLGPKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D5040)
#define LDPHOLLGPKE_DBBJMKJJDMB_OFFSET UNITYSDK_OFFSET(0x1E8D5190)
#define LDPHOLLGPKE_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E8D51B0)
#define LDPHOLLGPKE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8D5330)
#define LDPHOLLGPKE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8D51D0)
#define LDPHOLLGPKE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8D5460)
#define LDPHOLLGPKE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8D5000)
#define LDPHOLLGPKE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8D58E0)
#define LDPHOLLGPKE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8D5830)
#define LDPHOLLGPKE_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1E8D51A0)
#define LDPHOLLGPKE_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E8D51C0)
#define LDPHOLLGPKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8D5030)
#define LDPHOLLGPKE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8D54D0)
#define LDPHOLLGPKE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8D5530)

inline static constexpr unsigned int LDPHOLLGPKE_TypeDefinitionIndex = 30474;

	class LDPHOLLGPKE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::ACIHMMBKMIM*>* CBFGBDBJHID; // 0x18
		::System::UInt32 AIKAJDGKENP; // 0x20
		::System::UInt32 FLBKCMIIFFP; // 0x24
		static ::Google::Protobuf::MessageParser_1<::LDPHOLLGPKE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LDPHOLLGPKE*>**)UnitySDK::FromName("", "LDPHOLLGPKE")->GetStaticField(0x2F880);
		}

		static ::Google::Protobuf::FieldCodec_1<::ACIHMMBKMIM*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::ACIHMMBKMIM*>**)UnitySDK::FromName("", "LDPHOLLGPKE")->GetStaticField(0x2F888);
		}

		// static const ::System::Object CEFHBPCEDIF; // 0x0
		// static const ::System::Object IMGDAOEBONP; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPHOLLGPKE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LDPHOLLGPKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDPHOLLGPKE*))((::PBYTE)hIl2Cpp + LDPHOLLGPKE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDPHOLLGPKE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LDPHOLLGPKE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LDPHOLLGPKE*>*(*)())((::PBYTE)hIl2Cpp + LDPHOLLGPKE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPHOLLGPKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LDPHOLLGPKE* Clone()
		{
			return ((::LDPHOLLGPKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPHOLLGPKE_CLONE_OFFSET))(this);
		}

		::System::UInt32 AFDDABNNLJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPHOLLGPKE_AFDDABNNLJP_OFFSET))(this);
		}

		::System::Void DBBJMKJJDMB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDPHOLLGPKE_DBBJMKJJDMB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ACIHMMBKMIM*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ACIHMMBKMIM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPHOLLGPKE_MJOEMBBMBON_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPHOLLGPKE_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDPHOLLGPKE_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDPHOLLGPKE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LDPHOLLGPKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDPHOLLGPKE*))((::PBYTE)hIl2Cpp + LDPHOLLGPKE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPHOLLGPKE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPHOLLGPKE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LDPHOLLGPKE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPHOLLGPKE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LDPHOLLGPKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDPHOLLGPKE*))((::PBYTE)hIl2Cpp + LDPHOLLGPKE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LDPHOLLGPKE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
