#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIJPFEHEBLJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BIJPFEHEBLJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDD6060)
#define BIJPFEHEBLJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD6280)
#define BIJPFEHEBLJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDD5CB0)
#define BIJPFEHEBLJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDD5C80)
#define BIJPFEHEBLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD5C70)
#define BIJPFEHEBLJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDD5DE0)
#define BIJPFEHEBLJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDD5D10)
#define BIJPFEHEBLJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDD5F50)
#define BIJPFEHEBLJ_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1DDD5D00)
#define BIJPFEHEBLJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDD5C30)
#define BIJPFEHEBLJ_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1DDD5CF0)
#define BIJPFEHEBLJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDD6120)
#define BIJPFEHEBLJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDD60F0)
#define BIJPFEHEBLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDD5C60)
#define BIJPFEHEBLJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDD5F80)
#define BIJPFEHEBLJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDD5FE0)

inline static constexpr unsigned int BIJPFEHEBLJ_TypeDefinitionIndex = 25968;

	class BIJPFEHEBLJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HJEGLCJEOKC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BIJPFEHEBLJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BIJPFEHEBLJ*>**)UnitySDK::FromName("", "BIJPFEHEBLJ")->GetStaticField(0x57940);
		}

		// static const ::System::Object IEIFMNNMINA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJPFEHEBLJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BIJPFEHEBLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIJPFEHEBLJ*))((::PBYTE)hIl2Cpp + BIJPFEHEBLJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIJPFEHEBLJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BIJPFEHEBLJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BIJPFEHEBLJ*>*(*)())((::PBYTE)hIl2Cpp + BIJPFEHEBLJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJPFEHEBLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BIJPFEHEBLJ* Clone()
		{
			return ((::BIJPFEHEBLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJPFEHEBLJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJPFEHEBLJ_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BIJPFEHEBLJ_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BIJPFEHEBLJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BIJPFEHEBLJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BIJPFEHEBLJ*))((::PBYTE)hIl2Cpp + BIJPFEHEBLJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJPFEHEBLJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJPFEHEBLJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BIJPFEHEBLJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJPFEHEBLJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BIJPFEHEBLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIJPFEHEBLJ*))((::PBYTE)hIl2Cpp + BIJPFEHEBLJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BIJPFEHEBLJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
