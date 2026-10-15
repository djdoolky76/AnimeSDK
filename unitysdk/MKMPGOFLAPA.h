#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGELADNAOL;
class MKMPGOFLAPA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MKMPGOFLAPA_BIOOHPIHADO_OFFSET UNITYSDK_OFFSET(0x1EA2D370)
#define MKMPGOFLAPA_BMDGCNADLKC_OFFSET UNITYSDK_OFFSET(0x1EA2D340)
#define MKMPGOFLAPA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA2D7D0)
#define MKMPGOFLAPA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA2DBC0)
#define MKMPGOFLAPA_CLCNPIJOIBL_OFFSET UNITYSDK_OFFSET(0x1EA2D380)
#define MKMPGOFLAPA_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA2D2F0)
#define MKMPGOFLAPA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA2D250)
#define MKMPGOFLAPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2D210)
#define MKMPGOFLAPA_EEBLEFFIHBP_OFFSET UNITYSDK_OFFSET(0x1EA2D330)
#define MKMPGOFLAPA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA2D3E0)
#define MKMPGOFLAPA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA2D3B0)
#define MKMPGOFLAPA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA2D3A0)
#define MKMPGOFLAPA_FLBBKCLCCNN_OFFSET UNITYSDK_OFFSET(0x1EA2D320)
#define MKMPGOFLAPA_FMMFNNOAAEK_OFFSET UNITYSDK_OFFSET(0x1EA2D360)
#define MKMPGOFLAPA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA2D490)
#define MKMPGOFLAPA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA2D1D0)
#define MKMPGOFLAPA_KMGGNNGDLCO_OFFSET UNITYSDK_OFFSET(0x1EA2D350)
#define MKMPGOFLAPA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA2DAC0)
#define MKMPGOFLAPA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA2D9F0)
#define MKMPGOFLAPA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA2D390)
#define MKMPGOFLAPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA2D200)
#define MKMPGOFLAPA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA2D510)
#define MKMPGOFLAPA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA2D570)

inline static constexpr unsigned int MKMPGOFLAPA_TypeDefinitionIndex = 32408;

	class MKMPGOFLAPA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::CAGELADNAOL*>* BOODOGENLJC; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 MGPCOLIAECE; // 0x24
		::System::Boolean CCNIHPKICOK; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 PLKGEBACJMA; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::MKMPGOFLAPA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MKMPGOFLAPA*>**)UnitySDK::FromName("", "MKMPGOFLAPA")->GetStaticField(0x55230);
		}

		static ::Google::Protobuf::FieldCodec_1<::CAGELADNAOL*>** StaticGet_JIOPMDOLJGA()
		{
			return (::Google::Protobuf::FieldCodec_1<::CAGELADNAOL*>**)UnitySDK::FromName("", "MKMPGOFLAPA")->GetStaticField(0x55238);
		}

		// static const ::System::Object PADIHFGJFIP; // 0x0
		// static const ::System::Object OEAKKPCOOJF; // 0x0
		// static const ::System::Object KOAPPFHOOEJ; // 0x0
		// static const ::System::Object BOGFCKKNGJB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMPGOFLAPA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MKMPGOFLAPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKMPGOFLAPA*))((::PBYTE)hIl2Cpp + MKMPGOFLAPA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKMPGOFLAPA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MKMPGOFLAPA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MKMPGOFLAPA*>*(*)())((::PBYTE)hIl2Cpp + MKMPGOFLAPA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMPGOFLAPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MKMPGOFLAPA* Clone()
		{
			return ((::MKMPGOFLAPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMPGOFLAPA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CAGELADNAOL*>* FLBBKCLCCNN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CAGELADNAOL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMPGOFLAPA_FLBBKCLCCNN_OFFSET))(this);
		}

		::System::UInt32 EEBLEFFIHBP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMPGOFLAPA_EEBLEFFIHBP_OFFSET))(this);
		}

		::System::Void BMDGCNADLKC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKMPGOFLAPA_BMDGCNADLKC_OFFSET))(this, a1);
		}

		::System::Boolean KMGGNNGDLCO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMPGOFLAPA_KMGGNNGDLCO_OFFSET))(this);
		}

		::System::Void FMMFNNOAAEK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MKMPGOFLAPA_FMMFNNOAAEK_OFFSET))(this, a1);
		}

		::System::UInt32 BIOOHPIHADO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMPGOFLAPA_BIOOHPIHADO_OFFSET))(this);
		}

		::System::Void CLCNPIJOIBL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKMPGOFLAPA_CLCNPIJOIBL_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMPGOFLAPA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKMPGOFLAPA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MKMPGOFLAPA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MKMPGOFLAPA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MKMPGOFLAPA*))((::PBYTE)hIl2Cpp + MKMPGOFLAPA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMPGOFLAPA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMPGOFLAPA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MKMPGOFLAPA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMPGOFLAPA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MKMPGOFLAPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKMPGOFLAPA*))((::PBYTE)hIl2Cpp + MKMPGOFLAPA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MKMPGOFLAPA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
