#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKJCHGLGBHP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OKJCHGLGBHP_BMIIDMHIIHA_OFFSET UNITYSDK_OFFSET(0x1DE6E640)
#define OKJCHGLGBHP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE6EAE0)
#define OKJCHGLGBHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE6EDD0)
#define OKJCHGLGBHP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE6E5E0)
#define OKJCHGLGBHP_CNFNNCGOAAM_OFFSET UNITYSDK_OFFSET(0x1DE6E630)
#define OKJCHGLGBHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE6E550)
#define OKJCHGLGBHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE6E500)
#define OKJCHGLGBHP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE6E720)
#define OKJCHGLGBHP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE6E680)
#define OKJCHGLGBHP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE6E820)
#define OKJCHGLGBHP_GKPPDEIKHEA_OFFSET UNITYSDK_OFFSET(0x1DE6E670)
#define OKJCHGLGBHP_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1DE6E660)
#define OKJCHGLGBHP_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1DE6E650)
#define OKJCHGLGBHP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE6E490)
#define OKJCHGLGBHP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE6ECC0)
#define OKJCHGLGBHP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE6EC60)
#define OKJCHGLGBHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE6E4F0)
#define OKJCHGLGBHP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE6E920)
#define OKJCHGLGBHP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE6E980)

inline static constexpr unsigned int OKJCHGLGBHP_TypeDefinitionIndex = 30813;

	class OKJCHGLGBHP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LGMBGGIBJIC; // 0x18
		::System::UInt32 OIGNKJOLCFL; // 0x20
		::System::UInt32 GMPNCOBOFDM; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LHJBPILHFPN()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OKJCHGLGBHP")->GetStaticField(0x1F950);
		}

		static ::Google::Protobuf::MessageParser_1<::OKJCHGLGBHP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OKJCHGLGBHP*>**)UnitySDK::FromName("", "OKJCHGLGBHP")->GetStaticField(0x1F958);
		}

		// static const ::System::Object MFPHCNICEJD; // 0x0
		// static const ::System::Object GDFHGOOLLFD; // 0x0
		// static const ::System::Object KJEKGCKEKGF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKJCHGLGBHP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OKJCHGLGBHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKJCHGLGBHP*))((::PBYTE)hIl2Cpp + OKJCHGLGBHP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKJCHGLGBHP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OKJCHGLGBHP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OKJCHGLGBHP*>*(*)())((::PBYTE)hIl2Cpp + OKJCHGLGBHP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKJCHGLGBHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OKJCHGLGBHP* Clone()
		{
			return ((::OKJCHGLGBHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKJCHGLGBHP_CLONE_OFFSET))(this);
		}

		::System::UInt32 CNFNNCGOAAM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKJCHGLGBHP_CNFNNCGOAAM_OFFSET))(this);
		}

		::System::Void BMIIDMHIIHA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKJCHGLGBHP_BMIIDMHIIHA_OFFSET))(this, a1);
		}

		::System::UInt32 JBIOGKPHKKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKJCHGLGBHP_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKJCHGLGBHP_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GKPPDEIKHEA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKJCHGLGBHP_GKPPDEIKHEA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKJCHGLGBHP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OKJCHGLGBHP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OKJCHGLGBHP*))((::PBYTE)hIl2Cpp + OKJCHGLGBHP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKJCHGLGBHP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKJCHGLGBHP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OKJCHGLGBHP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKJCHGLGBHP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OKJCHGLGBHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKJCHGLGBHP*))((::PBYTE)hIl2Cpp + OKJCHGLGBHP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OKJCHGLGBHP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
