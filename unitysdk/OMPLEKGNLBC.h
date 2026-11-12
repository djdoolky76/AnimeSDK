#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBDBODNJACD;
class OMPLEKGNLBC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OMPLEKGNLBC_AILACCLIFBD_OFFSET UNITYSDK_OFFSET(0x1F187C10)
#define OMPLEKGNLBC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F188140)
#define OMPLEKGNLBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F188400)
#define OMPLEKGNLBC_CLONE_OFFSET UNITYSDK_OFFSET(0x1F187BA0)
#define OMPLEKGNLBC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F187A70)
#define OMPLEKGNLBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1879E0)
#define OMPLEKGNLBC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F187C90)
#define OMPLEKGNLBC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F187C30)
#define OMPLEKGNLBC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F187DF0)
#define OMPLEKGNLBC_HLNDFLNCDJG_OFFSET UNITYSDK_OFFSET(0x1F187BF0)
#define OMPLEKGNLBC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F187970)
#define OMPLEKGNLBC_LPJKHNFFCDJ_OFFSET UNITYSDK_OFFSET(0x1F187C00)
#define OMPLEKGNLBC_MDDIMFKCKFI_OFFSET UNITYSDK_OFFSET(0x1F187C20)
#define OMPLEKGNLBC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F1882D0)
#define OMPLEKGNLBC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F188210)
#define OMPLEKGNLBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F1879D0)
#define OMPLEKGNLBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F187F40)
#define OMPLEKGNLBC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F187FA0)

inline static constexpr unsigned int OMPLEKGNLBC_TypeDefinitionIndex = 28583;

	class OMPLEKGNLBC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::OBDBODNJACD*>* JCBODCAOPNP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EFDLLIGPGAO; // 0x20
		::System::Boolean NGCGNCPKIEC; // 0x28
		static ::Google::Protobuf::MessageParser_1<::OMPLEKGNLBC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OMPLEKGNLBC*>**)UnitySDK::FromName("", "OMPLEKGNLBC")->GetStaticField(0x25720);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PMEEMEINKBA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OMPLEKGNLBC")->GetStaticField(0x25728);
		}

		static ::Google::Protobuf::FieldCodec_1<::OBDBODNJACD*>** StaticGet_MHKCJBOBAEH()
		{
			return (::Google::Protobuf::FieldCodec_1<::OBDBODNJACD*>**)UnitySDK::FromName("", "OMPLEKGNLBC")->GetStaticField(0x25730);
		}

		// static const ::System::Object EHHJNIDJIFK; // 0x0
		// static const ::System::Object BFLHHJPMDGD; // 0x0
		// static const ::System::Object LMJJGNPKLDI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPLEKGNLBC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OMPLEKGNLBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMPLEKGNLBC*))((::PBYTE)hIl2Cpp + OMPLEKGNLBC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMPLEKGNLBC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OMPLEKGNLBC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OMPLEKGNLBC*>*(*)())((::PBYTE)hIl2Cpp + OMPLEKGNLBC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPLEKGNLBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OMPLEKGNLBC* Clone()
		{
			return ((::OMPLEKGNLBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPLEKGNLBC_CLONE_OFFSET))(this);
		}

		::System::Boolean HLNDFLNCDJG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPLEKGNLBC_HLNDFLNCDJG_OFFSET))(this);
		}

		::System::Void LPJKHNFFCDJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMPLEKGNLBC_LPJKHNFFCDJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OBDBODNJACD*>* AILACCLIFBD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OBDBODNJACD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPLEKGNLBC_AILACCLIFBD_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MDDIMFKCKFI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPLEKGNLBC_MDDIMFKCKFI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMPLEKGNLBC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OMPLEKGNLBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OMPLEKGNLBC*))((::PBYTE)hIl2Cpp + OMPLEKGNLBC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPLEKGNLBC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPLEKGNLBC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OMPLEKGNLBC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPLEKGNLBC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OMPLEKGNLBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMPLEKGNLBC*))((::PBYTE)hIl2Cpp + OMPLEKGNLBC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OMPLEKGNLBC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
