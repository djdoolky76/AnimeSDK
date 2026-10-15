#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCLIPJHEAGJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define OCLIPJHEAGJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE180F0)
#define OCLIPJHEAGJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE183D0)
#define OCLIPJHEAGJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE17AB0)
#define OCLIPJHEAGJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE179F0)
#define OCLIPJHEAGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE179A0)
#define OCLIPJHEAGJ_DPKOHJLBEBB_OFFSET UNITYSDK_OFFSET(0x1DE17B10)
#define OCLIPJHEAGJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE17C50)
#define OCLIPJHEAGJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE17B30)
#define OCLIPJHEAGJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DE17AF0)
#define OCLIPJHEAGJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE17E00)
#define OCLIPJHEAGJ_IJPLICKGMHC_OFFSET UNITYSDK_OFFSET(0x1DE17B20)
#define OCLIPJHEAGJ_IOEMIGKJOAG_OFFSET UNITYSDK_OFFSET(0x1DE17B00)
#define OCLIPJHEAGJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE17960)
#define OCLIPJHEAGJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE182B0)
#define OCLIPJHEAGJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE18200)
#define OCLIPJHEAGJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DE17AE0)
#define OCLIPJHEAGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE17990)
#define OCLIPJHEAGJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE17F60)
#define OCLIPJHEAGJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE17FC0)

inline static constexpr unsigned int OCLIPJHEAGJ_TypeDefinitionIndex = 31235;

	class OCLIPJHEAGJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NADMPFLLLME; // 0x18
		::Proto::ItemList* JEDJCPJBEOM; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OCLIPJHEAGJ")->GetStaticField(0x13160);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_AMENAKGFOPI()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OCLIPJHEAGJ")->GetStaticField(0x13168);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LCOBHLBDBMG; // 0x0
		// static const ::System::Object HPGDFCOBPGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLIPJHEAGJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OCLIPJHEAGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCLIPJHEAGJ*))((::PBYTE)hIl2Cpp + OCLIPJHEAGJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCLIPJHEAGJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OCLIPJHEAGJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLIPJHEAGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OCLIPJHEAGJ* Clone()
		{
			return ((::OCLIPJHEAGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLIPJHEAGJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLIPJHEAGJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCLIPJHEAGJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IOEMIGKJOAG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLIPJHEAGJ_IOEMIGKJOAG_OFFSET))(this);
		}

		::Proto::ItemList* DPKOHJLBEBB()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLIPJHEAGJ_DPKOHJLBEBB_OFFSET))(this);
		}

		::System::Void IJPLICKGMHC(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + OCLIPJHEAGJ_IJPLICKGMHC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCLIPJHEAGJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OCLIPJHEAGJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCLIPJHEAGJ*))((::PBYTE)hIl2Cpp + OCLIPJHEAGJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLIPJHEAGJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLIPJHEAGJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OCLIPJHEAGJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLIPJHEAGJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OCLIPJHEAGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCLIPJHEAGJ*))((::PBYTE)hIl2Cpp + OCLIPJHEAGJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OCLIPJHEAGJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
