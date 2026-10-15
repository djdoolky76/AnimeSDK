#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIDAHABFLBL.h"
#include "unitysdk/System/Object.h"
class IILCDMAHMDN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IILCDMAHMDN_BAHCDLCBGHK_OFFSET UNITYSDK_OFFSET(0x1E65D0B0)
#define IILCDMAHMDN_BGIGDDINPAB_OFFSET UNITYSDK_OFFSET(0x1E65D090)
#define IILCDMAHMDN_BGMFOMPLJPH_OFFSET UNITYSDK_OFFSET(0x1E65D0A0)
#define IILCDMAHMDN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E65D610)
#define IILCDMAHMDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E65D9F0)
#define IILCDMAHMDN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E65D020)
#define IILCDMAHMDN_CNKPDNMEFKD_OFFSET UNITYSDK_OFFSET(0x1E65D070)
#define IILCDMAHMDN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E65CF20)
#define IILCDMAHMDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E65CE90)
#define IILCDMAHMDN_ENBBBBDLCDF_OFFSET UNITYSDK_OFFSET(0x1E65D080)
#define IILCDMAHMDN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E65D100)
#define IILCDMAHMDN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E65D0D0)
#define IILCDMAHMDN_FOIHDAHHBKJ_OFFSET UNITYSDK_OFFSET(0x1E65D060)
#define IILCDMAHMDN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E65D1A0)
#define IILCDMAHMDN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E65CE50)
#define IILCDMAHMDN_KDKFDHIMJCN_OFFSET UNITYSDK_OFFSET(0x1E65D0C0)
#define IILCDMAHMDN_LJDNBHDBCDB_OFFSET UNITYSDK_OFFSET(0x1E65D050)
#define IILCDMAHMDN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E65D890)
#define IILCDMAHMDN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E65D810)
#define IILCDMAHMDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E65CE80)
#define IILCDMAHMDN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E65D370)
#define IILCDMAHMDN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E65D3D0)

inline static constexpr unsigned int IILCDMAHMDN_TypeDefinitionIndex = 29039;

	class IILCDMAHMDN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ODPPCMHOGMF; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FAIEBOPKJBF; // 0x20
		::System::UInt32 KHNEMPCDLJC; // 0x28
		::System::Boolean BDPHPGFFFDM; // 0x2C
		::System::Byte _padding0[0x3];
		::PIDAHABFLBL NDBFEFBFHIB; // 0x30
		static ::Google::Protobuf::MessageParser_1<::IILCDMAHMDN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IILCDMAHMDN*>**)UnitySDK::FromName("", "IILCDMAHMDN")->GetStaticField(0x4F310);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PMIHJGIJIEN()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "IILCDMAHMDN")->GetStaticField(0x4F318);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FEGHGPFMAOE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "IILCDMAHMDN")->GetStaticField(0x4F320);
		}

		// static const ::System::Object AKAKIICFCPK; // 0x0
		// static const ::System::Object AGBPCDPMDOB; // 0x0
		// static const ::System::Object JPPAPEMIJHD; // 0x0
		// static const ::System::Object GMAJMEJMFBL; // 0x0
		// static const ::System::Object OIFMPNNBOBO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCDMAHMDN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IILCDMAHMDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IILCDMAHMDN*))((::PBYTE)hIl2Cpp + IILCDMAHMDN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IILCDMAHMDN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IILCDMAHMDN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IILCDMAHMDN*>*(*)())((::PBYTE)hIl2Cpp + IILCDMAHMDN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCDMAHMDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IILCDMAHMDN* Clone()
		{
			return ((::IILCDMAHMDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCDMAHMDN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LJDNBHDBCDB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCDMAHMDN_LJDNBHDBCDB_OFFSET))(this);
		}

		::System::Boolean FOIHDAHHBKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCDMAHMDN_FOIHDAHHBKJ_OFFSET))(this);
		}

		::System::Void CNKPDNMEFKD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IILCDMAHMDN_CNKPDNMEFKD_OFFSET))(this, a1);
		}

		::PIDAHABFLBL ENBBBBDLCDF()
		{
			return ((::PIDAHABFLBL(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCDMAHMDN_ENBBBBDLCDF_OFFSET))(this);
		}

		::System::Void BGIGDDINPAB(::PIDAHABFLBL a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIDAHABFLBL))((::PBYTE)hIl2Cpp + IILCDMAHMDN_BGIGDDINPAB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BGMFOMPLJPH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCDMAHMDN_BGMFOMPLJPH_OFFSET))(this);
		}

		::System::UInt32 BAHCDLCBGHK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCDMAHMDN_BAHCDLCBGHK_OFFSET))(this);
		}

		::System::Void KDKFDHIMJCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IILCDMAHMDN_KDKFDHIMJCN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IILCDMAHMDN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IILCDMAHMDN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IILCDMAHMDN*))((::PBYTE)hIl2Cpp + IILCDMAHMDN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCDMAHMDN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCDMAHMDN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IILCDMAHMDN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCDMAHMDN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IILCDMAHMDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IILCDMAHMDN*))((::PBYTE)hIl2Cpp + IILCDMAHMDN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IILCDMAHMDN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
