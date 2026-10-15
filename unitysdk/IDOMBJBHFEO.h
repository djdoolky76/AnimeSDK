#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDOMBJBHFEO;
class LDJDPENEGNH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IDOMBJBHFEO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E632EE0)
#define IDOMBJBHFEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6331E0)
#define IDOMBJBHFEO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E632870)
#define IDOMBJBHFEO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6327B0)
#define IDOMBJBHFEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6327A0)
#define IDOMBJBHFEO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E632AD0)
#define IDOMBJBHFEO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E632960)
#define IDOMBJBHFEO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E632DA0)
#define IDOMBJBHFEO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E632760)
#define IDOMBJBHFEO_JNHOFGCGGDG_OFFSET UNITYSDK_OFFSET(0x1E632940)
#define IDOMBJBHFEO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E633050)
#define IDOMBJBHFEO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E632F40)
#define IDOMBJBHFEO_ODEPKCOEMJB_OFFSET UNITYSDK_OFFSET(0x1E632950)
#define IDOMBJBHFEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E632790)
#define IDOMBJBHFEO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E632DF0)
#define IDOMBJBHFEO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E632E50)

inline static constexpr unsigned int IDOMBJBHFEO_TypeDefinitionIndex = 32294;

	class IDOMBJBHFEO : public ::System::Object
	{
	public:
		::LDJDPENEGNH* BCCJIDFAJKP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IDOMBJBHFEO")->GetStaticField(0x47530);
		}

		// static const ::System::Object HNPDHDEBCJM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOMBJBHFEO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IDOMBJBHFEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDOMBJBHFEO*))((::PBYTE)hIl2Cpp + IDOMBJBHFEO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDOMBJBHFEO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IDOMBJBHFEO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOMBJBHFEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IDOMBJBHFEO* Clone()
		{
			return ((::IDOMBJBHFEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOMBJBHFEO_CLONE_OFFSET))(this);
		}

		::LDJDPENEGNH* JNHOFGCGGDG()
		{
			return ((::LDJDPENEGNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOMBJBHFEO_JNHOFGCGGDG_OFFSET))(this);
		}

		::System::Void ODEPKCOEMJB(::LDJDPENEGNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDJDPENEGNH*))((::PBYTE)hIl2Cpp + IDOMBJBHFEO_ODEPKCOEMJB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDOMBJBHFEO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IDOMBJBHFEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDOMBJBHFEO*))((::PBYTE)hIl2Cpp + IDOMBJBHFEO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOMBJBHFEO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOMBJBHFEO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IDOMBJBHFEO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOMBJBHFEO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IDOMBJBHFEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDOMBJBHFEO*))((::PBYTE)hIl2Cpp + IDOMBJBHFEO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IDOMBJBHFEO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
