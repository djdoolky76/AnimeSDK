#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBOOIEJHKOD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HBOOIEJHKOD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E530DB0)
#define HBOOIEJHKOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E531080)
#define HBOOIEJHKOD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E530A00)
#define HBOOIEJHKOD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5309D0)
#define HBOOIEJHKOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5309C0)
#define HBOOIEJHKOD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E530B70)
#define HBOOIEJHKOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E530A90)
#define HBOOIEJHKOD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E530C40)
#define HBOOIEJHKOD_HPGLDOOFONJ_OFFSET UNITYSDK_OFFSET(0x1E530A70)
#define HBOOIEJHKOD_JAIBDNHIIEP_OFFSET UNITYSDK_OFFSET(0x1E530A50)
#define HBOOIEJHKOD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E530980)
#define HBOOIEJHKOD_LHHNFAAPDNJ_OFFSET UNITYSDK_OFFSET(0x1E530A60)
#define HBOOIEJHKOD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E530F00)
#define HBOOIEJHKOD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E530EC0)
#define HBOOIEJHKOD_PAJHAHFHLEI_OFFSET UNITYSDK_OFFSET(0x1E530A80)
#define HBOOIEJHKOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5309B0)
#define HBOOIEJHKOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E530C70)
#define HBOOIEJHKOD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E530CD0)

inline static constexpr unsigned int HBOOIEJHKOD_TypeDefinitionIndex = 30328;

	class HBOOIEJHKOD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IOJPFPKAAOP; // 0x18
		::System::UInt32 HCEBEMOCOPC; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::HBOOIEJHKOD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HBOOIEJHKOD*>**)UnitySDK::FromName("", "HBOOIEJHKOD")->GetStaticField(0x2F140);
		}

		// static const ::System::Object EMDNBPGMNCO; // 0x0
		// static const ::System::Object EBNBMOHHABN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOOIEJHKOD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HBOOIEJHKOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBOOIEJHKOD*))((::PBYTE)hIl2Cpp + HBOOIEJHKOD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBOOIEJHKOD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HBOOIEJHKOD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HBOOIEJHKOD*>*(*)())((::PBYTE)hIl2Cpp + HBOOIEJHKOD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOOIEJHKOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HBOOIEJHKOD* Clone()
		{
			return ((::HBOOIEJHKOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOOIEJHKOD_CLONE_OFFSET))(this);
		}

		::System::UInt32 JAIBDNHIIEP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOOIEJHKOD_JAIBDNHIIEP_OFFSET))(this);
		}

		::System::Void LHHNFAAPDNJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBOOIEJHKOD_LHHNFAAPDNJ_OFFSET))(this, a1);
		}

		::System::UInt32 HPGLDOOFONJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOOIEJHKOD_HPGLDOOFONJ_OFFSET))(this);
		}

		::System::Void PAJHAHFHLEI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBOOIEJHKOD_PAJHAHFHLEI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBOOIEJHKOD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HBOOIEJHKOD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBOOIEJHKOD*))((::PBYTE)hIl2Cpp + HBOOIEJHKOD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOOIEJHKOD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOOIEJHKOD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HBOOIEJHKOD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOOIEJHKOD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HBOOIEJHKOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBOOIEJHKOD*))((::PBYTE)hIl2Cpp + HBOOIEJHKOD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HBOOIEJHKOD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
