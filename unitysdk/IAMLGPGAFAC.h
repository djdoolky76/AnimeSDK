#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAMLGPGAFAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IAMLGPGAFAC_AKBNGOCLOCI_OFFSET UNITYSDK_OFFSET(0x1E5DB860)
#define IAMLGPGAFAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5DBBC0)
#define IAMLGPGAFAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5DBDE0)
#define IAMLGPGAFAC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5DB810)
#define IAMLGPGAFAC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5DB7E0)
#define IAMLGPGAFAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5DB7D0)
#define IAMLGPGAFAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5DB940)
#define IAMLGPGAFAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5DB870)
#define IAMLGPGAFAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5DBAB0)
#define IAMLGPGAFAC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5DB790)
#define IAMLGPGAFAC_MBHDGNNCJGH_OFFSET UNITYSDK_OFFSET(0x1E5DB850)
#define IAMLGPGAFAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5DBC80)
#define IAMLGPGAFAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5DBC50)
#define IAMLGPGAFAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5DB7C0)
#define IAMLGPGAFAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5DBAE0)
#define IAMLGPGAFAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5DBB40)

inline static constexpr unsigned int IAMLGPGAFAC_TypeDefinitionIndex = 34487;

	class IAMLGPGAFAC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CIIPNEBKCLI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IAMLGPGAFAC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IAMLGPGAFAC*>**)UnitySDK::FromName("", "IAMLGPGAFAC")->GetStaticField(0x41890);
		}

		// static const ::System::Object GOBJOHKBCFI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IAMLGPGAFAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAMLGPGAFAC*))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAMLGPGAFAC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IAMLGPGAFAC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IAMLGPGAFAC*>*(*)())((::PBYTE)hIl2Cpp + IAMLGPGAFAC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IAMLGPGAFAC* Clone()
		{
			return ((::IAMLGPGAFAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_CLONE_OFFSET))(this);
		}

		::System::UInt32 MBHDGNNCJGH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_MBHDGNNCJGH_OFFSET))(this);
		}

		::System::Void AKBNGOCLOCI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_AKBNGOCLOCI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IAMLGPGAFAC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IAMLGPGAFAC*))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IAMLGPGAFAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAMLGPGAFAC*))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IAMLGPGAFAC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
