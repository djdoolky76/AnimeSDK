#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBGJAKBKPAN;
class HLPCKFCKFFJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HLPCKFCKFFJ_AFDDABNNLJP_OFFSET UNITYSDK_OFFSET(0x1E5C6210)
#define HLPCKFCKFFJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5C6700)
#define HLPCKFCKFFJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C6B40)
#define HLPCKFCKFFJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5C61B0)
#define HLPCKFCKFFJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5C60F0)
#define HLPCKFCKFFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C60A0)
#define HLPCKFCKFFJ_DBBJMKJJDMB_OFFSET UNITYSDK_OFFSET(0x1E5C6220)
#define HLPCKFCKFFJ_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E5C61F0)
#define HLPCKFCKFFJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5C6390)
#define HLPCKFCKFFJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5C6230)
#define HLPCKFCKFFJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5C64C0)
#define HLPCKFCKFFJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5C6060)
#define HLPCKFCKFFJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5C6950)
#define HLPCKFCKFFJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5C68A0)
#define HLPCKFCKFFJ_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1E5C61E0)
#define HLPCKFCKFFJ_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E5C6200)
#define HLPCKFCKFFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5C6090)
#define HLPCKFCKFFJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5C6530)
#define HLPCKFCKFFJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5C6590)

inline static constexpr unsigned int HLPCKFCKFFJ_TypeDefinitionIndex = 34275;

	class HLPCKFCKFFJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::EBGJAKBKPAN*>* CBFGBDBJHID; // 0x18
		::System::UInt32 AIKAJDGKENP; // 0x20
		::System::UInt32 FLBKCMIIFFP; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HLPCKFCKFFJ")->GetStaticField(0x48DE0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HLPCKFCKFFJ")->GetStaticField(0x48DE8);
		}

		// static const ::System::Object IMGDAOEBONP; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object CEFHBPCEDIF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPCKFCKFFJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HLPCKFCKFFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLPCKFCKFFJ*))((::PBYTE)hIl2Cpp + HLPCKFCKFFJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLPCKFCKFFJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HLPCKFCKFFJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPCKFCKFFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HLPCKFCKFFJ* Clone()
		{
			return ((::HLPCKFCKFFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPCKFCKFFJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EBGJAKBKPAN*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EBGJAKBKPAN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPCKFCKFFJ_MJOEMBBMBON_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPCKFCKFFJ_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLPCKFCKFFJ_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::UInt32 AFDDABNNLJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPCKFCKFFJ_AFDDABNNLJP_OFFSET))(this);
		}

		::System::Void DBBJMKJJDMB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLPCKFCKFFJ_DBBJMKJJDMB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLPCKFCKFFJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HLPCKFCKFFJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HLPCKFCKFFJ*))((::PBYTE)hIl2Cpp + HLPCKFCKFFJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPCKFCKFFJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPCKFCKFFJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HLPCKFCKFFJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPCKFCKFFJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HLPCKFCKFFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLPCKFCKFFJ*))((::PBYTE)hIl2Cpp + HLPCKFCKFFJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HLPCKFCKFFJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
