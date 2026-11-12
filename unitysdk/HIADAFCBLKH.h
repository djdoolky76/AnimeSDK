#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDAHFLMBAAB;
class HIADAFCBLKH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIADAFCBLKH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F888400)
#define HIADAFCBLKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8887A0)
#define HIADAFCBLKH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F887F50)
#define HIADAFCBLKH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F887E90)
#define HIADAFCBLKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F887E40)
#define HIADAFCBLKH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F888100)
#define HIADAFCBLKH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F887FB0)
#define HIADAFCBLKH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F887FA0)
#define HIADAFCBLKH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F888220)
#define HIADAFCBLKH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F887E00)
#define HIADAFCBLKH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F8885D0)
#define HIADAFCBLKH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F888530)
#define HIADAFCBLKH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F887F90)
#define HIADAFCBLKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F887E30)
#define HIADAFCBLKH_PMAJHIPLNNM_OFFSET UNITYSDK_OFFSET(0x1F887F80)
#define HIADAFCBLKH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F888290)
#define HIADAFCBLKH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F8882F0)

inline static constexpr unsigned int HIADAFCBLKH_TypeDefinitionIndex = 31744;

	class HIADAFCBLKH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::HDAHFLMBAAB*>* EEMCBBHPDGD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HIADAFCBLKH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HIADAFCBLKH*>**)UnitySDK::FromName("", "HIADAFCBLKH")->GetStaticField(0x305A0);
		}

		static ::Google::Protobuf::FieldCodec_1<::HDAHFLMBAAB*>** StaticGet_AKCFGKEHKAL()
		{
			return (::Google::Protobuf::FieldCodec_1<::HDAHFLMBAAB*>**)UnitySDK::FromName("", "HIADAFCBLKH")->GetStaticField(0x305A8);
		}

		// static const ::System::Object INDHGIGOEGL; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIADAFCBLKH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HIADAFCBLKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIADAFCBLKH*))((::PBYTE)hIl2Cpp + HIADAFCBLKH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIADAFCBLKH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HIADAFCBLKH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HIADAFCBLKH*>*(*)())((::PBYTE)hIl2Cpp + HIADAFCBLKH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIADAFCBLKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HIADAFCBLKH* Clone()
		{
			return ((::HIADAFCBLKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIADAFCBLKH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HDAHFLMBAAB*>* PMAJHIPLNNM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HDAHFLMBAAB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIADAFCBLKH_PMAJHIPLNNM_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIADAFCBLKH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HIADAFCBLKH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIADAFCBLKH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HIADAFCBLKH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIADAFCBLKH*))((::PBYTE)hIl2Cpp + HIADAFCBLKH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIADAFCBLKH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIADAFCBLKH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HIADAFCBLKH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIADAFCBLKH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HIADAFCBLKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIADAFCBLKH*))((::PBYTE)hIl2Cpp + HIADAFCBLKH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HIADAFCBLKH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
