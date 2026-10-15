#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHAHBBILPOH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AHAHBBILPOH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E26B7E0)
#define AHAHBBILPOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E26B880)
#define AHAHBBILPOH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E26B4D0)
#define AHAHBBILPOH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E26B4A0)
#define AHAHBBILPOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E26B490)
#define AHAHBBILPOH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E26B5E0)
#define AHAHBBILPOH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E26B510)
#define AHAHBBILPOH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E26B740)
#define AHAHBBILPOH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E26B450)
#define AHAHBBILPOH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E26B830)
#define AHAHBBILPOH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E26B800)
#define AHAHBBILPOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E26B480)
#define AHAHBBILPOH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E26B770)
#define AHAHBBILPOH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E26B7D0)

inline static constexpr unsigned int AHAHBBILPOH_TypeDefinitionIndex = 31191;

	class AHAHBBILPOH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::AHAHBBILPOH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AHAHBBILPOH*>**)UnitySDK::FromName("", "AHAHBBILPOH")->GetStaticField(0x312C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHAHBBILPOH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AHAHBBILPOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHAHBBILPOH*))((::PBYTE)hIl2Cpp + AHAHBBILPOH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHAHBBILPOH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AHAHBBILPOH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AHAHBBILPOH*>*(*)())((::PBYTE)hIl2Cpp + AHAHBBILPOH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHAHBBILPOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AHAHBBILPOH* Clone()
		{
			return ((::AHAHBBILPOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHAHBBILPOH_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AHAHBBILPOH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AHAHBBILPOH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AHAHBBILPOH*))((::PBYTE)hIl2Cpp + AHAHBBILPOH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHAHBBILPOH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHAHBBILPOH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AHAHBBILPOH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHAHBBILPOH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AHAHBBILPOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHAHBBILPOH*))((::PBYTE)hIl2Cpp + AHAHBBILPOH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AHAHBBILPOH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
