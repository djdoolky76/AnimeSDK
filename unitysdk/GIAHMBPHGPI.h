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

#define GIAHMBPHGPI_AHIMKFJEJAC_OFFSET UNITYSDK_OFFSET(0x1E4911A0)
#define GIAHMBPHGPI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4916A0)
#define GIAHMBPHGPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E491AC0)
#define GIAHMBPHGPI_CFLFNKJPMDM_OFFSET UNITYSDK_OFFSET(0x1E4911C0)
#define GIAHMBPHGPI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E491150)
#define GIAHMBPHGPI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E491090)
#define GIAHMBPHGPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E491040)
#define GIAHMBPHGPI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E491330)
#define GIAHMBPHGPI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4911D0)
#define GIAHMBPHGPI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E491460)
#define GIAHMBPHGPI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E491000)
#define GIAHMBPHGPI_MEDDFLDIABK_OFFSET UNITYSDK_OFFSET(0x1E491190)
#define GIAHMBPHGPI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4918D0)
#define GIAHMBPHGPI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E491820)
#define GIAHMBPHGPI_NPCMHMHCHIN_OFFSET UNITYSDK_OFFSET(0x1E4911B0)
#define GIAHMBPHGPI_OCLBFNICOHN_OFFSET UNITYSDK_OFFSET(0x1E491180)
#define GIAHMBPHGPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E491030)
#define GIAHMBPHGPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4914D0)
#define GIAHMBPHGPI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E491530)

inline static constexpr unsigned int GIAHMBPHGPI_TypeDefinitionIndex = 30573;

	class GIAHMBPHGPI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::KNBIPFELFOG*>* LHIIKEEFNPJ; // 0x18
		::System::UInt32 KCMIMKALMNK; // 0x20
		::System::UInt32 DFFCMNOCOMJ; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::KNBIPFELFOG*>** StaticGet_HBLEEBCIDOO()
		{
			return (::Google::Protobuf::FieldCodec_1<::KNBIPFELFOG*>**)UnitySDK::FromName("", "GIAHMBPHGPI")->GetStaticField(0x186D0);
		}

		static ::Google::Protobuf::MessageParser_1<::GIAHMBPHGPI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GIAHMBPHGPI*>**)UnitySDK::FromName("", "GIAHMBPHGPI")->GetStaticField(0x186D8);
		}

		// static const ::System::Object EHMKMJNLNHA; // 0x0
		// static const ::System::Object BNKMBBPOMCA; // 0x0
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

		::System::UInt32 OCLBFNICOHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAHMBPHGPI_OCLBFNICOHN_OFFSET))(this);
		}

		::System::Void MEDDFLDIABK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIAHMBPHGPI_MEDDFLDIABK_OFFSET))(this, a1);
		}

		::System::UInt32 AHIMKFJEJAC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAHMBPHGPI_AHIMKFJEJAC_OFFSET))(this);
		}

		::System::Void NPCMHMHCHIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIAHMBPHGPI_NPCMHMHCHIN_OFFSET))(this, a1);
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
