#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFFDDJHNJPN;
class HFMLKIIOGBP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HFMLKIIOGBP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FAEFF40)
#define HFMLKIIOGBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAF0240)
#define HFMLKIIOGBP_CLONE_OFFSET UNITYSDK_OFFSET(0x1FAEFAC0)
#define HFMLKIIOGBP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FAEFA10)
#define HFMLKIIOGBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAEF9C0)
#define HFMLKIIOGBP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FAEFCA0)
#define HFMLKIIOGBP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FAEFB20)
#define HFMLKIIOGBP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FAEFDC0)
#define HFMLKIIOGBP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FAEF950)
#define HFMLKIIOGBP_MDMFGLHAJLG_OFFSET UNITYSDK_OFFSET(0x1FAEFB10)
#define HFMLKIIOGBP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FAF0080)
#define HFMLKIIOGBP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FAEFFE0)
#define HFMLKIIOGBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FAEF9B0)
#define HFMLKIIOGBP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FAEFE30)
#define HFMLKIIOGBP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FAEFE90)

inline static constexpr unsigned int HFMLKIIOGBP_TypeDefinitionIndex = 35306;

	class HFMLKIIOGBP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::GFFDDJHNJPN*>* MLNACOPLGOI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HFMLKIIOGBP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HFMLKIIOGBP*>**)UnitySDK::FromName("", "HFMLKIIOGBP")->GetStaticField(0x2B910);
		}

		static ::Google::Protobuf::FieldCodec_1<::GFFDDJHNJPN*>** StaticGet_PKFPOFABBPP()
		{
			return (::Google::Protobuf::FieldCodec_1<::GFFDDJHNJPN*>**)UnitySDK::FromName("", "HFMLKIIOGBP")->GetStaticField(0x2B918);
		}

		// static const ::System::Object BFOAKCLEEIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMLKIIOGBP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HFMLKIIOGBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFMLKIIOGBP*))((::PBYTE)hIl2Cpp + HFMLKIIOGBP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFMLKIIOGBP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HFMLKIIOGBP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HFMLKIIOGBP*>*(*)())((::PBYTE)hIl2Cpp + HFMLKIIOGBP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMLKIIOGBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HFMLKIIOGBP* Clone()
		{
			return ((::HFMLKIIOGBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMLKIIOGBP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GFFDDJHNJPN*>* MDMFGLHAJLG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GFFDDJHNJPN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMLKIIOGBP_MDMFGLHAJLG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFMLKIIOGBP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HFMLKIIOGBP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFMLKIIOGBP*))((::PBYTE)hIl2Cpp + HFMLKIIOGBP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMLKIIOGBP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMLKIIOGBP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HFMLKIIOGBP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMLKIIOGBP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HFMLKIIOGBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFMLKIIOGBP*))((::PBYTE)hIl2Cpp + HFMLKIIOGBP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HFMLKIIOGBP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
