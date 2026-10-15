#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOOGABJBJAG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MOOGABJBJAG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA83950)
#define MOOGABJBJAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA83B70)
#define MOOGABJBJAG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA83540)
#define MOOGABJBJAG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA83510)
#define MOOGABJBJAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA83500)
#define MOOGABJBJAG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA836D0)
#define MOOGABJBJAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA835D0)
#define MOOGABJBJAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA83840)
#define MOOGABJBJAG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA83490)
#define MOOGABJBJAG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA83A10)
#define MOOGABJBJAG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA839E0)
#define MOOGABJBJAG_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1EA835C0)
#define MOOGABJBJAG_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1EA835B0)
#define MOOGABJBJAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA834F0)
#define MOOGABJBJAG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA83870)
#define MOOGABJBJAG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA838D0)

inline static constexpr unsigned int MOOGABJBJAG_TypeDefinitionIndex = 28930;

	class MOOGABJBJAG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ABPDPMHFFNN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MOOGABJBJAG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MOOGABJBJAG*>**)UnitySDK::FromName("", "MOOGABJBJAG")->GetStaticField(0x5B0F0);
		}

		// static const ::System::Object EDGGGCNOFHI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOGABJBJAG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MOOGABJBJAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOOGABJBJAG*))((::PBYTE)hIl2Cpp + MOOGABJBJAG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOOGABJBJAG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MOOGABJBJAG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MOOGABJBJAG*>*(*)())((::PBYTE)hIl2Cpp + MOOGABJBJAG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOGABJBJAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MOOGABJBJAG* Clone()
		{
			return ((::MOOGABJBJAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOGABJBJAG_CLONE_OFFSET))(this);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOGABJBJAG_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOOGABJBJAG_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOOGABJBJAG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MOOGABJBJAG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOOGABJBJAG*))((::PBYTE)hIl2Cpp + MOOGABJBJAG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOGABJBJAG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOGABJBJAG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MOOGABJBJAG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOGABJBJAG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MOOGABJBJAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOOGABJBJAG*))((::PBYTE)hIl2Cpp + MOOGABJBJAG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MOOGABJBJAG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
