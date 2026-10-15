#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJMEDBOACGL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PJMEDBOACGL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF517D0)
#define PJMEDBOACGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF519F0)
#define PJMEDBOACGL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF513C0)
#define PJMEDBOACGL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF51390)
#define PJMEDBOACGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF51380)
#define PJMEDBOACGL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF51550)
#define PJMEDBOACGL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF51450)
#define PJMEDBOACGL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF516C0)
#define PJMEDBOACGL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF51310)
#define PJMEDBOACGL_JOFMLPJKFBO_OFFSET UNITYSDK_OFFSET(0x1DF51440)
#define PJMEDBOACGL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF51890)
#define PJMEDBOACGL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF51860)
#define PJMEDBOACGL_NJDBBHCEOLG_OFFSET UNITYSDK_OFFSET(0x1DF51430)
#define PJMEDBOACGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF51370)
#define PJMEDBOACGL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF516F0)
#define PJMEDBOACGL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF51750)

inline static constexpr unsigned int PJMEDBOACGL_TypeDefinitionIndex = 32852;

	class PJMEDBOACGL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ACMGLOOCIND; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PJMEDBOACGL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PJMEDBOACGL*>**)UnitySDK::FromName("", "PJMEDBOACGL")->GetStaticField(0x36E10);
		}

		// static const ::System::Object DPMPBNHNKCG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEDBOACGL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PJMEDBOACGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJMEDBOACGL*))((::PBYTE)hIl2Cpp + PJMEDBOACGL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJMEDBOACGL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PJMEDBOACGL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PJMEDBOACGL*>*(*)())((::PBYTE)hIl2Cpp + PJMEDBOACGL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEDBOACGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PJMEDBOACGL* Clone()
		{
			return ((::PJMEDBOACGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEDBOACGL_CLONE_OFFSET))(this);
		}

		::System::UInt32 NJDBBHCEOLG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEDBOACGL_NJDBBHCEOLG_OFFSET))(this);
		}

		::System::Void JOFMLPJKFBO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJMEDBOACGL_JOFMLPJKFBO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJMEDBOACGL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PJMEDBOACGL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PJMEDBOACGL*))((::PBYTE)hIl2Cpp + PJMEDBOACGL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEDBOACGL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEDBOACGL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PJMEDBOACGL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEDBOACGL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PJMEDBOACGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJMEDBOACGL*))((::PBYTE)hIl2Cpp + PJMEDBOACGL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PJMEDBOACGL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
