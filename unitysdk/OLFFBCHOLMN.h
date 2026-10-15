#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLFFBCHOLMN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OLFFBCHOLMN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE78EB0)
#define OLFFBCHOLMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE79150)
#define OLFFBCHOLMN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE78A20)
#define OLFFBCHOLMN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE78980)
#define OLFFBCHOLMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE78930)
#define OLFFBCHOLMN_EILPOOIECLM_OFFSET UNITYSDK_OFFSET(0x1DE78A80)
#define OLFFBCHOLMN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE78B20)
#define OLFFBCHOLMN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE78AA0)
#define OLFFBCHOLMN_FCCBPNELKAN_OFFSET UNITYSDK_OFFSET(0x1DE78A90)
#define OLFFBCHOLMN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE78C20)
#define OLFFBCHOLMN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE788F0)
#define OLFFBCHOLMN_LNGEKHMJCHJ_OFFSET UNITYSDK_OFFSET(0x1DE78A60)
#define OLFFBCHOLMN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE79080)
#define OLFFBCHOLMN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE79020)
#define OLFFBCHOLMN_NCBLPDPCKBI_OFFSET UNITYSDK_OFFSET(0x1DE78A50)
#define OLFFBCHOLMN_NHPINJIIEGK_OFFSET UNITYSDK_OFFSET(0x1DE78A70)
#define OLFFBCHOLMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE78920)
#define OLFFBCHOLMN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE78D20)
#define OLFFBCHOLMN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE78D80)

inline static constexpr unsigned int OLFFBCHOLMN_TypeDefinitionIndex = 31444;

	class OLFFBCHOLMN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CCDAAEAOHJJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 IDKAAEKCFOG; // 0x20
		::System::UInt32 NIAOPCJHKCG; // 0x24
		static ::Google::Protobuf::MessageParser_1<::OLFFBCHOLMN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OLFFBCHOLMN*>**)UnitySDK::FromName("", "OLFFBCHOLMN")->GetStaticField(0x20D90);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_APNOCHBAAEF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OLFFBCHOLMN")->GetStaticField(0x20D98);
		}

		// static const ::System::Object PMEIEMBGLCB; // 0x0
		// static const ::System::Object CIBDNMCBMLC; // 0x0
		// static const ::System::Object FDDDLMBHDMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFFBCHOLMN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OLFFBCHOLMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLFFBCHOLMN*))((::PBYTE)hIl2Cpp + OLFFBCHOLMN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLFFBCHOLMN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OLFFBCHOLMN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OLFFBCHOLMN*>*(*)())((::PBYTE)hIl2Cpp + OLFFBCHOLMN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFFBCHOLMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OLFFBCHOLMN* Clone()
		{
			return ((::OLFFBCHOLMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFFBCHOLMN_CLONE_OFFSET))(this);
		}

		::System::UInt32 NCBLPDPCKBI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFFBCHOLMN_NCBLPDPCKBI_OFFSET))(this);
		}

		::System::Void LNGEKHMJCHJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLFFBCHOLMN_LNGEKHMJCHJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NHPINJIIEGK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFFBCHOLMN_NHPINJIIEGK_OFFSET))(this);
		}

		::System::UInt32 EILPOOIECLM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFFBCHOLMN_EILPOOIECLM_OFFSET))(this);
		}

		::System::Void FCCBPNELKAN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLFFBCHOLMN_FCCBPNELKAN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OLFFBCHOLMN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OLFFBCHOLMN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OLFFBCHOLMN*))((::PBYTE)hIl2Cpp + OLFFBCHOLMN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFFBCHOLMN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFFBCHOLMN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OLFFBCHOLMN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFFBCHOLMN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OLFFBCHOLMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLFFBCHOLMN*))((::PBYTE)hIl2Cpp + OLFFBCHOLMN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OLFFBCHOLMN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
