#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGOFJCCAPBC;
class EPAPEBOFJJA;
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

#define CGOFJCCAPBC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0B7EC0)
#define CGOFJCCAPBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0B82F0)
#define CGOFJCCAPBC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0B7900)
#define CGOFJCCAPBC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0B7800)
#define CGOFJCCAPBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B77B0)
#define CGOFJCCAPBC_DJFPCBOFBCK_OFFSET UNITYSDK_OFFSET(0x1E0B7960)
#define CGOFJCCAPBC_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E0B7930)
#define CGOFJCCAPBC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0B79D0)
#define CGOFJCCAPBC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0B79A0)
#define CGOFJCCAPBC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0B7990)
#define CGOFJCCAPBC_FNHLHBMJLJN_OFFSET UNITYSDK_OFFSET(0x1E0B7970)
#define CGOFJCCAPBC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0B7BB0)
#define CGOFJCCAPBC_GFIKCIMINGH_OFFSET UNITYSDK_OFFSET(0x1E0B7950)
#define CGOFJCCAPBC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0B7770)
#define CGOFJCCAPBC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0B81A0)
#define CGOFJCCAPBC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0B8080)
#define CGOFJCCAPBC_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E0B7940)
#define CGOFJCCAPBC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0B7980)
#define CGOFJCCAPBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0B77A0)
#define CGOFJCCAPBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0B7CA0)
#define CGOFJCCAPBC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0B7D00)

inline static constexpr unsigned int CGOFJCCAPBC_TypeDefinitionIndex = 26829;

	class CGOFJCCAPBC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* HFLHIGMFFEA; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::EPAPEBOFJJA*>* EMDLMENENJJ; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		::System::UInt32 FLBKCMIIFFP; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::EPAPEBOFJJA*>** StaticGet_PFEFHBEDPND()
		{
			return (::Google::Protobuf::FieldCodec_1<::EPAPEBOFJJA*>**)UnitySDK::FromName("", "CGOFJCCAPBC")->GetStaticField(0x15000);
		}

		static ::Google::Protobuf::MessageParser_1<::CGOFJCCAPBC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CGOFJCCAPBC*>**)UnitySDK::FromName("", "CGOFJCCAPBC")->GetStaticField(0x15008);
		}

		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object PEIDPDOLHKM; // 0x0
		// static const ::System::Object FINDNCFMLAB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOFJCCAPBC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CGOFJCCAPBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGOFJCCAPBC*))((::PBYTE)hIl2Cpp + CGOFJCCAPBC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGOFJCCAPBC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CGOFJCCAPBC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CGOFJCCAPBC*>*(*)())((::PBYTE)hIl2Cpp + CGOFJCCAPBC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOFJCCAPBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CGOFJCCAPBC* Clone()
		{
			return ((::CGOFJCCAPBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOFJCCAPBC_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOFJCCAPBC_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGOFJCCAPBC_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EPAPEBOFJJA*>* GFIKCIMINGH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EPAPEBOFJJA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOFJCCAPBC_GFIKCIMINGH_OFFSET))(this);
		}

		::Proto::ItemList* DJFPCBOFBCK()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOFJCCAPBC_DJFPCBOFBCK_OFFSET))(this);
		}

		::System::Void FNHLHBMJLJN(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CGOFJCCAPBC_FNHLHBMJLJN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOFJCCAPBC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGOFJCCAPBC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CGOFJCCAPBC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CGOFJCCAPBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CGOFJCCAPBC*))((::PBYTE)hIl2Cpp + CGOFJCCAPBC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOFJCCAPBC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOFJCCAPBC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CGOFJCCAPBC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOFJCCAPBC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CGOFJCCAPBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGOFJCCAPBC*))((::PBYTE)hIl2Cpp + CGOFJCCAPBC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CGOFJCCAPBC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
