#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJHEOJCGPAJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LJHEOJCGPAJ_BKHDBPHNNLH_OFFSET UNITYSDK_OFFSET(0x1E9821E0)
#define LJHEOJCGPAJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9825B0)
#define LJHEOJCGPAJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E982860)
#define LJHEOJCGPAJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E982190)
#define LJHEOJCGPAJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E982150)
#define LJHEOJCGPAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E982140)
#define LJHEOJCGPAJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E982310)
#define LJHEOJCGPAJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E982220)
#define LJHEOJCGPAJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9823F0)
#define LJHEOJCGPAJ_GIDJOFIIKAE_OFFSET UNITYSDK_OFFSET(0x1E9821F0)
#define LJHEOJCGPAJ_HNJDJPKNLBA_OFFSET UNITYSDK_OFFSET(0x1E982210)
#define LJHEOJCGPAJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E982100)
#define LJHEOJCGPAJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9826E0)
#define LJHEOJCGPAJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9826A0)
#define LJHEOJCGPAJ_MKMPLJICAHL_OFFSET UNITYSDK_OFFSET(0x1E982200)
#define LJHEOJCGPAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E982130)
#define LJHEOJCGPAJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E982440)
#define LJHEOJCGPAJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9824A0)

inline static constexpr unsigned int LJHEOJCGPAJ_TypeDefinitionIndex = 31531;

	class LJHEOJCGPAJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 EMIEPBJAICO; // 0x18
		::System::Boolean KDKIMLOMINO; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LJHEOJCGPAJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LJHEOJCGPAJ*>**)UnitySDK::FromName("", "LJHEOJCGPAJ")->GetStaticField(0x481B0);
		}

		// static const ::System::Object FMDKMAKPJOB; // 0x0
		// static const ::System::Object AOMJCDOGCEP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHEOJCGPAJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LJHEOJCGPAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJHEOJCGPAJ*))((::PBYTE)hIl2Cpp + LJHEOJCGPAJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJHEOJCGPAJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LJHEOJCGPAJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LJHEOJCGPAJ*>*(*)())((::PBYTE)hIl2Cpp + LJHEOJCGPAJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHEOJCGPAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LJHEOJCGPAJ* Clone()
		{
			return ((::LJHEOJCGPAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHEOJCGPAJ_CLONE_OFFSET))(this);
		}

		::System::UInt64 BKHDBPHNNLH()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHEOJCGPAJ_BKHDBPHNNLH_OFFSET))(this);
		}

		::System::Void GIDJOFIIKAE(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + LJHEOJCGPAJ_GIDJOFIIKAE_OFFSET))(this, a1);
		}

		::System::Boolean MKMPLJICAHL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHEOJCGPAJ_MKMPLJICAHL_OFFSET))(this);
		}

		::System::Void HNJDJPKNLBA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LJHEOJCGPAJ_HNJDJPKNLBA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJHEOJCGPAJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LJHEOJCGPAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LJHEOJCGPAJ*))((::PBYTE)hIl2Cpp + LJHEOJCGPAJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHEOJCGPAJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHEOJCGPAJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LJHEOJCGPAJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHEOJCGPAJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LJHEOJCGPAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJHEOJCGPAJ*))((::PBYTE)hIl2Cpp + LJHEOJCGPAJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LJHEOJCGPAJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
