#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNHBCBIDFBE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PNHBCBIDFBE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20205170)
#define PNHBCBIDFBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x20205460)
#define PNHBCBIDFBE_CLONE_OFFSET UNITYSDK_OFFSET(0x20204C70)
#define PNHBCBIDFBE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20204BE0)
#define PNHBCBIDFBE_CTOR_OFFSET UNITYSDK_OFFSET(0x20204B90)
#define PNHBCBIDFBE_EHMCHEJIDFA_OFFSET UNITYSDK_OFFSET(0x20204CF0)
#define PNHBCBIDFBE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20204DB0)
#define PNHBCBIDFBE_EQUALS_OFFSET UNITYSDK_OFFSET(0x20204D10)
#define PNHBCBIDFBE_FHDDMMJENBC_OFFSET UNITYSDK_OFFSET(0x20204CC0)
#define PNHBCBIDFBE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20204EB0)
#define PNHBCBIDFBE_GMCOKCKEDLC_OFFSET UNITYSDK_OFFSET(0x20204CE0)
#define PNHBCBIDFBE_INDOEFMDAOK_OFFSET UNITYSDK_OFFSET(0x20204CD0)
#define PNHBCBIDFBE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20204B20)
#define PNHBCBIDFBE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20205370)
#define PNHBCBIDFBE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20205310)
#define PNHBCBIDFBE_MKOKIOMDKOH_OFFSET UNITYSDK_OFFSET(0x20204D00)
#define PNHBCBIDFBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20204B80)
#define PNHBCBIDFBE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20204FB0)
#define PNHBCBIDFBE_WRITETO_OFFSET UNITYSDK_OFFSET(0x20205010)

inline static constexpr unsigned int PNHBCBIDFBE_TypeDefinitionIndex = 29158;

	class PNHBCBIDFBE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MGAJGDIMAEE; // 0x18
		::System::UInt32 FMCFBIJJCBM; // 0x20
		::System::UInt32 DDJCFFNPCNO; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GJAIDMBHENL()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PNHBCBIDFBE")->GetStaticField(0x4B910);
		}

		static ::Google::Protobuf::MessageParser_1<::PNHBCBIDFBE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PNHBCBIDFBE*>**)UnitySDK::FromName("", "PNHBCBIDFBE")->GetStaticField(0x4B918);
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

		static ::Google::Protobuf::MessageParser_1<::PNHBCBIDFBE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PNHBCBIDFBE*>*(*)())((::PBYTE)hIl2Cpp + PNHBCBIDFBE_JJGHOBBFNJD_OFFSET))();
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
