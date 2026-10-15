#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJFIJODMGGB;
class NJMOBNILIHI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JJFIJODMGGB_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E72D7D0)
#define JJFIJODMGGB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E72DCE0)
#define JJFIJODMGGB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E72E100)
#define JJFIJODMGGB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E72D790)
#define JJFIJODMGGB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E72D6D0)
#define JJFIJODMGGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E72D680)
#define JJFIJODMGGB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E72D970)
#define JJFIJODMGGB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E72D810)
#define JJFIJODMGGB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E72D7F0)
#define JJFIJODMGGB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E72DAA0)
#define JJFIJODMGGB_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E72D7C0)
#define JJFIJODMGGB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E72D640)
#define JJFIJODMGGB_MAKHOLNJEKE_OFFSET UNITYSDK_OFFSET(0x1E72D800)
#define JJFIJODMGGB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E72DF10)
#define JJFIJODMGGB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E72DE60)
#define JJFIJODMGGB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E72D7E0)
#define JJFIJODMGGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E72D670)
#define JJFIJODMGGB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E72DB10)
#define JJFIJODMGGB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E72DB70)

inline static constexpr unsigned int JJFIJODMGGB_TypeDefinitionIndex = 29074;

	class JJFIJODMGGB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::NJMOBNILIHI*>* GGLMGPKDBMM; // 0x18
		::System::UInt32 IBEBBFIHLLP; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::JJFIJODMGGB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JJFIJODMGGB*>**)UnitySDK::FromName("", "JJFIJODMGGB")->GetStaticField(0x62880);
		}

		static ::Google::Protobuf::FieldCodec_1<::NJMOBNILIHI*>** StaticGet_HCNBDMCKDJG()
		{
			return (::Google::Protobuf::FieldCodec_1<::NJMOBNILIHI*>**)UnitySDK::FromName("", "JJFIJODMGGB")->GetStaticField(0x62888);
		}

		// static const ::System::Object AODKNNMBGAD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HFHNMLHNFNB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFIJODMGGB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JJFIJODMGGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJFIJODMGGB*))((::PBYTE)hIl2Cpp + JJFIJODMGGB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJFIJODMGGB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JJFIJODMGGB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JJFIJODMGGB*>*(*)())((::PBYTE)hIl2Cpp + JJFIJODMGGB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFIJODMGGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JJFIJODMGGB* Clone()
		{
			return ((::JJFIJODMGGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFIJODMGGB_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFIJODMGGB_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JJFIJODMGGB_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFIJODMGGB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JJFIJODMGGB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NJMOBNILIHI*>* MAKHOLNJEKE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NJMOBNILIHI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFIJODMGGB_MAKHOLNJEKE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JJFIJODMGGB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JJFIJODMGGB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJFIJODMGGB*))((::PBYTE)hIl2Cpp + JJFIJODMGGB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFIJODMGGB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFIJODMGGB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JJFIJODMGGB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFIJODMGGB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JJFIJODMGGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJFIJODMGGB*))((::PBYTE)hIl2Cpp + JJFIJODMGGB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JJFIJODMGGB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
