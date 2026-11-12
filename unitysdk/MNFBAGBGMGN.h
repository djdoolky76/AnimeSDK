#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNFBAGBGMGN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MNFBAGBGMGN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDCCDD0)
#define MNFBAGBGMGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDCCE70)
#define MNFBAGBGMGN_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDCCAC0)
#define MNFBAGBGMGN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDCCA90)
#define MNFBAGBGMGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDCCA80)
#define MNFBAGBGMGN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDCCBD0)
#define MNFBAGBGMGN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDCCB00)
#define MNFBAGBGMGN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDCCD30)
#define MNFBAGBGMGN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDCCA40)
#define MNFBAGBGMGN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDCCE20)
#define MNFBAGBGMGN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDCCDF0)
#define MNFBAGBGMGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDCCA70)
#define MNFBAGBGMGN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDCCD60)
#define MNFBAGBGMGN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDCCDC0)

inline static constexpr unsigned int MNFBAGBGMGN_TypeDefinitionIndex = 28240;

	class MNFBAGBGMGN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::MNFBAGBGMGN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MNFBAGBGMGN*>**)UnitySDK::FromName("", "MNFBAGBGMGN")->GetStaticField(0x5F280);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFBAGBGMGN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MNFBAGBGMGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNFBAGBGMGN*))((::PBYTE)hIl2Cpp + MNFBAGBGMGN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNFBAGBGMGN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MNFBAGBGMGN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MNFBAGBGMGN*>*(*)())((::PBYTE)hIl2Cpp + MNFBAGBGMGN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFBAGBGMGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MNFBAGBGMGN* Clone()
		{
			return ((::MNFBAGBGMGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFBAGBGMGN_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MNFBAGBGMGN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MNFBAGBGMGN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MNFBAGBGMGN*))((::PBYTE)hIl2Cpp + MNFBAGBGMGN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFBAGBGMGN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFBAGBGMGN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MNFBAGBGMGN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFBAGBGMGN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MNFBAGBGMGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNFBAGBGMGN*))((::PBYTE)hIl2Cpp + MNFBAGBGMGN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MNFBAGBGMGN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
