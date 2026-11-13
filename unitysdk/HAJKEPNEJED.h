#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAJKEPNEJED;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HAJKEPNEJED_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD114D0)
#define HAJKEPNEJED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD117B0)
#define HAJKEPNEJED_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD11040)
#define HAJKEPNEJED_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD10FB0)
#define HAJKEPNEJED_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD10F60)
#define HAJKEPNEJED_DCAAIJACOOH_OFFSET UNITYSDK_OFFSET(0x1FD11090)
#define HAJKEPNEJED_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD111A0)
#define HAJKEPNEJED_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD110A0)
#define HAJKEPNEJED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD11290)
#define HAJKEPNEJED_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD10F20)
#define HAJKEPNEJED_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD11600)
#define HAJKEPNEJED_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD115B0)
#define HAJKEPNEJED_MPEEDLNBONK_OFFSET UNITYSDK_OFFSET(0x1FD11080)
#define HAJKEPNEJED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD10F50)
#define HAJKEPNEJED_PGLNJEILMKB_OFFSET UNITYSDK_OFFSET(0x1FD11070)
#define HAJKEPNEJED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD11390)
#define HAJKEPNEJED_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD113F0)

inline static constexpr unsigned int HAJKEPNEJED_TypeDefinitionIndex = 31454;

	class HAJKEPNEJED : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ENMDCGPDKGL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NFGNEEGBNIF; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HAJKEPNEJED*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HAJKEPNEJED*>**)UnitySDK::FromName("", "HAJKEPNEJED")->GetStaticField(0x1F6F0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FDPOEFGBOOA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "HAJKEPNEJED")->GetStaticField(0x1F6F8);
		}

		// static const ::System::Object KPGNEGMDKCI; // 0x0
		// static const ::System::Object IMMIFHODMFM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJKEPNEJED_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HAJKEPNEJED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAJKEPNEJED*))((::PBYTE)hIl2Cpp + HAJKEPNEJED_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAJKEPNEJED_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HAJKEPNEJED*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HAJKEPNEJED*>*(*)())((::PBYTE)hIl2Cpp + HAJKEPNEJED_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJKEPNEJED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HAJKEPNEJED* Clone()
		{
			return ((::HAJKEPNEJED*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJKEPNEJED_CLONE_OFFSET))(this);
		}

		::System::UInt32 PGLNJEILMKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJKEPNEJED_PGLNJEILMKB_OFFSET))(this);
		}

		::System::Void MPEEDLNBONK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HAJKEPNEJED_MPEEDLNBONK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DCAAIJACOOH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJKEPNEJED_DCAAIJACOOH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAJKEPNEJED_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HAJKEPNEJED* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJKEPNEJED*))((::PBYTE)hIl2Cpp + HAJKEPNEJED_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJKEPNEJED_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJKEPNEJED_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HAJKEPNEJED_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJKEPNEJED_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HAJKEPNEJED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAJKEPNEJED*))((::PBYTE)hIl2Cpp + HAJKEPNEJED_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HAJKEPNEJED_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
