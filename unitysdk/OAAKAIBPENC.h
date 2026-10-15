#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OAAKAIBPENC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OAAKAIBPENC_BJOCKPBCGAG_OFFSET UNITYSDK_OFFSET(0x1EB762B0)
#define OAAKAIBPENC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB76750)
#define OAAKAIBPENC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB76A20)
#define OAAKAIBPENC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB76250)
#define OAAKAIBPENC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB761C0)
#define OAAKAIBPENC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB76170)
#define OAAKAIBPENC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB76390)
#define OAAKAIBPENC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB762F0)
#define OAAKAIBPENC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB76490)
#define OAAKAIBPENC_GMCDNCNMNOP_OFFSET UNITYSDK_OFFSET(0x1EB762D0)
#define OAAKAIBPENC_JEHNFPAOLPJ_OFFSET UNITYSDK_OFFSET(0x1EB762C0)
#define OAAKAIBPENC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB76100)
#define OAAKAIBPENC_KCKNGLFCMBI_OFFSET UNITYSDK_OFFSET(0x1EB762E0)
#define OAAKAIBPENC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB76930)
#define OAAKAIBPENC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB768D0)
#define OAAKAIBPENC_OPGLAKFNMLD_OFFSET UNITYSDK_OFFSET(0x1EB762A0)
#define OAAKAIBPENC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB76160)
#define OAAKAIBPENC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB76590)
#define OAAKAIBPENC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB765F0)

inline static constexpr unsigned int OAAKAIBPENC_TypeDefinitionIndex = 25766;

	class OAAKAIBPENC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KAMHKIAMHAD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 DKNBMNHONNG; // 0x20
		::System::UInt32 NMPGFFDDEKJ; // 0x24
		static ::Google::Protobuf::MessageParser_1<::OAAKAIBPENC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OAAKAIBPENC*>**)UnitySDK::FromName("", "OAAKAIBPENC")->GetStaticField(0xE6E0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DJJKMCIPPKK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OAAKAIBPENC")->GetStaticField(0xE6E8);
		}

		// static const ::System::Object BOIOBAEGIAI; // 0x0
		// static const ::System::Object MBKKKHLNFDG; // 0x0
		// static const ::System::Object ANNFMMNEMMJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAAKAIBPENC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OAAKAIBPENC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAAKAIBPENC*))((::PBYTE)hIl2Cpp + OAAKAIBPENC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAAKAIBPENC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OAAKAIBPENC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OAAKAIBPENC*>*(*)())((::PBYTE)hIl2Cpp + OAAKAIBPENC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAAKAIBPENC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OAAKAIBPENC* Clone()
		{
			return ((::OAAKAIBPENC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAAKAIBPENC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OPGLAKFNMLD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAAKAIBPENC_OPGLAKFNMLD_OFFSET))(this);
		}

		::System::Void BJOCKPBCGAG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OAAKAIBPENC_BJOCKPBCGAG_OFFSET))(this, a1);
		}

		::System::UInt32 JEHNFPAOLPJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAAKAIBPENC_JEHNFPAOLPJ_OFFSET))(this);
		}

		::System::Void GMCDNCNMNOP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OAAKAIBPENC_GMCDNCNMNOP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KCKNGLFCMBI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAAKAIBPENC_KCKNGLFCMBI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OAAKAIBPENC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OAAKAIBPENC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OAAKAIBPENC*))((::PBYTE)hIl2Cpp + OAAKAIBPENC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAAKAIBPENC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAAKAIBPENC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OAAKAIBPENC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAAKAIBPENC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OAAKAIBPENC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAAKAIBPENC*))((::PBYTE)hIl2Cpp + OAAKAIBPENC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OAAKAIBPENC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
