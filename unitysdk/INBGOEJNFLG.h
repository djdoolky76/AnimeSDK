#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INBGOEJNFLG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define INBGOEJNFLG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6BF470)
#define INBGOEJNFLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6BF510)
#define INBGOEJNFLG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6BF160)
#define INBGOEJNFLG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6BF130)
#define INBGOEJNFLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6BF120)
#define INBGOEJNFLG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6BF270)
#define INBGOEJNFLG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6BF1A0)
#define INBGOEJNFLG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6BF3D0)
#define INBGOEJNFLG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6BF0E0)
#define INBGOEJNFLG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6BF4C0)
#define INBGOEJNFLG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6BF490)
#define INBGOEJNFLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6BF110)
#define INBGOEJNFLG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6BF400)
#define INBGOEJNFLG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6BF460)

inline static constexpr unsigned int INBGOEJNFLG_TypeDefinitionIndex = 27959;

	class INBGOEJNFLG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::INBGOEJNFLG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::INBGOEJNFLG*>**)UnitySDK::FromName("", "INBGOEJNFLG")->GetStaticField(0x58060);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INBGOEJNFLG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::INBGOEJNFLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INBGOEJNFLG*))((::PBYTE)hIl2Cpp + INBGOEJNFLG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INBGOEJNFLG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::INBGOEJNFLG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::INBGOEJNFLG*>*(*)())((::PBYTE)hIl2Cpp + INBGOEJNFLG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + INBGOEJNFLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::INBGOEJNFLG* Clone()
		{
			return ((::INBGOEJNFLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + INBGOEJNFLG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INBGOEJNFLG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::INBGOEJNFLG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INBGOEJNFLG*))((::PBYTE)hIl2Cpp + INBGOEJNFLG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INBGOEJNFLG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INBGOEJNFLG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + INBGOEJNFLG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INBGOEJNFLG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::INBGOEJNFLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INBGOEJNFLG*))((::PBYTE)hIl2Cpp + INBGOEJNFLG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + INBGOEJNFLG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
