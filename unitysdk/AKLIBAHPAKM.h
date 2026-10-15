#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKLIBAHPAKM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AKLIBAHPAKM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3D06B0)
#define AKLIBAHPAKM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3D0750)
#define AKLIBAHPAKM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3D03A0)
#define AKLIBAHPAKM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3D0370)
#define AKLIBAHPAKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D0360)
#define AKLIBAHPAKM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3D04B0)
#define AKLIBAHPAKM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3D03E0)
#define AKLIBAHPAKM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3D0610)
#define AKLIBAHPAKM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3D0320)
#define AKLIBAHPAKM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3D0700)
#define AKLIBAHPAKM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3D06D0)
#define AKLIBAHPAKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3D0350)
#define AKLIBAHPAKM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3D0640)
#define AKLIBAHPAKM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3D06A0)

inline static constexpr unsigned int AKLIBAHPAKM_TypeDefinitionIndex = 35044;

	class AKLIBAHPAKM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::AKLIBAHPAKM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AKLIBAHPAKM*>**)UnitySDK::FromName("", "AKLIBAHPAKM")->GetStaticField(0x371A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLIBAHPAKM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AKLIBAHPAKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKLIBAHPAKM*))((::PBYTE)hIl2Cpp + AKLIBAHPAKM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKLIBAHPAKM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AKLIBAHPAKM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AKLIBAHPAKM*>*(*)())((::PBYTE)hIl2Cpp + AKLIBAHPAKM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLIBAHPAKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AKLIBAHPAKM* Clone()
		{
			return ((::AKLIBAHPAKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLIBAHPAKM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AKLIBAHPAKM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AKLIBAHPAKM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AKLIBAHPAKM*))((::PBYTE)hIl2Cpp + AKLIBAHPAKM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLIBAHPAKM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLIBAHPAKM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AKLIBAHPAKM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLIBAHPAKM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AKLIBAHPAKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKLIBAHPAKM*))((::PBYTE)hIl2Cpp + AKLIBAHPAKM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AKLIBAHPAKM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
