#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGBGMGIBDHM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JGBGMGIBDHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA45690)
#define JGBGMGIBDHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA45730)
#define JGBGMGIBDHM_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA45380)
#define JGBGMGIBDHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA45350)
#define JGBGMGIBDHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA45340)
#define JGBGMGIBDHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA45490)
#define JGBGMGIBDHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA453C0)
#define JGBGMGIBDHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA455F0)
#define JGBGMGIBDHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA45300)
#define JGBGMGIBDHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA456E0)
#define JGBGMGIBDHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA456B0)
#define JGBGMGIBDHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA45330)
#define JGBGMGIBDHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA45620)
#define JGBGMGIBDHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA45680)

inline static constexpr unsigned int JGBGMGIBDHM_TypeDefinitionIndex = 35164;

	class JGBGMGIBDHM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::JGBGMGIBDHM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JGBGMGIBDHM*>**)UnitySDK::FromName("", "JGBGMGIBDHM")->GetStaticField(0x46DA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBGMGIBDHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JGBGMGIBDHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGBGMGIBDHM*))((::PBYTE)hIl2Cpp + JGBGMGIBDHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGBGMGIBDHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JGBGMGIBDHM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JGBGMGIBDHM*>*(*)())((::PBYTE)hIl2Cpp + JGBGMGIBDHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBGMGIBDHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JGBGMGIBDHM* Clone()
		{
			return ((::JGBGMGIBDHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBGMGIBDHM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGBGMGIBDHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JGBGMGIBDHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JGBGMGIBDHM*))((::PBYTE)hIl2Cpp + JGBGMGIBDHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBGMGIBDHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBGMGIBDHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JGBGMGIBDHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBGMGIBDHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JGBGMGIBDHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGBGMGIBDHM*))((::PBYTE)hIl2Cpp + JGBGMGIBDHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JGBGMGIBDHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
