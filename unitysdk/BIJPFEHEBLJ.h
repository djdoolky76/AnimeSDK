#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIJPFEHEBLJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BIJPFEHEBLJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE037E0)
#define BIJPFEHEBLJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE03A00)
#define BIJPFEHEBLJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE03430)
#define BIJPFEHEBLJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE03400)
#define BIJPFEHEBLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE033F0)
#define BIJPFEHEBLJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE03560)
#define BIJPFEHEBLJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE03490)
#define BIJPFEHEBLJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE036D0)
#define BIJPFEHEBLJ_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1DE03480)
#define BIJPFEHEBLJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE033B0)
#define BIJPFEHEBLJ_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1DE03470)
#define BIJPFEHEBLJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE038A0)
#define BIJPFEHEBLJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE03870)
#define BIJPFEHEBLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE033E0)
#define BIJPFEHEBLJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE03700)
#define BIJPFEHEBLJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE03760)

inline static constexpr unsigned int BIJPFEHEBLJ_TypeDefinitionIndex = 25968;

	class BIJPFEHEBLJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HJEGLCJEOKC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BIJPFEHEBLJ")->GetStaticField(0x48640);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BIJPFEHEBLJ_JJGHOBBFNJD_OFFSET))();
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
