#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMFJEJBNCNB;
class FBNBEIKABGE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DMFJEJBNCNB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1BE550)
#define DMFJEJBNCNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1BE850)
#define DMFJEJBNCNB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1BE130)
#define DMFJEJBNCNB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1BE080)
#define DMFJEJBNCNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BE030)
#define DMFJEJBNCNB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1BE2B0)
#define DMFJEJBNCNB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1BE170)
#define DMFJEJBNCNB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1BE3D0)
#define DMFJEJBNCNB_HONGLJECAAC_OFFSET UNITYSDK_OFFSET(0x1E1BE160)
#define DMFJEJBNCNB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1BDFF0)
#define DMFJEJBNCNB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1BE690)
#define DMFJEJBNCNB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1BE5F0)
#define DMFJEJBNCNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1BE020)
#define DMFJEJBNCNB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1BE440)
#define DMFJEJBNCNB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1BE4A0)

inline static constexpr unsigned int DMFJEJBNCNB_TypeDefinitionIndex = 30128;

	class DMFJEJBNCNB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::FBNBEIKABGE*>* AFNHANNCAMC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::FBNBEIKABGE*>** StaticGet_FCNMONMFJEF()
		{
			return (::Google::Protobuf::FieldCodec_1<::FBNBEIKABGE*>**)UnitySDK::FromName("", "DMFJEJBNCNB")->GetStaticField(0x35FB0);
		}

		static ::Google::Protobuf::MessageParser_1<::DMFJEJBNCNB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DMFJEJBNCNB*>**)UnitySDK::FromName("", "DMFJEJBNCNB")->GetStaticField(0x35FB8);
		}

		// static const ::System::Object GEJEJNNMGGP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFJEJBNCNB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DMFJEJBNCNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMFJEJBNCNB*))((::PBYTE)hIl2Cpp + DMFJEJBNCNB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMFJEJBNCNB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DMFJEJBNCNB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DMFJEJBNCNB*>*(*)())((::PBYTE)hIl2Cpp + DMFJEJBNCNB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFJEJBNCNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DMFJEJBNCNB* Clone()
		{
			return ((::DMFJEJBNCNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFJEJBNCNB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FBNBEIKABGE*>* HONGLJECAAC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FBNBEIKABGE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFJEJBNCNB_HONGLJECAAC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DMFJEJBNCNB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DMFJEJBNCNB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DMFJEJBNCNB*))((::PBYTE)hIl2Cpp + DMFJEJBNCNB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFJEJBNCNB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFJEJBNCNB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DMFJEJBNCNB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFJEJBNCNB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DMFJEJBNCNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMFJEJBNCNB*))((::PBYTE)hIl2Cpp + DMFJEJBNCNB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DMFJEJBNCNB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
