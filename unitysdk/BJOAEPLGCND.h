#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJOAEPLGCND;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BJOAEPLGCND_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F16E520)
#define BJOAEPLGCND_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F16E5C0)
#define BJOAEPLGCND_CLONE_OFFSET UNITYSDK_OFFSET(0x1F16E210)
#define BJOAEPLGCND_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F16E1E0)
#define BJOAEPLGCND_CTOR_OFFSET UNITYSDK_OFFSET(0x1F16E1D0)
#define BJOAEPLGCND_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F16E320)
#define BJOAEPLGCND_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F16E250)
#define BJOAEPLGCND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F16E480)
#define BJOAEPLGCND_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F16E190)
#define BJOAEPLGCND_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F16E570)
#define BJOAEPLGCND_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F16E540)
#define BJOAEPLGCND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F16E1C0)
#define BJOAEPLGCND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F16E4B0)
#define BJOAEPLGCND_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F16E510)

inline static constexpr unsigned int BJOAEPLGCND_TypeDefinitionIndex = 30669;

	class BJOAEPLGCND : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::BJOAEPLGCND*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BJOAEPLGCND*>**)UnitySDK::FromName("", "BJOAEPLGCND")->GetStaticField(0x4C2F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJOAEPLGCND_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BJOAEPLGCND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJOAEPLGCND*))((::PBYTE)hIl2Cpp + BJOAEPLGCND_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJOAEPLGCND_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BJOAEPLGCND*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BJOAEPLGCND*>*(*)())((::PBYTE)hIl2Cpp + BJOAEPLGCND_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJOAEPLGCND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BJOAEPLGCND* Clone()
		{
			return ((::BJOAEPLGCND*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJOAEPLGCND_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJOAEPLGCND_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BJOAEPLGCND* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJOAEPLGCND*))((::PBYTE)hIl2Cpp + BJOAEPLGCND_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJOAEPLGCND_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJOAEPLGCND_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BJOAEPLGCND_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJOAEPLGCND_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BJOAEPLGCND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJOAEPLGCND*))((::PBYTE)hIl2Cpp + BJOAEPLGCND_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BJOAEPLGCND_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
