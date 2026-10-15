#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MENLHHCJNCE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MENLHHCJNCE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9E4980)
#define MENLHHCJNCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9E4B40)
#define MENLHHCJNCE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9E4560)
#define MENLHHCJNCE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9E4530)
#define MENLHHCJNCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E4520)
#define MENLHHCJNCE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9E46B0)
#define MENLHHCJNCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9E45D0)
#define MENLHHCJNCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9E4830)
#define MENLHHCJNCE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9E44E0)
#define MENLHHCJNCE_LGIDEFJOLBC_OFFSET UNITYSDK_OFFSET(0x1E9E45C0)
#define MENLHHCJNCE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9E49E0)
#define MENLHHCJNCE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9E49B0)
#define MENLHHCJNCE_NPILNPEJEJF_OFFSET UNITYSDK_OFFSET(0x1E9E45B0)
#define MENLHHCJNCE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9E4510)
#define MENLHHCJNCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9E4860)
#define MENLHHCJNCE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9E48C0)

inline static constexpr unsigned int MENLHHCJNCE_TypeDefinitionIndex = 26953;

	class MENLHHCJNCE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean IALIHEFEMDE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MENLHHCJNCE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MENLHHCJNCE*>**)UnitySDK::FromName("", "MENLHHCJNCE")->GetStaticField(0x4E0D0);
		}

		// static const ::System::Object FJNMCFIDCLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENLHHCJNCE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MENLHHCJNCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MENLHHCJNCE*))((::PBYTE)hIl2Cpp + MENLHHCJNCE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MENLHHCJNCE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MENLHHCJNCE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MENLHHCJNCE*>*(*)())((::PBYTE)hIl2Cpp + MENLHHCJNCE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MENLHHCJNCE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MENLHHCJNCE* Clone()
		{
			return ((::MENLHHCJNCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MENLHHCJNCE_CLONE_OFFSET))(this);
		}

		::System::Boolean NPILNPEJEJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MENLHHCJNCE_NPILNPEJEJF_OFFSET))(this);
		}

		::System::Void LGIDEFJOLBC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MENLHHCJNCE_LGIDEFJOLBC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MENLHHCJNCE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MENLHHCJNCE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MENLHHCJNCE*))((::PBYTE)hIl2Cpp + MENLHHCJNCE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MENLHHCJNCE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MENLHHCJNCE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MENLHHCJNCE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MENLHHCJNCE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MENLHHCJNCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MENLHHCJNCE*))((::PBYTE)hIl2Cpp + MENLHHCJNCE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MENLHHCJNCE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
