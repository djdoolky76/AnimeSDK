#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKPAPNKFBHD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CKPAPNKFBHD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0EF620)
#define CKPAPNKFBHD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0EF6C0)
#define CKPAPNKFBHD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0EF310)
#define CKPAPNKFBHD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0EF2E0)
#define CKPAPNKFBHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0EF2D0)
#define CKPAPNKFBHD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0EF420)
#define CKPAPNKFBHD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0EF350)
#define CKPAPNKFBHD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0EF580)
#define CKPAPNKFBHD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0EF290)
#define CKPAPNKFBHD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0EF670)
#define CKPAPNKFBHD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0EF640)
#define CKPAPNKFBHD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0EF2C0)
#define CKPAPNKFBHD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0EF5B0)
#define CKPAPNKFBHD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0EF610)

inline static constexpr unsigned int CKPAPNKFBHD_TypeDefinitionIndex = 28650;

	class CKPAPNKFBHD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::CKPAPNKFBHD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CKPAPNKFBHD*>**)UnitySDK::FromName("", "CKPAPNKFBHD")->GetStaticField(0x1BB10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAPNKFBHD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CKPAPNKFBHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKPAPNKFBHD*))((::PBYTE)hIl2Cpp + CKPAPNKFBHD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKPAPNKFBHD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CKPAPNKFBHD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CKPAPNKFBHD*>*(*)())((::PBYTE)hIl2Cpp + CKPAPNKFBHD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAPNKFBHD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CKPAPNKFBHD* Clone()
		{
			return ((::CKPAPNKFBHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAPNKFBHD_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKPAPNKFBHD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CKPAPNKFBHD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKPAPNKFBHD*))((::PBYTE)hIl2Cpp + CKPAPNKFBHD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAPNKFBHD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAPNKFBHD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CKPAPNKFBHD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAPNKFBHD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CKPAPNKFBHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKPAPNKFBHD*))((::PBYTE)hIl2Cpp + CKPAPNKFBHD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CKPAPNKFBHD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
