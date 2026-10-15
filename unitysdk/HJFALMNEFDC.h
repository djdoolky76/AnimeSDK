#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJFALMNEFDC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HJFALMNEFDC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E579E30)
#define HJFALMNEFDC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E579ED0)
#define HJFALMNEFDC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E579B20)
#define HJFALMNEFDC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E579AF0)
#define HJFALMNEFDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E579AE0)
#define HJFALMNEFDC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E579C30)
#define HJFALMNEFDC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E579B60)
#define HJFALMNEFDC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E579D90)
#define HJFALMNEFDC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E579AA0)
#define HJFALMNEFDC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E579E80)
#define HJFALMNEFDC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E579E50)
#define HJFALMNEFDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E579AD0)
#define HJFALMNEFDC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E579DC0)
#define HJFALMNEFDC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E579E20)

inline static constexpr unsigned int HJFALMNEFDC_TypeDefinitionIndex = 28400;

	class HJFALMNEFDC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::HJFALMNEFDC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HJFALMNEFDC*>**)UnitySDK::FromName("", "HJFALMNEFDC")->GetStaticField(0x35790);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFALMNEFDC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HJFALMNEFDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJFALMNEFDC*))((::PBYTE)hIl2Cpp + HJFALMNEFDC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJFALMNEFDC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HJFALMNEFDC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HJFALMNEFDC*>*(*)())((::PBYTE)hIl2Cpp + HJFALMNEFDC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFALMNEFDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HJFALMNEFDC* Clone()
		{
			return ((::HJFALMNEFDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFALMNEFDC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HJFALMNEFDC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HJFALMNEFDC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HJFALMNEFDC*))((::PBYTE)hIl2Cpp + HJFALMNEFDC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFALMNEFDC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFALMNEFDC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HJFALMNEFDC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFALMNEFDC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HJFALMNEFDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJFALMNEFDC*))((::PBYTE)hIl2Cpp + HJFALMNEFDC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HJFALMNEFDC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
