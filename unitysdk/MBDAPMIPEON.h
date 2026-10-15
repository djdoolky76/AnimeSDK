#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBDAPMIPEON;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MBDAPMIPEON_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9B4900)
#define MBDAPMIPEON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9B49A0)
#define MBDAPMIPEON_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9B45F0)
#define MBDAPMIPEON_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9B45C0)
#define MBDAPMIPEON_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9B45B0)
#define MBDAPMIPEON_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9B4700)
#define MBDAPMIPEON_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9B4630)
#define MBDAPMIPEON_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9B4860)
#define MBDAPMIPEON_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9B4570)
#define MBDAPMIPEON_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9B4950)
#define MBDAPMIPEON_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9B4920)
#define MBDAPMIPEON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9B45A0)
#define MBDAPMIPEON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9B4890)
#define MBDAPMIPEON_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9B48F0)

inline static constexpr unsigned int MBDAPMIPEON_TypeDefinitionIndex = 35002;

	class MBDAPMIPEON : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::MBDAPMIPEON*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MBDAPMIPEON*>**)UnitySDK::FromName("", "MBDAPMIPEON")->GetStaticField(0x47260);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDAPMIPEON_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MBDAPMIPEON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBDAPMIPEON*))((::PBYTE)hIl2Cpp + MBDAPMIPEON_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBDAPMIPEON_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MBDAPMIPEON*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MBDAPMIPEON*>*(*)())((::PBYTE)hIl2Cpp + MBDAPMIPEON_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDAPMIPEON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MBDAPMIPEON* Clone()
		{
			return ((::MBDAPMIPEON*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDAPMIPEON_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MBDAPMIPEON_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MBDAPMIPEON* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MBDAPMIPEON*))((::PBYTE)hIl2Cpp + MBDAPMIPEON_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDAPMIPEON_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDAPMIPEON_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MBDAPMIPEON_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDAPMIPEON_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MBDAPMIPEON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBDAPMIPEON*))((::PBYTE)hIl2Cpp + MBDAPMIPEON_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MBDAPMIPEON_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
