#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOIBKAPDBMM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LOIBKAPDBMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E993280)
#define LOIBKAPDBMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E993320)
#define LOIBKAPDBMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E992F70)
#define LOIBKAPDBMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E992F40)
#define LOIBKAPDBMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E992F30)
#define LOIBKAPDBMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E993080)
#define LOIBKAPDBMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E992FB0)
#define LOIBKAPDBMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9931E0)
#define LOIBKAPDBMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E992EF0)
#define LOIBKAPDBMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9932D0)
#define LOIBKAPDBMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9932A0)
#define LOIBKAPDBMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E992F20)
#define LOIBKAPDBMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E993210)
#define LOIBKAPDBMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E993270)

inline static constexpr unsigned int LOIBKAPDBMM_TypeDefinitionIndex = 27397;

	class LOIBKAPDBMM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::LOIBKAPDBMM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LOIBKAPDBMM*>**)UnitySDK::FromName("", "LOIBKAPDBMM")->GetStaticField(0x42110);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIBKAPDBMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LOIBKAPDBMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOIBKAPDBMM*))((::PBYTE)hIl2Cpp + LOIBKAPDBMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOIBKAPDBMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LOIBKAPDBMM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LOIBKAPDBMM*>*(*)())((::PBYTE)hIl2Cpp + LOIBKAPDBMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIBKAPDBMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LOIBKAPDBMM* Clone()
		{
			return ((::LOIBKAPDBMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIBKAPDBMM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LOIBKAPDBMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LOIBKAPDBMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LOIBKAPDBMM*))((::PBYTE)hIl2Cpp + LOIBKAPDBMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIBKAPDBMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIBKAPDBMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LOIBKAPDBMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIBKAPDBMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LOIBKAPDBMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOIBKAPDBMM*))((::PBYTE)hIl2Cpp + LOIBKAPDBMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LOIBKAPDBMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
