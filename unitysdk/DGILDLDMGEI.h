#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGILDLDMGEI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DGILDLDMGEI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1AE590)
#define DGILDLDMGEI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1AE630)
#define DGILDLDMGEI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1AE230)
#define DGILDLDMGEI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1AE200)
#define DGILDLDMGEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1AE1F0)
#define DGILDLDMGEI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1AE390)
#define DGILDLDMGEI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1AE2A0)
#define DGILDLDMGEI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1AE4F0)
#define DGILDLDMGEI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1AE180)
#define DGILDLDMGEI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1AE5E0)
#define DGILDLDMGEI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1AE5B0)
#define DGILDLDMGEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1AE1E0)
#define DGILDLDMGEI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1AE520)
#define DGILDLDMGEI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1AE580)

inline static constexpr unsigned int DGILDLDMGEI_TypeDefinitionIndex = 29515;

	class DGILDLDMGEI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::DGILDLDMGEI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DGILDLDMGEI*>**)UnitySDK::FromName("", "DGILDLDMGEI")->GetStaticField(0x345A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGILDLDMGEI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DGILDLDMGEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGILDLDMGEI*))((::PBYTE)hIl2Cpp + DGILDLDMGEI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGILDLDMGEI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DGILDLDMGEI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DGILDLDMGEI*>*(*)())((::PBYTE)hIl2Cpp + DGILDLDMGEI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGILDLDMGEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DGILDLDMGEI* Clone()
		{
			return ((::DGILDLDMGEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGILDLDMGEI_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DGILDLDMGEI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DGILDLDMGEI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DGILDLDMGEI*))((::PBYTE)hIl2Cpp + DGILDLDMGEI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGILDLDMGEI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGILDLDMGEI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DGILDLDMGEI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGILDLDMGEI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DGILDLDMGEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGILDLDMGEI*))((::PBYTE)hIl2Cpp + DGILDLDMGEI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DGILDLDMGEI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
