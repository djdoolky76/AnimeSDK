#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGDEGLENMPM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HGDEGLENMPM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E575BA0)
#define HGDEGLENMPM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E575C40)
#define HGDEGLENMPM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E575890)
#define HGDEGLENMPM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E575860)
#define HGDEGLENMPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E575850)
#define HGDEGLENMPM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5759A0)
#define HGDEGLENMPM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5758D0)
#define HGDEGLENMPM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E575B00)
#define HGDEGLENMPM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E575810)
#define HGDEGLENMPM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E575BF0)
#define HGDEGLENMPM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E575BC0)
#define HGDEGLENMPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E575840)
#define HGDEGLENMPM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E575B30)
#define HGDEGLENMPM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E575B90)

inline static constexpr unsigned int HGDEGLENMPM_TypeDefinitionIndex = 30051;

	class HGDEGLENMPM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::HGDEGLENMPM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HGDEGLENMPM*>**)UnitySDK::FromName("", "HGDEGLENMPM")->GetStaticField(0x36A60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDEGLENMPM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HGDEGLENMPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGDEGLENMPM*))((::PBYTE)hIl2Cpp + HGDEGLENMPM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGDEGLENMPM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HGDEGLENMPM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HGDEGLENMPM*>*(*)())((::PBYTE)hIl2Cpp + HGDEGLENMPM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDEGLENMPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HGDEGLENMPM* Clone()
		{
			return ((::HGDEGLENMPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDEGLENMPM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HGDEGLENMPM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HGDEGLENMPM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGDEGLENMPM*))((::PBYTE)hIl2Cpp + HGDEGLENMPM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDEGLENMPM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDEGLENMPM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HGDEGLENMPM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDEGLENMPM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HGDEGLENMPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGDEGLENMPM*))((::PBYTE)hIl2Cpp + HGDEGLENMPM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HGDEGLENMPM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
