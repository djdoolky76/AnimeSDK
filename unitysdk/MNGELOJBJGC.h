#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNGELOJBJGC;
class NMEGIPHFFDA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MNGELOJBJGC_BGAPBAMMAGK_OFFSET UNITYSDK_OFFSET(0x1EA6B030)
#define MNGELOJBJGC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA6B500)
#define MNGELOJBJGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA6B910)
#define MNGELOJBJGC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA6AFC0)
#define MNGELOJBJGC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA6AF20)
#define MNGELOJBJGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6AEE0)
#define MNGELOJBJGC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA6B1A0)
#define MNGELOJBJGC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA6B040)
#define MNGELOJBJGC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA6B020)
#define MNGELOJBJGC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA6B2D0)
#define MNGELOJBJGC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA6AEA0)
#define MNGELOJBJGC_KDNHNPNPKBC_OFFSET UNITYSDK_OFFSET(0x1EA6AFF0)
#define MNGELOJBJGC_KOBLNFLPDNO_OFFSET UNITYSDK_OFFSET(0x1EA6B000)
#define MNGELOJBJGC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA6B730)
#define MNGELOJBJGC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA6B680)
#define MNGELOJBJGC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA6B010)
#define MNGELOJBJGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA6AED0)
#define MNGELOJBJGC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA6B340)
#define MNGELOJBJGC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA6B3A0)

inline static constexpr unsigned int MNGELOJBJGC_TypeDefinitionIndex = 26659;

	class MNGELOJBJGC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::NMEGIPHFFDA*>* OJFJBMMAHEJ; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 OGPCPDMFLJD; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::NMEGIPHFFDA*>** StaticGet_GCHJHCOKFGD()
		{
			return (::Google::Protobuf::FieldCodec_1<::NMEGIPHFFDA*>**)UnitySDK::FromName("", "MNGELOJBJGC")->GetStaticField(0x59550);
		}

		static ::Google::Protobuf::MessageParser_1<::MNGELOJBJGC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MNGELOJBJGC*>**)UnitySDK::FromName("", "MNGELOJBJGC")->GetStaticField(0x59558);
		}

		// static const ::System::Object APCIFJIHLPP; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CMOMAELPCOE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGELOJBJGC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MNGELOJBJGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNGELOJBJGC*))((::PBYTE)hIl2Cpp + MNGELOJBJGC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNGELOJBJGC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MNGELOJBJGC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MNGELOJBJGC*>*(*)())((::PBYTE)hIl2Cpp + MNGELOJBJGC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGELOJBJGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MNGELOJBJGC* Clone()
		{
			return ((::MNGELOJBJGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGELOJBJGC_CLONE_OFFSET))(this);
		}

		::System::UInt32 KDNHNPNPKBC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGELOJBJGC_KDNHNPNPKBC_OFFSET))(this);
		}

		::System::Void KOBLNFLPDNO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MNGELOJBJGC_KOBLNFLPDNO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGELOJBJGC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MNGELOJBJGC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NMEGIPHFFDA*>* BGAPBAMMAGK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NMEGIPHFFDA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGELOJBJGC_BGAPBAMMAGK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MNGELOJBJGC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MNGELOJBJGC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MNGELOJBJGC*))((::PBYTE)hIl2Cpp + MNGELOJBJGC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGELOJBJGC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGELOJBJGC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MNGELOJBJGC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGELOJBJGC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MNGELOJBJGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNGELOJBJGC*))((::PBYTE)hIl2Cpp + MNGELOJBJGC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MNGELOJBJGC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
