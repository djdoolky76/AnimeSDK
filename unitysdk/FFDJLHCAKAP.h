#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAEFBGAFKHD;
class FFDJLHCAKAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FFDJLHCAKAP_BFKFJIHGFFM_OFFSET UNITYSDK_OFFSET(0x1E33D0C0)
#define FFDJLHCAKAP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E33D540)
#define FFDJLHCAKAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E33D8C0)
#define FFDJLHCAKAP_CJIGDFLPDHB_OFFSET UNITYSDK_OFFSET(0x1E33D0B0)
#define FFDJLHCAKAP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E33D080)
#define FFDJLHCAKAP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E33CFC0)
#define FFDJLHCAKAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E33CF70)
#define FFDJLHCAKAP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E33D230)
#define FFDJLHCAKAP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E33D0E0)
#define FFDJLHCAKAP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E33D360)
#define FFDJLHCAKAP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E33CF30)
#define FFDJLHCAKAP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E33D6F0)
#define FFDJLHCAKAP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E33D650)
#define FFDJLHCAKAP_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1E33D0D0)
#define FFDJLHCAKAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E33CF60)
#define FFDJLHCAKAP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E33D3D0)
#define FFDJLHCAKAP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E33D430)

inline static constexpr unsigned int FFDJLHCAKAP_TypeDefinitionIndex = 33460;

	class FFDJLHCAKAP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::CAEFBGAFKHD*>* CBFGBDBJHID; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NBBGLKJILGF; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FFDJLHCAKAP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FFDJLHCAKAP*>**)UnitySDK::FromName("", "FFDJLHCAKAP")->GetStaticField(0x54060);
		}

		static ::Google::Protobuf::FieldCodec_1<::CAEFBGAFKHD*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::CAEFBGAFKHD*>**)UnitySDK::FromName("", "FFDJLHCAKAP")->GetStaticField(0x54068);
		}

		// static const ::System::Object EELLGMOAPJM; // 0x0
		// static const ::System::Object IMGDAOEBONP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDJLHCAKAP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FFDJLHCAKAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFDJLHCAKAP*))((::PBYTE)hIl2Cpp + FFDJLHCAKAP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFDJLHCAKAP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FFDJLHCAKAP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FFDJLHCAKAP*>*(*)())((::PBYTE)hIl2Cpp + FFDJLHCAKAP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDJLHCAKAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FFDJLHCAKAP* Clone()
		{
			return ((::FFDJLHCAKAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDJLHCAKAP_CLONE_OFFSET))(this);
		}

		::System::UInt32 CJIGDFLPDHB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDJLHCAKAP_CJIGDFLPDHB_OFFSET))(this);
		}

		::System::Void BFKFJIHGFFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FFDJLHCAKAP_BFKFJIHGFFM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CAEFBGAFKHD*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CAEFBGAFKHD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDJLHCAKAP_MJOEMBBMBON_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FFDJLHCAKAP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FFDJLHCAKAP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FFDJLHCAKAP*))((::PBYTE)hIl2Cpp + FFDJLHCAKAP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDJLHCAKAP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDJLHCAKAP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FFDJLHCAKAP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDJLHCAKAP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FFDJLHCAKAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFDJLHCAKAP*))((::PBYTE)hIl2Cpp + FFDJLHCAKAP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FFDJLHCAKAP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
