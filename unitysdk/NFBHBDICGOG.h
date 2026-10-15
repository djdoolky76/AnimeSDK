#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFBHBDICGOG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NFBHBDICGOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAFF9E0)
#define NFBHBDICGOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAFFA80)
#define NFBHBDICGOG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAFF6D0)
#define NFBHBDICGOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAFF6A0)
#define NFBHBDICGOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAFF690)
#define NFBHBDICGOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAFF7E0)
#define NFBHBDICGOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAFF710)
#define NFBHBDICGOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAFF940)
#define NFBHBDICGOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAFF650)
#define NFBHBDICGOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAFFA30)
#define NFBHBDICGOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAFFA00)
#define NFBHBDICGOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAFF680)
#define NFBHBDICGOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAFF970)
#define NFBHBDICGOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAFF9D0)

inline static constexpr unsigned int NFBHBDICGOG_TypeDefinitionIndex = 30287;

	class NFBHBDICGOG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::NFBHBDICGOG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NFBHBDICGOG*>**)UnitySDK::FromName("", "NFBHBDICGOG")->GetStaticField(0x5E590);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBHBDICGOG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NFBHBDICGOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFBHBDICGOG*))((::PBYTE)hIl2Cpp + NFBHBDICGOG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFBHBDICGOG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NFBHBDICGOG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NFBHBDICGOG*>*(*)())((::PBYTE)hIl2Cpp + NFBHBDICGOG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBHBDICGOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NFBHBDICGOG* Clone()
		{
			return ((::NFBHBDICGOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBHBDICGOG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NFBHBDICGOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NFBHBDICGOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NFBHBDICGOG*))((::PBYTE)hIl2Cpp + NFBHBDICGOG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBHBDICGOG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBHBDICGOG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NFBHBDICGOG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBHBDICGOG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NFBHBDICGOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFBHBDICGOG*))((::PBYTE)hIl2Cpp + NFBHBDICGOG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NFBHBDICGOG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
