#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBGJAKBKPAN;
class HLPCKFCKFFJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HLPCKFCKFFJ_AFDDABNNLJP_OFFSET UNITYSDK_OFFSET(0x1E598C40)
#define HLPCKFCKFFJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E599130)
#define HLPCKFCKFFJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E599570)
#define HLPCKFCKFFJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E598BE0)
#define HLPCKFCKFFJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E598B20)
#define HLPCKFCKFFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E598AD0)
#define HLPCKFCKFFJ_DBBJMKJJDMB_OFFSET UNITYSDK_OFFSET(0x1E598C50)
#define HLPCKFCKFFJ_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E598C20)
#define HLPCKFCKFFJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E598DC0)
#define HLPCKFCKFFJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E598C60)
#define HLPCKFCKFFJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E598EF0)
#define HLPCKFCKFFJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E598A90)
#define HLPCKFCKFFJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E599380)
#define HLPCKFCKFFJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5992D0)
#define HLPCKFCKFFJ_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1E598C10)
#define HLPCKFCKFFJ_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E598C30)
#define HLPCKFCKFFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E598AC0)
#define HLPCKFCKFFJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E598F60)
#define HLPCKFCKFFJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E598FC0)

inline static constexpr unsigned int HLPCKFCKFFJ_TypeDefinitionIndex = 34275;

	class HLPCKFCKFFJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::EBGJAKBKPAN*>* CBFGBDBJHID; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 FLBKCMIIFFP; // 0x20
		::System::UInt32 AIKAJDGKENP; // 0x24
		static ::Google::Protobuf::MessageParser_1<::HLPCKFCKFFJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HLPCKFCKFFJ*>**)UnitySDK::FromName("", "HLPCKFCKFFJ")->GetStaticField(0x38350);
		}

		static ::Google::Protobuf::FieldCodec_1<::EBGJAKBKPAN*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::EBGJAKBKPAN*>**)UnitySDK::FromName("", "HLPCKFCKFFJ")->GetStaticField(0x38358);
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

		static ::Google::Protobuf::MessageParser_1<::HLPCKFCKFFJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HLPCKFCKFFJ*>*(*)())((::PBYTE)hIl2Cpp + HLPCKFCKFFJ_JJGHOBBFNJD_OFFSET))();
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
