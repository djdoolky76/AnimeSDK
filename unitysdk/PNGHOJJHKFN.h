#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNGHOJJHKFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PNGHOJJHKFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF8B750)
#define PNGHOJJHKFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF8B7F0)
#define PNGHOJJHKFN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF8B440)
#define PNGHOJJHKFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF8B410)
#define PNGHOJJHKFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF8B400)
#define PNGHOJJHKFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF8B550)
#define PNGHOJJHKFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF8B480)
#define PNGHOJJHKFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF8B6B0)
#define PNGHOJJHKFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF8B3C0)
#define PNGHOJJHKFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF8B7A0)
#define PNGHOJJHKFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF8B770)
#define PNGHOJJHKFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF8B3F0)
#define PNGHOJJHKFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF8B6E0)
#define PNGHOJJHKFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF8B740)

inline static constexpr unsigned int PNGHOJJHKFN_TypeDefinitionIndex = 30907;

	class PNGHOJJHKFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::PNGHOJJHKFN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PNGHOJJHKFN*>**)UnitySDK::FromName("", "PNGHOJJHKFN")->GetStaticField(0x42270);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGHOJJHKFN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PNGHOJJHKFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNGHOJJHKFN*))((::PBYTE)hIl2Cpp + PNGHOJJHKFN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNGHOJJHKFN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PNGHOJJHKFN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PNGHOJJHKFN*>*(*)())((::PBYTE)hIl2Cpp + PNGHOJJHKFN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGHOJJHKFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PNGHOJJHKFN* Clone()
		{
			return ((::PNGHOJJHKFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGHOJJHKFN_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNGHOJJHKFN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PNGHOJJHKFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNGHOJJHKFN*))((::PBYTE)hIl2Cpp + PNGHOJJHKFN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGHOJJHKFN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGHOJJHKFN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PNGHOJJHKFN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGHOJJHKFN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PNGHOJJHKFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNGHOJJHKFN*))((::PBYTE)hIl2Cpp + PNGHOJJHKFN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PNGHOJJHKFN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
