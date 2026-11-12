#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEJECBOGNNN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MEJECBOGNNN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD578A0)
#define MEJECBOGNNN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD57AC0)
#define MEJECBOGNNN_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD574F0)
#define MEJECBOGNNN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD574C0)
#define MEJECBOGNNN_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD574B0)
#define MEJECBOGNNN_DECLCLGGOGD_OFFSET UNITYSDK_OFFSET(0x1FD57540)
#define MEJECBOGNNN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD57620)
#define MEJECBOGNNN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD57550)
#define MEJECBOGNNN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD57790)
#define MEJECBOGNNN_HOFJNIJMEGJ_OFFSET UNITYSDK_OFFSET(0x1FD57530)
#define MEJECBOGNNN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD57470)
#define MEJECBOGNNN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD57960)
#define MEJECBOGNNN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD57930)
#define MEJECBOGNNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD574A0)
#define MEJECBOGNNN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD577C0)
#define MEJECBOGNNN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD57820)

inline static constexpr unsigned int MEJECBOGNNN_TypeDefinitionIndex = 27637;

	class MEJECBOGNNN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OEHAKOKDOAA; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MEJECBOGNNN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MEJECBOGNNN*>**)UnitySDK::FromName("", "MEJECBOGNNN")->GetStaticField(0x51930);
		}

		// static const ::System::Object HBFMDPBHHHE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJECBOGNNN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MEJECBOGNNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEJECBOGNNN*))((::PBYTE)hIl2Cpp + MEJECBOGNNN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEJECBOGNNN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MEJECBOGNNN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MEJECBOGNNN*>*(*)())((::PBYTE)hIl2Cpp + MEJECBOGNNN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJECBOGNNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MEJECBOGNNN* Clone()
		{
			return ((::MEJECBOGNNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJECBOGNNN_CLONE_OFFSET))(this);
		}

		::System::UInt32 HOFJNIJMEGJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJECBOGNNN_HOFJNIJMEGJ_OFFSET))(this);
		}

		::System::Void DECLCLGGOGD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MEJECBOGNNN_DECLCLGGOGD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MEJECBOGNNN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MEJECBOGNNN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MEJECBOGNNN*))((::PBYTE)hIl2Cpp + MEJECBOGNNN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJECBOGNNN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJECBOGNNN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MEJECBOGNNN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJECBOGNNN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MEJECBOGNNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEJECBOGNNN*))((::PBYTE)hIl2Cpp + MEJECBOGNNN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MEJECBOGNNN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
