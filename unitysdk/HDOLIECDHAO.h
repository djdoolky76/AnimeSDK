#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDOLIECDHAO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HDOLIECDHAO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5262F0)
#define HDOLIECDHAO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E526390)
#define HDOLIECDHAO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E525F90)
#define HDOLIECDHAO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E525F60)
#define HDOLIECDHAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E525F50)
#define HDOLIECDHAO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5260F0)
#define HDOLIECDHAO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E526000)
#define HDOLIECDHAO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E526250)
#define HDOLIECDHAO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E525EE0)
#define HDOLIECDHAO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E526340)
#define HDOLIECDHAO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E526310)
#define HDOLIECDHAO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E525F40)
#define HDOLIECDHAO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E526280)
#define HDOLIECDHAO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5262E0)

inline static constexpr unsigned int HDOLIECDHAO_TypeDefinitionIndex = 29280;

	class HDOLIECDHAO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::HDOLIECDHAO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HDOLIECDHAO*>**)UnitySDK::FromName("", "HDOLIECDHAO")->GetStaticField(0x2C6C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOLIECDHAO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HDOLIECDHAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDOLIECDHAO*))((::PBYTE)hIl2Cpp + HDOLIECDHAO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDOLIECDHAO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HDOLIECDHAO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HDOLIECDHAO*>*(*)())((::PBYTE)hIl2Cpp + HDOLIECDHAO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOLIECDHAO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HDOLIECDHAO* Clone()
		{
			return ((::HDOLIECDHAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOLIECDHAO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDOLIECDHAO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HDOLIECDHAO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HDOLIECDHAO*))((::PBYTE)hIl2Cpp + HDOLIECDHAO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOLIECDHAO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOLIECDHAO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HDOLIECDHAO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOLIECDHAO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HDOLIECDHAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDOLIECDHAO*))((::PBYTE)hIl2Cpp + HDOLIECDHAO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HDOLIECDHAO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
