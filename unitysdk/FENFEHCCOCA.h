#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FENFEHCCOCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FENFEHCCOCA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E369430)
#define FENFEHCCOCA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3694D0)
#define FENFEHCCOCA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3690D0)
#define FENFEHCCOCA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3690A0)
#define FENFEHCCOCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E369090)
#define FENFEHCCOCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E369230)
#define FENFEHCCOCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E369140)
#define FENFEHCCOCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E369390)
#define FENFEHCCOCA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E369020)
#define FENFEHCCOCA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E369480)
#define FENFEHCCOCA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E369450)
#define FENFEHCCOCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E369080)
#define FENFEHCCOCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3693C0)
#define FENFEHCCOCA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E369420)

inline static constexpr unsigned int FENFEHCCOCA_TypeDefinitionIndex = 32930;

	class FENFEHCCOCA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FENFEHCCOCA")->GetStaticField(0x5D7F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENFEHCCOCA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FENFEHCCOCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FENFEHCCOCA*))((::PBYTE)hIl2Cpp + FENFEHCCOCA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FENFEHCCOCA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FENFEHCCOCA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FENFEHCCOCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FENFEHCCOCA* Clone()
		{
			return ((::FENFEHCCOCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FENFEHCCOCA_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FENFEHCCOCA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FENFEHCCOCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FENFEHCCOCA*))((::PBYTE)hIl2Cpp + FENFEHCCOCA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FENFEHCCOCA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FENFEHCCOCA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FENFEHCCOCA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FENFEHCCOCA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FENFEHCCOCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FENFEHCCOCA*))((::PBYTE)hIl2Cpp + FENFEHCCOCA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FENFEHCCOCA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
