#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBKACPHIPDA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NBKACPHIPDA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2015D540)
#define NBKACPHIPDA_CCTOR_OFFSET UNITYSDK_OFFSET(0x2015D5E0)
#define NBKACPHIPDA_CLONE_OFFSET UNITYSDK_OFFSET(0x2015D230)
#define NBKACPHIPDA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2015D200)
#define NBKACPHIPDA_CTOR_OFFSET UNITYSDK_OFFSET(0x2015D1F0)
#define NBKACPHIPDA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2015D340)
#define NBKACPHIPDA_EQUALS_OFFSET UNITYSDK_OFFSET(0x2015D270)
#define NBKACPHIPDA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2015D4A0)
#define NBKACPHIPDA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2015D1B0)
#define NBKACPHIPDA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2015D590)
#define NBKACPHIPDA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2015D560)
#define NBKACPHIPDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2015D1E0)
#define NBKACPHIPDA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2015D4D0)
#define NBKACPHIPDA_WRITETO_OFFSET UNITYSDK_OFFSET(0x2015D530)

inline static constexpr unsigned int NBKACPHIPDA_TypeDefinitionIndex = 30743;

	class NBKACPHIPDA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::NBKACPHIPDA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NBKACPHIPDA*>**)UnitySDK::FromName("", "NBKACPHIPDA")->GetStaticField(0x58D30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKACPHIPDA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NBKACPHIPDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBKACPHIPDA*))((::PBYTE)hIl2Cpp + NBKACPHIPDA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBKACPHIPDA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NBKACPHIPDA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NBKACPHIPDA*>*(*)())((::PBYTE)hIl2Cpp + NBKACPHIPDA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKACPHIPDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NBKACPHIPDA* Clone()
		{
			return ((::NBKACPHIPDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKACPHIPDA_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBKACPHIPDA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NBKACPHIPDA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBKACPHIPDA*))((::PBYTE)hIl2Cpp + NBKACPHIPDA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKACPHIPDA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKACPHIPDA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NBKACPHIPDA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKACPHIPDA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NBKACPHIPDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBKACPHIPDA*))((::PBYTE)hIl2Cpp + NBKACPHIPDA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NBKACPHIPDA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
