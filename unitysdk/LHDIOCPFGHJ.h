#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHDIOCPFGHJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LHDIOCPFGHJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E95E0C0)
#define LHDIOCPFGHJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E95E160)
#define LHDIOCPFGHJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E95DDB0)
#define LHDIOCPFGHJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E95DD80)
#define LHDIOCPFGHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E95DD70)
#define LHDIOCPFGHJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E95DEC0)
#define LHDIOCPFGHJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E95DDF0)
#define LHDIOCPFGHJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E95E020)
#define LHDIOCPFGHJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E95DD30)
#define LHDIOCPFGHJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E95E110)
#define LHDIOCPFGHJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E95E0E0)
#define LHDIOCPFGHJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E95DD60)
#define LHDIOCPFGHJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E95E050)
#define LHDIOCPFGHJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E95E0B0)

inline static constexpr unsigned int LHDIOCPFGHJ_TypeDefinitionIndex = 29566;

	class LHDIOCPFGHJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::LHDIOCPFGHJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LHDIOCPFGHJ*>**)UnitySDK::FromName("", "LHDIOCPFGHJ")->GetStaticField(0x40BA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHDIOCPFGHJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LHDIOCPFGHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHDIOCPFGHJ*))((::PBYTE)hIl2Cpp + LHDIOCPFGHJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHDIOCPFGHJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LHDIOCPFGHJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LHDIOCPFGHJ*>*(*)())((::PBYTE)hIl2Cpp + LHDIOCPFGHJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHDIOCPFGHJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LHDIOCPFGHJ* Clone()
		{
			return ((::LHDIOCPFGHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHDIOCPFGHJ_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHDIOCPFGHJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LHDIOCPFGHJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LHDIOCPFGHJ*))((::PBYTE)hIl2Cpp + LHDIOCPFGHJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHDIOCPFGHJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHDIOCPFGHJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LHDIOCPFGHJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHDIOCPFGHJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LHDIOCPFGHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHDIOCPFGHJ*))((::PBYTE)hIl2Cpp + LHDIOCPFGHJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LHDIOCPFGHJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
