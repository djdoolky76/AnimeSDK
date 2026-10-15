#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJHMNDBJPND;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HJHMNDBJPND_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E57BF50)
#define HJHMNDBJPND_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E57C250)
#define HJHMNDBJPND_CLONE_OFFSET UNITYSDK_OFFSET(0x1E56A790)
#define HJHMNDBJPND_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E57BA70)
#define HJHMNDBJPND_CTOR_OFFSET UNITYSDK_OFFSET(0x1E56B2E0)
#define HJHMNDBJPND_DOBOGCEAOMO_OFFSET UNITYSDK_OFFSET(0x1E57BB50)
#define HJHMNDBJPND_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E57BC00)
#define HJHMNDBJPND_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E57BBA0)
#define HJHMNDBJPND_FOAFNPGDLLK_OFFSET UNITYSDK_OFFSET(0x1E57BB90)
#define HJHMNDBJPND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E56AC40)
#define HJHMNDBJPND_IEPOGCHJBAA_OFFSET UNITYSDK_OFFSET(0x1E57BB60)
#define HJHMNDBJPND_JFNJCIIHEFA_OFFSET UNITYSDK_OFFSET(0x1E57BB80)
#define HJHMNDBJPND_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E57BA00)
#define HJHMNDBJPND_LILFLAHCPLO_OFFSET UNITYSDK_OFFSET(0x1E57BB70)
#define HJHMNDBJPND_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E57C110)
#define HJHMNDBJPND_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E56B350)
#define HJHMNDBJPND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E57BA60)
#define HJHMNDBJPND_PDLBIOOOGPO_OFFSET UNITYSDK_OFFSET(0x1E57BB40)
#define HJHMNDBJPND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E57BD30)
#define HJHMNDBJPND_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E57BD90)

inline static constexpr unsigned int HJHMNDBJPND_TypeDefinitionIndex = 28374;

	class HJHMNDBJPND : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PLHACIPADPA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* OAKLMFEAKHA; // 0x20
		::System::UInt32 FJBLKPNOKAF; // 0x28
		::System::UInt32 MHKCOPMBDKK; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::HJHMNDBJPND*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HJHMNDBJPND*>**)UnitySDK::FromName("", "HJHMNDBJPND")->GetStaticField(0x35A30);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KMKLAMBNPOG()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "HJHMNDBJPND")->GetStaticField(0x35A38);
		}

		static ::System::Object** StaticGet_EACOGCDFMEO()
		{
			return (::System::Object**)UnitySDK::FromName("", "HJHMNDBJPND")->GetStaticField(0x35A40);
		}

		// static const ::System::Object LMJEMIIGGNH; // 0x0
		// static const ::System::Object JLEFNNLJPLE; // 0x0
		// static const ::System::Object JKHDOMFNJPI; // 0x0
		// static const ::System::Object PFPJMEJFKFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJHMNDBJPND_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HJHMNDBJPND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJHMNDBJPND*))((::PBYTE)hIl2Cpp + HJHMNDBJPND_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJHMNDBJPND_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HJHMNDBJPND*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HJHMNDBJPND*>*(*)())((::PBYTE)hIl2Cpp + HJHMNDBJPND_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJHMNDBJPND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HJHMNDBJPND* Clone()
		{
			return ((::HJHMNDBJPND*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJHMNDBJPND_CLONE_OFFSET))(this);
		}

		::System::UInt32 PDLBIOOOGPO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJHMNDBJPND_PDLBIOOOGPO_OFFSET))(this);
		}

		::System::Void DOBOGCEAOMO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJHMNDBJPND_DOBOGCEAOMO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IEPOGCHJBAA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJHMNDBJPND_IEPOGCHJBAA_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* LILFLAHCPLO()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJHMNDBJPND_LILFLAHCPLO_OFFSET))(this);
		}

		::System::UInt32 JFNJCIIHEFA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJHMNDBJPND_JFNJCIIHEFA_OFFSET))(this);
		}

		::System::Void FOAFNPGDLLK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJHMNDBJPND_FOAFNPGDLLK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HJHMNDBJPND_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HJHMNDBJPND* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HJHMNDBJPND*))((::PBYTE)hIl2Cpp + HJHMNDBJPND_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJHMNDBJPND_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJHMNDBJPND_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HJHMNDBJPND_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJHMNDBJPND_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HJHMNDBJPND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJHMNDBJPND*))((::PBYTE)hIl2Cpp + HJHMNDBJPND_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HJHMNDBJPND_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
