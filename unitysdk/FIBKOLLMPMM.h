#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIBKOLLMPMM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FIBKOLLMPMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E395130)
#define FIBKOLLMPMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3951D0)
#define FIBKOLLMPMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E394E20)
#define FIBKOLLMPMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E394DF0)
#define FIBKOLLMPMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E394DE0)
#define FIBKOLLMPMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E394F30)
#define FIBKOLLMPMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E394E60)
#define FIBKOLLMPMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E395090)
#define FIBKOLLMPMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E394DA0)
#define FIBKOLLMPMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E395180)
#define FIBKOLLMPMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E395150)
#define FIBKOLLMPMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E394DD0)
#define FIBKOLLMPMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3950C0)
#define FIBKOLLMPMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E395120)

inline static constexpr unsigned int FIBKOLLMPMM_TypeDefinitionIndex = 27061;

	class FIBKOLLMPMM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::FIBKOLLMPMM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FIBKOLLMPMM*>**)UnitySDK::FromName("", "FIBKOLLMPMM")->GetStaticField(0x5FE80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBKOLLMPMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FIBKOLLMPMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIBKOLLMPMM*))((::PBYTE)hIl2Cpp + FIBKOLLMPMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIBKOLLMPMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FIBKOLLMPMM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FIBKOLLMPMM*>*(*)())((::PBYTE)hIl2Cpp + FIBKOLLMPMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBKOLLMPMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FIBKOLLMPMM* Clone()
		{
			return ((::FIBKOLLMPMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBKOLLMPMM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FIBKOLLMPMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FIBKOLLMPMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FIBKOLLMPMM*))((::PBYTE)hIl2Cpp + FIBKOLLMPMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBKOLLMPMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBKOLLMPMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FIBKOLLMPMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBKOLLMPMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FIBKOLLMPMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIBKOLLMPMM*))((::PBYTE)hIl2Cpp + FIBKOLLMPMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FIBKOLLMPMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
