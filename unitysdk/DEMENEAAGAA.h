#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEMENEAAGAA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DEMENEAAGAA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E169D90)
#define DEMENEAAGAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E169E30)
#define DEMENEAAGAA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E169A30)
#define DEMENEAAGAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E169A00)
#define DEMENEAAGAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1699F0)
#define DEMENEAAGAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E169B90)
#define DEMENEAAGAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E169AA0)
#define DEMENEAAGAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E169CF0)
#define DEMENEAAGAA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E169980)
#define DEMENEAAGAA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E169DE0)
#define DEMENEAAGAA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E169DB0)
#define DEMENEAAGAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1699E0)
#define DEMENEAAGAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E169D20)
#define DEMENEAAGAA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E169D80)

inline static constexpr unsigned int DEMENEAAGAA_TypeDefinitionIndex = 32834;

	class DEMENEAAGAA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::DEMENEAAGAA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DEMENEAAGAA*>**)UnitySDK::FromName("", "DEMENEAAGAA")->GetStaticField(0x2C920);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMENEAAGAA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DEMENEAAGAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEMENEAAGAA*))((::PBYTE)hIl2Cpp + DEMENEAAGAA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEMENEAAGAA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DEMENEAAGAA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DEMENEAAGAA*>*(*)())((::PBYTE)hIl2Cpp + DEMENEAAGAA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMENEAAGAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DEMENEAAGAA* Clone()
		{
			return ((::DEMENEAAGAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMENEAAGAA_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEMENEAAGAA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DEMENEAAGAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEMENEAAGAA*))((::PBYTE)hIl2Cpp + DEMENEAAGAA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMENEAAGAA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMENEAAGAA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DEMENEAAGAA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMENEAAGAA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DEMENEAAGAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEMENEAAGAA*))((::PBYTE)hIl2Cpp + DEMENEAAGAA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DEMENEAAGAA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
