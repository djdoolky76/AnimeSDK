#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCKNNFODOMO;
class IBKDHOIDKJA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CCKNNFODOMO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E04A740)
#define CCKNNFODOMO_CCCPJJGAPMG_OFFSET UNITYSDK_OFFSET(0x1E04A1A0)
#define CCKNNFODOMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E04A990)
#define CCKNNFODOMO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E04A120)
#define CCKNNFODOMO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E04A0B0)
#define CCKNNFODOMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E04A0A0)
#define CCKNNFODOMO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E04A330)
#define CCKNNFODOMO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E04A1C0)
#define CCKNNFODOMO_GENEPDAFIGA_OFFSET UNITYSDK_OFFSET(0x1E04A1B0)
#define CCKNNFODOMO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E04A600)
#define CCKNNFODOMO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E04A060)
#define CCKNNFODOMO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E04A810)
#define CCKNNFODOMO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E04A7A0)
#define CCKNNFODOMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E04A090)
#define CCKNNFODOMO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E04A650)
#define CCKNNFODOMO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E04A6B0)

inline static constexpr unsigned int CCKNNFODOMO_TypeDefinitionIndex = 32237;

	class CCKNNFODOMO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::IBKDHOIDKJA* DJBOHGCJIMO; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CCKNNFODOMO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CCKNNFODOMO*>**)UnitySDK::FromName("", "CCKNNFODOMO")->GetStaticField(0xCC10);
		}

		// static const ::System::Object CPKHFLBNJPA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNNFODOMO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CCKNNFODOMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCKNNFODOMO*))((::PBYTE)hIl2Cpp + CCKNNFODOMO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCKNNFODOMO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CCKNNFODOMO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CCKNNFODOMO*>*(*)())((::PBYTE)hIl2Cpp + CCKNNFODOMO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNNFODOMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CCKNNFODOMO* Clone()
		{
			return ((::CCKNNFODOMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNNFODOMO_CLONE_OFFSET))(this);
		}

		::IBKDHOIDKJA* CCCPJJGAPMG()
		{
			return ((::IBKDHOIDKJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNNFODOMO_CCCPJJGAPMG_OFFSET))(this);
		}

		::System::Void GENEPDAFIGA(::IBKDHOIDKJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBKDHOIDKJA*))((::PBYTE)hIl2Cpp + CCKNNFODOMO_GENEPDAFIGA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCKNNFODOMO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CCKNNFODOMO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCKNNFODOMO*))((::PBYTE)hIl2Cpp + CCKNNFODOMO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNNFODOMO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNNFODOMO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CCKNNFODOMO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNNFODOMO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CCKNNFODOMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCKNNFODOMO*))((::PBYTE)hIl2Cpp + CCKNNFODOMO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CCKNNFODOMO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
