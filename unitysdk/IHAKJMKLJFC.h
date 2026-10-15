#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHAKJMKLJFC;
class OOAJJMEGIFO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IHAKJMKLJFC_AFDDABNNLJP_OFFSET UNITYSDK_OFFSET(0x1E6569E0)
#define IHAKJMKLJFC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E656EE0)
#define IHAKJMKLJFC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E657300)
#define IHAKJMKLJFC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E656960)
#define IHAKJMKLJFC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E656830)
#define IHAKJMKLJFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6567E0)
#define IHAKJMKLJFC_DBBJMKJJDMB_OFFSET UNITYSDK_OFFSET(0x1E6569F0)
#define IHAKJMKLJFC_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E6569A0)
#define IHAKJMKLJFC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E656A30)
#define IHAKJMKLJFC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E656A00)
#define IHAKJMKLJFC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E656C10)
#define IHAKJMKLJFC_GOCMKDIOAMD_OFFSET UNITYSDK_OFFSET(0x1E6569D0)
#define IHAKJMKLJFC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6567A0)
#define IHAKJMKLJFC_JOFFCDIHLIK_OFFSET UNITYSDK_OFFSET(0x1E6569C0)
#define IHAKJMKLJFC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6571E0)
#define IHAKJMKLJFC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6570B0)
#define IHAKJMKLJFC_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1E656990)
#define IHAKJMKLJFC_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E6569B0)
#define IHAKJMKLJFC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6567D0)
#define IHAKJMKLJFC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E656CB0)
#define IHAKJMKLJFC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E656D10)

inline static constexpr unsigned int IHAKJMKLJFC_TypeDefinitionIndex = 34321;

	class IHAKJMKLJFC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::OOAJJMEGIFO*>* CBFGBDBJHID; // 0x18
		::OOAJJMEGIFO* OCDNGGKLCJO; // 0x20
		::System::UInt32 FLBKCMIIFFP; // 0x28
		::System::UInt32 AIKAJDGKENP; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::OOAJJMEGIFO*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::OOAJJMEGIFO*>**)UnitySDK::FromName("", "IHAKJMKLJFC")->GetStaticField(0x4C290);
		}

		static ::Google::Protobuf::MessageParser_1<::IHAKJMKLJFC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IHAKJMKLJFC*>**)UnitySDK::FromName("", "IHAKJMKLJFC")->GetStaticField(0x4C298);
		}

		// static const ::System::Object IMGDAOEBONP; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object OFAGPMNLEOC; // 0x0
		// static const ::System::Object CEFHBPCEDIF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAKJMKLJFC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IHAKJMKLJFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHAKJMKLJFC*))((::PBYTE)hIl2Cpp + IHAKJMKLJFC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHAKJMKLJFC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IHAKJMKLJFC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IHAKJMKLJFC*>*(*)())((::PBYTE)hIl2Cpp + IHAKJMKLJFC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAKJMKLJFC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IHAKJMKLJFC* Clone()
		{
			return ((::IHAKJMKLJFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAKJMKLJFC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OOAJJMEGIFO*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OOAJJMEGIFO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAKJMKLJFC_MJOEMBBMBON_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAKJMKLJFC_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IHAKJMKLJFC_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::OOAJJMEGIFO* JOFFCDIHLIK()
		{
			return ((::OOAJJMEGIFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAKJMKLJFC_JOFFCDIHLIK_OFFSET))(this);
		}

		::System::Void GOCMKDIOAMD(::OOAJJMEGIFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOAJJMEGIFO*))((::PBYTE)hIl2Cpp + IHAKJMKLJFC_GOCMKDIOAMD_OFFSET))(this, a1);
		}

		::System::UInt32 AFDDABNNLJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAKJMKLJFC_AFDDABNNLJP_OFFSET))(this);
		}

		::System::Void DBBJMKJJDMB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IHAKJMKLJFC_DBBJMKJJDMB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IHAKJMKLJFC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IHAKJMKLJFC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IHAKJMKLJFC*))((::PBYTE)hIl2Cpp + IHAKJMKLJFC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAKJMKLJFC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAKJMKLJFC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IHAKJMKLJFC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAKJMKLJFC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IHAKJMKLJFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHAKJMKLJFC*))((::PBYTE)hIl2Cpp + IHAKJMKLJFC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IHAKJMKLJFC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
