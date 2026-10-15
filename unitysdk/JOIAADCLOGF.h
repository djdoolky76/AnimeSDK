#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOIAADCLOGF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JOIAADCLOGF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7A3870)
#define JOIAADCLOGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7A3B10)
#define JOIAADCLOGF_CEKHBMFJDIH_OFFSET UNITYSDK_OFFSET(0x1E7A3450)
#define JOIAADCLOGF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7A33E0)
#define JOIAADCLOGF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7A3350)
#define JOIAADCLOGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A3300)
#define JOIAADCLOGF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7A34E0)
#define JOIAADCLOGF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7A3460)
#define JOIAADCLOGF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7A3430)
#define JOIAADCLOGF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7A35E0)
#define JOIAADCLOGF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7A32C0)
#define JOIAADCLOGF_KMFAKHAKJLL_OFFSET UNITYSDK_OFFSET(0x1E7A3440)
#define JOIAADCLOGF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7A3A40)
#define JOIAADCLOGF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7A39E0)
#define JOIAADCLOGF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7A3420)
#define JOIAADCLOGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7A32F0)
#define JOIAADCLOGF_PMFMAFPFBGJ_OFFSET UNITYSDK_OFFSET(0x1E7A3410)
#define JOIAADCLOGF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7A36E0)
#define JOIAADCLOGF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7A3740)

	class JOIAADCLOGF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EDKFHJOFFPM; // 0x18
		::System::UInt32 GBHALKHPMCE; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::FieldCodec** StaticGet_ALEJKEIOAAE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "JOIAADCLOGF")->GetStaticField(0x6D070);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JOIAADCLOGF")->GetStaticField(0x6D078);
		}

		// static const ::System::Object DDJBILIACCH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DHHMBIGBCEG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIAADCLOGF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JOIAADCLOGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOIAADCLOGF*))((::PBYTE)hIl2Cpp + JOIAADCLOGF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOIAADCLOGF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JOIAADCLOGF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIAADCLOGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JOIAADCLOGF* Clone()
		{
			return ((::JOIAADCLOGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIAADCLOGF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PMFMAFPFBGJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIAADCLOGF_PMFMAFPFBGJ_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIAADCLOGF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JOIAADCLOGF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 KMFAKHAKJLL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIAADCLOGF_KMFAKHAKJLL_OFFSET))(this);
		}

		::System::Void CEKHBMFJDIH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JOIAADCLOGF_CEKHBMFJDIH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JOIAADCLOGF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JOIAADCLOGF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOIAADCLOGF*))((::PBYTE)hIl2Cpp + JOIAADCLOGF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIAADCLOGF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIAADCLOGF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JOIAADCLOGF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIAADCLOGF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JOIAADCLOGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOIAADCLOGF*))((::PBYTE)hIl2Cpp + JOIAADCLOGF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JOIAADCLOGF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
