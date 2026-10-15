#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIIEKGHDHJP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GIIEKGHDHJP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E46BC30)
#define GIIEKGHDHJP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E46BF60)
#define GIIEKGHDHJP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E46B710)
#define GIIEKGHDHJP_CMKOJMCOAOA_OFFSET UNITYSDK_OFFSET(0x1E46B790)
#define GIIEKGHDHJP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E46B670)
#define GIIEKGHDHJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E46B620)
#define GIIEKGHDHJP_DOINAIBOGOI_OFFSET UNITYSDK_OFFSET(0x1E46B760)
#define GIIEKGHDHJP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E46B830)
#define GIIEKGHDHJP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E46B7B0)
#define GIIEKGHDHJP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E46B940)
#define GIIEKGHDHJP_HLIODMGDCLP_OFFSET UNITYSDK_OFFSET(0x1E46B750)
#define GIIEKGHDHJP_ICBIEBJKECD_OFFSET UNITYSDK_OFFSET(0x1E46B780)
#define GIIEKGHDHJP_IELCCNPGBLI_OFFSET UNITYSDK_OFFSET(0x1E46B770)
#define GIIEKGHDHJP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E46B5E0)
#define GIIEKGHDHJP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E46BE70)
#define GIIEKGHDHJP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E46BE10)
#define GIIEKGHDHJP_NNGGEBKCOHE_OFFSET UNITYSDK_OFFSET(0x1E46B7A0)
#define GIIEKGHDHJP_NNLHOOJGJKH_OFFSET UNITYSDK_OFFSET(0x1E46B740)
#define GIIEKGHDHJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E46B610)
#define GIIEKGHDHJP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E46BA40)
#define GIIEKGHDHJP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E46BAA0)

inline static constexpr unsigned int GIIEKGHDHJP_TypeDefinitionIndex = 26436;

	class GIIEKGHDHJP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EEBIGLPNIDO; // 0x18
		::System::UInt32 ALELBFOECKB; // 0x20
		::System::UInt32 FJLILEOEEIB; // 0x24
		::System::UInt32 BHKOGOBFOLA; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MBAALDMILFH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GIIEKGHDHJP")->GetStaticField(0x18B50);
		}

		static ::Google::Protobuf::MessageParser_1<::GIIEKGHDHJP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GIIEKGHDHJP*>**)UnitySDK::FromName("", "GIIEKGHDHJP")->GetStaticField(0x18B58);
		}

		// static const ::System::Object HLOGIOLMMBK; // 0x0
		// static const ::System::Object JBLABOEPILK; // 0x0
		// static const ::System::Object MDPKMIPMCLD; // 0x0
		// static const ::System::Object KHLPONOEOPD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIEKGHDHJP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GIIEKGHDHJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIIEKGHDHJP*))((::PBYTE)hIl2Cpp + GIIEKGHDHJP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIIEKGHDHJP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GIIEKGHDHJP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GIIEKGHDHJP*>*(*)())((::PBYTE)hIl2Cpp + GIIEKGHDHJP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIEKGHDHJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GIIEKGHDHJP* Clone()
		{
			return ((::GIIEKGHDHJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIEKGHDHJP_CLONE_OFFSET))(this);
		}

		::System::UInt32 NNLHOOJGJKH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIEKGHDHJP_NNLHOOJGJKH_OFFSET))(this);
		}

		::System::Void HLIODMGDCLP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIIEKGHDHJP_HLIODMGDCLP_OFFSET))(this, a1);
		}

		::System::UInt32 DOINAIBOGOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIEKGHDHJP_DOINAIBOGOI_OFFSET))(this);
		}

		::System::Void IELCCNPGBLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIIEKGHDHJP_IELCCNPGBLI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ICBIEBJKECD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIEKGHDHJP_ICBIEBJKECD_OFFSET))(this);
		}

		::System::UInt32 CMKOJMCOAOA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIEKGHDHJP_CMKOJMCOAOA_OFFSET))(this);
		}

		::System::Void NNGGEBKCOHE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIIEKGHDHJP_NNGGEBKCOHE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIIEKGHDHJP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GIIEKGHDHJP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GIIEKGHDHJP*))((::PBYTE)hIl2Cpp + GIIEKGHDHJP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIEKGHDHJP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIEKGHDHJP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GIIEKGHDHJP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIEKGHDHJP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GIIEKGHDHJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIIEKGHDHJP*))((::PBYTE)hIl2Cpp + GIIEKGHDHJP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GIIEKGHDHJP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
