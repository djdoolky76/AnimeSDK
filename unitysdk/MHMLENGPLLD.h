#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCFDJCPFOGG;
class MHMLENGPLLD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MHMLENGPLLD_BPAKJJMLLAJ_OFFSET UNITYSDK_OFFSET(0x1EA37240)
#define MHMLENGPLLD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA376E0)
#define MHMLENGPLLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA379D0)
#define MHMLENGPLLD_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA371A0)
#define MHMLENGPLLD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA37130)
#define MHMLENGPLLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA37120)
#define MHMLENGPLLD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA373E0)
#define MHMLENGPLLD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA37260)
#define MHMLENGPLLD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA37230)
#define MHMLENGPLLD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA37560)
#define MHMLENGPLLD_IGLHALAGIHD_OFFSET UNITYSDK_OFFSET(0x1EA37250)
#define MHMLENGPLLD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA370E0)
#define MHMLENGPLLD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA37830)
#define MHMLENGPLLD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA377B0)
#define MHMLENGPLLD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA37220)
#define MHMLENGPLLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA37110)
#define MHMLENGPLLD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA375A0)
#define MHMLENGPLLD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA37600)

inline static constexpr unsigned int MHMLENGPLLD_TypeDefinitionIndex = 28246;

	class MHMLENGPLLD : public ::System::Object
	{
	public:
		::GCFDJCPFOGG* GOLIHABDEBJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MHMLENGPLLD")->GetStaticField(0x52520);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CDNLDKBAJMK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMLENGPLLD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MHMLENGPLLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHMLENGPLLD*))((::PBYTE)hIl2Cpp + MHMLENGPLLD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHMLENGPLLD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MHMLENGPLLD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMLENGPLLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MHMLENGPLLD* Clone()
		{
			return ((::MHMLENGPLLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMLENGPLLD_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMLENGPLLD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHMLENGPLLD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::GCFDJCPFOGG* BPAKJJMLLAJ()
		{
			return ((::GCFDJCPFOGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMLENGPLLD_BPAKJJMLLAJ_OFFSET))(this);
		}

		::System::Void IGLHALAGIHD(::GCFDJCPFOGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCFDJCPFOGG*))((::PBYTE)hIl2Cpp + MHMLENGPLLD_IGLHALAGIHD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MHMLENGPLLD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MHMLENGPLLD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHMLENGPLLD*))((::PBYTE)hIl2Cpp + MHMLENGPLLD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMLENGPLLD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMLENGPLLD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MHMLENGPLLD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMLENGPLLD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MHMLENGPLLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHMLENGPLLD*))((::PBYTE)hIl2Cpp + MHMLENGPLLD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MHMLENGPLLD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
