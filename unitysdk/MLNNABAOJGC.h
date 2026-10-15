#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLNNABAOJGC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PileItem; }
namespace System { class Object; }
namespace System { class String; }

#define MLNNABAOJGC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA56D70)
#define MLNNABAOJGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA57070)
#define MLNNABAOJGC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA568B0)
#define MLNNABAOJGC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA56820)
#define MLNNABAOJGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA567E0)
#define MLNNABAOJGC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA56A50)
#define MLNNABAOJGC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA56910)
#define MLNNABAOJGC_FPAIFINNCAL_OFFSET UNITYSDK_OFFSET(0x1EA568F0)
#define MLNNABAOJGC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA56B70)
#define MLNNABAOJGC_IAKJGGHFKFN_OFFSET UNITYSDK_OFFSET(0x1EA56900)
#define MLNNABAOJGC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA567A0)
#define MLNNABAOJGC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA56EB0)
#define MLNNABAOJGC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA56E10)
#define MLNNABAOJGC_MNKFEANMCOB_OFFSET UNITYSDK_OFFSET(0x1EA568E0)
#define MLNNABAOJGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA567D0)
#define MLNNABAOJGC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA56BE0)
#define MLNNABAOJGC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA56C40)

inline static constexpr unsigned int MLNNABAOJGC_TypeDefinitionIndex = 30198;

	class MLNNABAOJGC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* OEPIMOOJHAM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean OLHDBJLDJEJ; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MLNNABAOJGC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MLNNABAOJGC*>**)UnitySDK::FromName("", "MLNNABAOJGC")->GetStaticField(0x569E0);
		}

		static ::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>** StaticGet_KMKECFIHFFA()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>**)UnitySDK::FromName("", "MLNNABAOJGC")->GetStaticField(0x569E8);
		}

		// static const ::System::Object KHCEJKGGIGN; // 0x0
		// static const ::System::Object ACAHFGLCIBE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNNABAOJGC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MLNNABAOJGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLNNABAOJGC*))((::PBYTE)hIl2Cpp + MLNNABAOJGC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLNNABAOJGC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MLNNABAOJGC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MLNNABAOJGC*>*(*)())((::PBYTE)hIl2Cpp + MLNNABAOJGC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNNABAOJGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MLNNABAOJGC* Clone()
		{
			return ((::MLNNABAOJGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNNABAOJGC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* MNKFEANMCOB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNNABAOJGC_MNKFEANMCOB_OFFSET))(this);
		}

		::System::Boolean FPAIFINNCAL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNNABAOJGC_FPAIFINNCAL_OFFSET))(this);
		}

		::System::Void IAKJGGHFKFN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MLNNABAOJGC_IAKJGGHFKFN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLNNABAOJGC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MLNNABAOJGC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MLNNABAOJGC*))((::PBYTE)hIl2Cpp + MLNNABAOJGC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNNABAOJGC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNNABAOJGC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MLNNABAOJGC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNNABAOJGC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MLNNABAOJGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLNNABAOJGC*))((::PBYTE)hIl2Cpp + MLNNABAOJGC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MLNNABAOJGC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
