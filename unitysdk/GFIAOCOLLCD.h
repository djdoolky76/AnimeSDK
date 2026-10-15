#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFIAOCOLLCD;
class JFGCABMMKAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GFIAOCOLLCD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E441810)
#define GFIAOCOLLCD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E441BB0)
#define GFIAOCOLLCD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E441370)
#define GFIAOCOLLCD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4412E0)
#define GFIAOCOLLCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4412A0)
#define GFIAOCOLLCD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E441520)
#define GFIAOCOLLCD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4413D0)
#define GFIAOCOLLCD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4413C0)
#define GFIAOCOLLCD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E441640)
#define GFIAOCOLLCD_GIPMBNDNBIA_OFFSET UNITYSDK_OFFSET(0x1E4413A0)
#define GFIAOCOLLCD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E441260)
#define GFIAOCOLLCD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4419E0)
#define GFIAOCOLLCD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E441940)
#define GFIAOCOLLCD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4413B0)
#define GFIAOCOLLCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E441290)
#define GFIAOCOLLCD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4416B0)
#define GFIAOCOLLCD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E441710)

inline static constexpr unsigned int GFIAOCOLLCD_TypeDefinitionIndex = 34271;

	class GFIAOCOLLCD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::JFGCABMMKAB*>* OEPHKKPDMJP; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GFIAOCOLLCD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GFIAOCOLLCD*>**)UnitySDK::FromName("", "GFIAOCOLLCD")->GetStaticField(0x13C60);
		}

		static ::Google::Protobuf::FieldCodec_1<::JFGCABMMKAB*>** StaticGet_KIEIFOIPOIG()
		{
			return (::Google::Protobuf::FieldCodec_1<::JFGCABMMKAB*>**)UnitySDK::FromName("", "GFIAOCOLLCD")->GetStaticField(0x13C68);
		}

		// static const ::System::Object KPCMLBHKOAE; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIAOCOLLCD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GFIAOCOLLCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFIAOCOLLCD*))((::PBYTE)hIl2Cpp + GFIAOCOLLCD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFIAOCOLLCD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GFIAOCOLLCD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GFIAOCOLLCD*>*(*)())((::PBYTE)hIl2Cpp + GFIAOCOLLCD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIAOCOLLCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFIAOCOLLCD* Clone()
		{
			return ((::GFIAOCOLLCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIAOCOLLCD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JFGCABMMKAB*>* GIPMBNDNBIA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JFGCABMMKAB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIAOCOLLCD_GIPMBNDNBIA_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIAOCOLLCD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFIAOCOLLCD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFIAOCOLLCD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GFIAOCOLLCD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFIAOCOLLCD*))((::PBYTE)hIl2Cpp + GFIAOCOLLCD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIAOCOLLCD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIAOCOLLCD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GFIAOCOLLCD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIAOCOLLCD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GFIAOCOLLCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFIAOCOLLCD*))((::PBYTE)hIl2Cpp + GFIAOCOLLCD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GFIAOCOLLCD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
