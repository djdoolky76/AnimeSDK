#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDIGIKOLDEM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define IDIGIKOLDEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20138F60)
#define IDIGIKOLDEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x20139280)
#define IDIGIKOLDEM_CIIHBKJNIDI_OFFSET UNITYSDK_OFFSET(0x20138A60)
#define IDIGIKOLDEM_CLONE_OFFSET UNITYSDK_OFFSET(0x201389C0)
#define IDIGIKOLDEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20138950)
#define IDIGIKOLDEM_CTOR_OFFSET UNITYSDK_OFFSET(0x20138940)
#define IDIGIKOLDEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20138C00)
#define IDIGIKOLDEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x20138A80)
#define IDIGIKOLDEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20138D80)
#define IDIGIKOLDEM_IIHMFDMFOPO_OFFSET UNITYSDK_OFFSET(0x20138A50)
#define IDIGIKOLDEM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20138900)
#define IDIGIKOLDEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x201390C0)
#define IDIGIKOLDEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20139030)
#define IDIGIKOLDEM_MKMAMKNLJGM_OFFSET UNITYSDK_OFFSET(0x20138A40)
#define IDIGIKOLDEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20138930)
#define IDIGIKOLDEM_PHFIFGGOCGE_OFFSET UNITYSDK_OFFSET(0x20138A70)
#define IDIGIKOLDEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20138E20)
#define IDIGIKOLDEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x20138E80)

inline static constexpr unsigned int IDIGIKOLDEM_TypeDefinitionIndex = 30648;

	class IDIGIKOLDEM : public ::System::Object
	{
	public:
		::Proto::ItemList* DALKEINMPBH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 DNIPIFDDAAE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::IDIGIKOLDEM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IDIGIKOLDEM*>**)UnitySDK::FromName("", "IDIGIKOLDEM")->GetStaticField(0x4AE90);
		}

		// static const ::System::Object DPPAFBAHEFH; // 0x0
		// static const ::System::Object NFMNBHFFLHJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIGIKOLDEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IDIGIKOLDEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDIGIKOLDEM*))((::PBYTE)hIl2Cpp + IDIGIKOLDEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDIGIKOLDEM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IDIGIKOLDEM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IDIGIKOLDEM*>*(*)())((::PBYTE)hIl2Cpp + IDIGIKOLDEM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIGIKOLDEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IDIGIKOLDEM* Clone()
		{
			return ((::IDIGIKOLDEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIGIKOLDEM_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* MKMAMKNLJGM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIGIKOLDEM_MKMAMKNLJGM_OFFSET))(this);
		}

		::System::Void IIHMFDMFOPO(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + IDIGIKOLDEM_IIHMFDMFOPO_OFFSET))(this, a1);
		}

		::System::UInt32 CIIHBKJNIDI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIGIKOLDEM_CIIHBKJNIDI_OFFSET))(this);
		}

		::System::Void PHFIFGGOCGE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDIGIKOLDEM_PHFIFGGOCGE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDIGIKOLDEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IDIGIKOLDEM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDIGIKOLDEM*))((::PBYTE)hIl2Cpp + IDIGIKOLDEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIGIKOLDEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIGIKOLDEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IDIGIKOLDEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIGIKOLDEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IDIGIKOLDEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDIGIKOLDEM*))((::PBYTE)hIl2Cpp + IDIGIKOLDEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IDIGIKOLDEM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
