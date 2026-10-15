#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGJKIDOBEAL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CGJKIDOBEAL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0AF8E0)
#define CGJKIDOBEAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0AF980)
#define CGJKIDOBEAL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0AF5D0)
#define CGJKIDOBEAL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0AF5A0)
#define CGJKIDOBEAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0AF590)
#define CGJKIDOBEAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0AF6E0)
#define CGJKIDOBEAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0AF610)
#define CGJKIDOBEAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0AF840)
#define CGJKIDOBEAL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0AF550)
#define CGJKIDOBEAL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0AF930)
#define CGJKIDOBEAL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0AF900)
#define CGJKIDOBEAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0AF580)
#define CGJKIDOBEAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0AF870)
#define CGJKIDOBEAL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0AF8D0)

inline static constexpr unsigned int CGJKIDOBEAL_TypeDefinitionIndex = 27023;

	class CGJKIDOBEAL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::CGJKIDOBEAL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CGJKIDOBEAL*>**)UnitySDK::FromName("", "CGJKIDOBEAL")->GetStaticField(0x14040);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJKIDOBEAL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CGJKIDOBEAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGJKIDOBEAL*))((::PBYTE)hIl2Cpp + CGJKIDOBEAL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGJKIDOBEAL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CGJKIDOBEAL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CGJKIDOBEAL*>*(*)())((::PBYTE)hIl2Cpp + CGJKIDOBEAL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJKIDOBEAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CGJKIDOBEAL* Clone()
		{
			return ((::CGJKIDOBEAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJKIDOBEAL_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CGJKIDOBEAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CGJKIDOBEAL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CGJKIDOBEAL*))((::PBYTE)hIl2Cpp + CGJKIDOBEAL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJKIDOBEAL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJKIDOBEAL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CGJKIDOBEAL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJKIDOBEAL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CGJKIDOBEAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGJKIDOBEAL*))((::PBYTE)hIl2Cpp + CGJKIDOBEAL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CGJKIDOBEAL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
