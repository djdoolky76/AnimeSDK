#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNHBCBIDFBE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PNHBCBIDFBE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFB9620)
#define PNHBCBIDFBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFB9910)
#define PNHBCBIDFBE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFB9120)
#define PNHBCBIDFBE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFB9090)
#define PNHBCBIDFBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB9040)
#define PNHBCBIDFBE_EHMCHEJIDFA_OFFSET UNITYSDK_OFFSET(0x1DFB91A0)
#define PNHBCBIDFBE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFB9260)
#define PNHBCBIDFBE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFB91C0)
#define PNHBCBIDFBE_FHDDMMJENBC_OFFSET UNITYSDK_OFFSET(0x1DFB9170)
#define PNHBCBIDFBE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFB9360)
#define PNHBCBIDFBE_GMCOKCKEDLC_OFFSET UNITYSDK_OFFSET(0x1DFB9190)
#define PNHBCBIDFBE_INDOEFMDAOK_OFFSET UNITYSDK_OFFSET(0x1DFB9180)
#define PNHBCBIDFBE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFB8FD0)
#define PNHBCBIDFBE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFB9820)
#define PNHBCBIDFBE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFB97C0)
#define PNHBCBIDFBE_MKOKIOMDKOH_OFFSET UNITYSDK_OFFSET(0x1DFB91B0)
#define PNHBCBIDFBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFB9030)
#define PNHBCBIDFBE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFB9460)
#define PNHBCBIDFBE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFB94C0)

inline static constexpr unsigned int PNHBCBIDFBE_TypeDefinitionIndex = 28568;

	class PNHBCBIDFBE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MGAJGDIMAEE; // 0x18
		::System::UInt32 DDJCFFNPCNO; // 0x20
		::System::UInt32 FMCFBIJJCBM; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PNHBCBIDFBE")->GetStaticField(0x50DF0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_GJAIDMBHENL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PNHBCBIDFBE")->GetStaticField(0x50DF8);
		}

		// static const ::System::Object GBKBMEFJBPI; // 0x0
		// static const ::System::Object BMLOHFPHLOL; // 0x0
		// static const ::System::Object OPBKFKAEABK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHBCBIDFBE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PNHBCBIDFBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNHBCBIDFBE*))((::PBYTE)hIl2Cpp + PNHBCBIDFBE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNHBCBIDFBE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PNHBCBIDFBE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHBCBIDFBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PNHBCBIDFBE* Clone()
		{
			return ((::PNHBCBIDFBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHBCBIDFBE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FHDDMMJENBC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHBCBIDFBE_FHDDMMJENBC_OFFSET))(this);
		}

		::System::UInt32 INDOEFMDAOK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHBCBIDFBE_INDOEFMDAOK_OFFSET))(this);
		}

		::System::Void GMCOKCKEDLC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNHBCBIDFBE_GMCOKCKEDLC_OFFSET))(this, a1);
		}

		::System::UInt32 EHMCHEJIDFA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHBCBIDFBE_EHMCHEJIDFA_OFFSET))(this);
		}

		::System::Void MKOKIOMDKOH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNHBCBIDFBE_MKOKIOMDKOH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNHBCBIDFBE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PNHBCBIDFBE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNHBCBIDFBE*))((::PBYTE)hIl2Cpp + PNHBCBIDFBE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHBCBIDFBE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHBCBIDFBE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PNHBCBIDFBE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHBCBIDFBE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PNHBCBIDFBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNHBCBIDFBE*))((::PBYTE)hIl2Cpp + PNHBCBIDFBE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PNHBCBIDFBE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
