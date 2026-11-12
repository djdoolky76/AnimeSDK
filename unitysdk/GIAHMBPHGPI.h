#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIAHMBPHGPI;
class KNBIPFELFOG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GIAHMBPHGPI_AHIMKFJEJAC_OFFSET UNITYSDK_OFFSET(0x1F783240)
#define GIAHMBPHGPI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F783760)
#define GIAHMBPHGPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F783B80)
#define GIAHMBPHGPI_CFLFNKJPMDM_OFFSET UNITYSDK_OFFSET(0x1F783280)
#define GIAHMBPHGPI_CLONE_OFFSET UNITYSDK_OFFSET(0x1F783210)
#define GIAHMBPHGPI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F783150)
#define GIAHMBPHGPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1F783100)
#define GIAHMBPHGPI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F7833F0)
#define GIAHMBPHGPI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F783290)
#define GIAHMBPHGPI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F783520)
#define GIAHMBPHGPI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F7830C0)
#define GIAHMBPHGPI_MEDDFLDIABK_OFFSET UNITYSDK_OFFSET(0x1F783270)
#define GIAHMBPHGPI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F783990)
#define GIAHMBPHGPI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F7838E0)
#define GIAHMBPHGPI_NPCMHMHCHIN_OFFSET UNITYSDK_OFFSET(0x1F783250)
#define GIAHMBPHGPI_OCLBFNICOHN_OFFSET UNITYSDK_OFFSET(0x1F783260)
#define GIAHMBPHGPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F7830F0)
#define GIAHMBPHGPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F783590)
#define GIAHMBPHGPI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F7835F0)

inline static constexpr unsigned int GIAHMBPHGPI_TypeDefinitionIndex = 31479;

	class GIAHMBPHGPI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::KNBIPFELFOG*>* LHIIKEEFNPJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 DFFCMNOCOMJ; // 0x20
		::System::UInt32 KCMIMKALMNK; // 0x24
		static ::Google::Protobuf::MessageParser_1<::GIAHMBPHGPI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GIAHMBPHGPI*>**)UnitySDK::FromName("", "GIAHMBPHGPI")->GetStaticField(0x10880);
		}

		static ::Google::Protobuf::FieldCodec_1<::KNBIPFELFOG*>** StaticGet_HBLEEBCIDOO()
		{
			return (::Google::Protobuf::FieldCodec_1<::KNBIPFELFOG*>**)UnitySDK::FromName("", "GIAHMBPHGPI")->GetStaticField(0x10888);
		}

		// static const ::System::Object BNKMBBPOMCA; // 0x0
		// static const ::System::Object EHMKMJNLNHA; // 0x0
		// static const ::System::Object MCCLNACNCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAHMBPHGPI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GIAHMBPHGPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIAHMBPHGPI*))((::PBYTE)hIl2Cpp + GIAHMBPHGPI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIAHMBPHGPI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GIAHMBPHGPI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GIAHMBPHGPI*>*(*)())((::PBYTE)hIl2Cpp + GIAHMBPHGPI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAHMBPHGPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GIAHMBPHGPI* Clone()
		{
			return ((::GIAHMBPHGPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAHMBPHGPI_CLONE_OFFSET))(this);
		}

		::System::UInt32 AHIMKFJEJAC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAHMBPHGPI_AHIMKFJEJAC_OFFSET))(this);
		}

		::System::Void NPCMHMHCHIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIAHMBPHGPI_NPCMHMHCHIN_OFFSET))(this, a1);
		}

		::System::UInt32 OCLBFNICOHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAHMBPHGPI_OCLBFNICOHN_OFFSET))(this);
		}

		::System::Void MEDDFLDIABK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIAHMBPHGPI_MEDDFLDIABK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KNBIPFELFOG*>* CFLFNKJPMDM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KNBIPFELFOG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAHMBPHGPI_CFLFNKJPMDM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIAHMBPHGPI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GIAHMBPHGPI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GIAHMBPHGPI*))((::PBYTE)hIl2Cpp + GIAHMBPHGPI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAHMBPHGPI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAHMBPHGPI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GIAHMBPHGPI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAHMBPHGPI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GIAHMBPHGPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIAHMBPHGPI*))((::PBYTE)hIl2Cpp + GIAHMBPHGPI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GIAHMBPHGPI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
