#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPIFGEONFPI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DPIFGEONFPI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E210F70)
#define DPIFGEONFPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2112C0)
#define DPIFGEONFPI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E210A60)
#define DPIFGEONFPI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2109D0)
#define DPIFGEONFPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E210980)
#define DPIFGEONFPI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E210C10)
#define DPIFGEONFPI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E210AE0)
#define DPIFGEONFPI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E210D00)
#define DPIFGEONFPI_IKEOIMIDAHJ_OFFSET UNITYSDK_OFFSET(0x1E210AD0)
#define DPIFGEONFPI_JINLEONNCEN_OFFSET UNITYSDK_OFFSET(0x1E210AB0)
#define DPIFGEONFPI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E210910)
#define DPIFGEONFPI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2110F0)
#define DPIFGEONFPI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2110A0)
#define DPIFGEONFPI_NIKPNLKMIBL_OFFSET UNITYSDK_OFFSET(0x1E210AC0)
#define DPIFGEONFPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E210970)
#define DPIFGEONFPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E210E00)
#define DPIFGEONFPI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E210E60)

	class DPIFGEONFPI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHHJMABBLAH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 MLLJMFGPJLL; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DPIFGEONFPI")->GetStaticField(0x45990);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JPAEBNKOHFA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DPIFGEONFPI")->GetStaticField(0x45998);
		}

		// static const ::System::Object DGOKAKPOELJ; // 0x0
		// static const ::System::Object EGMMMJMLHMP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIFGEONFPI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DPIFGEONFPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPIFGEONFPI*))((::PBYTE)hIl2Cpp + DPIFGEONFPI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPIFGEONFPI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DPIFGEONFPI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIFGEONFPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DPIFGEONFPI* Clone()
		{
			return ((::DPIFGEONFPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIFGEONFPI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JINLEONNCEN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIFGEONFPI_JINLEONNCEN_OFFSET))(this);
		}

		::System::UInt32 NIKPNLKMIBL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIFGEONFPI_NIKPNLKMIBL_OFFSET))(this);
		}

		::System::Void IKEOIMIDAHJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DPIFGEONFPI_IKEOIMIDAHJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPIFGEONFPI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DPIFGEONFPI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DPIFGEONFPI*))((::PBYTE)hIl2Cpp + DPIFGEONFPI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIFGEONFPI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIFGEONFPI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DPIFGEONFPI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIFGEONFPI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DPIFGEONFPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPIFGEONFPI*))((::PBYTE)hIl2Cpp + DPIFGEONFPI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DPIFGEONFPI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
