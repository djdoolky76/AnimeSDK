#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNOMEBNDGJI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FNOMEBNDGJI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F6E1DB0)
#define FNOMEBNDGJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6E1E50)
#define FNOMEBNDGJI_CLONE_OFFSET UNITYSDK_OFFSET(0x1F6E1AA0)
#define FNOMEBNDGJI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6E1A70)
#define FNOMEBNDGJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6E1A60)
#define FNOMEBNDGJI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F6E1BB0)
#define FNOMEBNDGJI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F6E1AE0)
#define FNOMEBNDGJI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F6E1D10)
#define FNOMEBNDGJI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F6E1A20)
#define FNOMEBNDGJI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F6E1E00)
#define FNOMEBNDGJI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F6E1DD0)
#define FNOMEBNDGJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F6E1A50)
#define FNOMEBNDGJI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F6E1D40)
#define FNOMEBNDGJI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F6E1DA0)

inline static constexpr unsigned int FNOMEBNDGJI_TypeDefinitionIndex = 27288;

	class FNOMEBNDGJI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::FNOMEBNDGJI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FNOMEBNDGJI*>**)UnitySDK::FromName("", "FNOMEBNDGJI")->GetStaticField(0x4F8A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNOMEBNDGJI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FNOMEBNDGJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNOMEBNDGJI*))((::PBYTE)hIl2Cpp + FNOMEBNDGJI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNOMEBNDGJI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FNOMEBNDGJI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FNOMEBNDGJI*>*(*)())((::PBYTE)hIl2Cpp + FNOMEBNDGJI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNOMEBNDGJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FNOMEBNDGJI* Clone()
		{
			return ((::FNOMEBNDGJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNOMEBNDGJI_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FNOMEBNDGJI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FNOMEBNDGJI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNOMEBNDGJI*))((::PBYTE)hIl2Cpp + FNOMEBNDGJI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNOMEBNDGJI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNOMEBNDGJI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FNOMEBNDGJI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNOMEBNDGJI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FNOMEBNDGJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNOMEBNDGJI*))((::PBYTE)hIl2Cpp + FNOMEBNDGJI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FNOMEBNDGJI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
