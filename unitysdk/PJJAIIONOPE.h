#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJJAIIONOPE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PJJAIIONOPE_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1DF4DCE0)
#define PJJAIIONOPE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF4E040)
#define PJJAIIONOPE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF4E260)
#define PJJAIIONOPE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF4DC90)
#define PJJAIIONOPE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF4DC60)
#define PJJAIIONOPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF4DC50)
#define PJJAIIONOPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF4DDC0)
#define PJJAIIONOPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF4DCF0)
#define PJJAIIONOPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF4DF30)
#define PJJAIIONOPE_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1DF4DCD0)
#define PJJAIIONOPE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF4DC10)
#define PJJAIIONOPE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF4E100)
#define PJJAIIONOPE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF4E0D0)
#define PJJAIIONOPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF4DC40)
#define PJJAIIONOPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF4DF60)
#define PJJAIIONOPE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF4DFC0)

inline static constexpr unsigned int PJJAIIONOPE_TypeDefinitionIndex = 29072;

	class PJJAIIONOPE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IBEBBFIHLLP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PJJAIIONOPE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PJJAIIONOPE*>**)UnitySDK::FromName("", "PJJAIIONOPE")->GetStaticField(0x36A20);
		}

		// static const ::System::Object AODKNNMBGAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJAIIONOPE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PJJAIIONOPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJJAIIONOPE*))((::PBYTE)hIl2Cpp + PJJAIIONOPE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJJAIIONOPE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PJJAIIONOPE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PJJAIIONOPE*>*(*)())((::PBYTE)hIl2Cpp + PJJAIIONOPE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJAIIONOPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PJJAIIONOPE* Clone()
		{
			return ((::PJJAIIONOPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJAIIONOPE_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJAIIONOPE_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJJAIIONOPE_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJJAIIONOPE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PJJAIIONOPE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PJJAIIONOPE*))((::PBYTE)hIl2Cpp + PJJAIIONOPE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJAIIONOPE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJAIIONOPE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PJJAIIONOPE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJAIIONOPE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PJJAIIONOPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJJAIIONOPE*))((::PBYTE)hIl2Cpp + PJJAIIONOPE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PJJAIIONOPE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
