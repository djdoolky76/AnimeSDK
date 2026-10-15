#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOKGDDDHHPD;
class LPKMOEFJGGC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LPKMOEFJGGC_BKJJOFBNEOI_OFFSET UNITYSDK_OFFSET(0x1E9A4670)
#define LPKMOEFJGGC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9A4B60)
#define LPKMOEFJGGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A4F80)
#define LPKMOEFJGGC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9A4610)
#define LPKMOEFJGGC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9A4550)
#define LPKMOEFJGGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A4500)
#define LPKMOEFJGGC_ENEJAIHHLDO_OFFSET UNITYSDK_OFFSET(0x1E9A4660)
#define LPKMOEFJGGC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9A47F0)
#define LPKMOEFJGGC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9A4690)
#define LPKMOEFJGGC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9A4920)
#define LPKMOEFJGGC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9A44C0)
#define LPKMOEFJGGC_MBDMNCDJPDB_OFFSET UNITYSDK_OFFSET(0x1E9A4640)
#define LPKMOEFJGGC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9A4D90)
#define LPKMOEFJGGC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9A4CE0)
#define LPKMOEFJGGC_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1E9A4680)
#define LPKMOEFJGGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9A44F0)
#define LPKMOEFJGGC_PCJOGIAJHMF_OFFSET UNITYSDK_OFFSET(0x1E9A4650)
#define LPKMOEFJGGC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9A4990)
#define LPKMOEFJGGC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9A49F0)

inline static constexpr unsigned int LPKMOEFJGGC_TypeDefinitionIndex = 35024;

	class LPKMOEFJGGC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::IOKGDDDHHPD*>* CBFGBDBJHID; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 JCJAAAEGIIO; // 0x20
		::System::UInt32 MPFELJLKAFH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::LPKMOEFJGGC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LPKMOEFJGGC*>**)UnitySDK::FromName("", "LPKMOEFJGGC")->GetStaticField(0x44DB0);
		}

		static ::Google::Protobuf::FieldCodec_1<::IOKGDDDHHPD*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::IOKGDDDHHPD*>**)UnitySDK::FromName("", "LPKMOEFJGGC")->GetStaticField(0x44DB8);
		}

		// static const ::System::Object CODFBJPPBGL; // 0x0
		// static const ::System::Object NCKJJHMBKFH; // 0x0
		// static const ::System::Object IMGDAOEBONP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKMOEFJGGC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LPKMOEFJGGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPKMOEFJGGC*))((::PBYTE)hIl2Cpp + LPKMOEFJGGC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPKMOEFJGGC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LPKMOEFJGGC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LPKMOEFJGGC*>*(*)())((::PBYTE)hIl2Cpp + LPKMOEFJGGC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKMOEFJGGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LPKMOEFJGGC* Clone()
		{
			return ((::LPKMOEFJGGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKMOEFJGGC_CLONE_OFFSET))(this);
		}

		::System::UInt32 MBDMNCDJPDB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKMOEFJGGC_MBDMNCDJPDB_OFFSET))(this);
		}

		::System::Void PCJOGIAJHMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LPKMOEFJGGC_PCJOGIAJHMF_OFFSET))(this, a1);
		}

		::System::UInt32 ENEJAIHHLDO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKMOEFJGGC_ENEJAIHHLDO_OFFSET))(this);
		}

		::System::Void BKJJOFBNEOI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LPKMOEFJGGC_BKJJOFBNEOI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IOKGDDDHHPD*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IOKGDDDHHPD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKMOEFJGGC_MJOEMBBMBON_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LPKMOEFJGGC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LPKMOEFJGGC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPKMOEFJGGC*))((::PBYTE)hIl2Cpp + LPKMOEFJGGC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKMOEFJGGC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKMOEFJGGC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LPKMOEFJGGC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKMOEFJGGC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LPKMOEFJGGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPKMOEFJGGC*))((::PBYTE)hIl2Cpp + LPKMOEFJGGC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LPKMOEFJGGC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
