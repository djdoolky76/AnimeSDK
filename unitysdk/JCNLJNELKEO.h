#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCNLJNELKEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JCNLJNELKEO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6D7A80)
#define JCNLJNELKEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D7CA0)
#define JCNLJNELKEO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6D76D0)
#define JCNLJNELKEO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6D76A0)
#define JCNLJNELKEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D7690)
#define JCNLJNELKEO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6D7800)
#define JCNLJNELKEO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6D7730)
#define JCNLJNELKEO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6D7970)
#define JCNLJNELKEO_GJAHHJPLKII_OFFSET UNITYSDK_OFFSET(0x1E6D7720)
#define JCNLJNELKEO_GLFKMHKKEHM_OFFSET UNITYSDK_OFFSET(0x1E6D7710)
#define JCNLJNELKEO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6D7650)
#define JCNLJNELKEO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6D7B40)
#define JCNLJNELKEO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6D7B10)
#define JCNLJNELKEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6D7680)
#define JCNLJNELKEO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6D79A0)
#define JCNLJNELKEO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6D7A00)

inline static constexpr unsigned int JCNLJNELKEO_TypeDefinitionIndex = 31284;

	class JCNLJNELKEO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GDPGCPKEFKH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JCNLJNELKEO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JCNLJNELKEO*>**)UnitySDK::FromName("", "JCNLJNELKEO")->GetStaticField(0x5A450);
		}

		// static const ::System::Object JIPLGBKNGHJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNLJNELKEO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JCNLJNELKEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCNLJNELKEO*))((::PBYTE)hIl2Cpp + JCNLJNELKEO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCNLJNELKEO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JCNLJNELKEO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JCNLJNELKEO*>*(*)())((::PBYTE)hIl2Cpp + JCNLJNELKEO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNLJNELKEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JCNLJNELKEO* Clone()
		{
			return ((::JCNLJNELKEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNLJNELKEO_CLONE_OFFSET))(this);
		}

		::System::UInt32 GLFKMHKKEHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNLJNELKEO_GLFKMHKKEHM_OFFSET))(this);
		}

		::System::Void GJAHHJPLKII(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JCNLJNELKEO_GJAHHJPLKII_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCNLJNELKEO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JCNLJNELKEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JCNLJNELKEO*))((::PBYTE)hIl2Cpp + JCNLJNELKEO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNLJNELKEO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNLJNELKEO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JCNLJNELKEO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNLJNELKEO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JCNLJNELKEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCNLJNELKEO*))((::PBYTE)hIl2Cpp + JCNLJNELKEO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JCNLJNELKEO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
