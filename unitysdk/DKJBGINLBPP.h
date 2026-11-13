#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKJBGINLBPP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DKJBGINLBPP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB3E9C0)
#define DKJBGINLBPP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB3EBE0)
#define DKJBGINLBPP_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB3E610)
#define DKJBGINLBPP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB3E5E0)
#define DKJBGINLBPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB3E5D0)
#define DKJBGINLBPP_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1FB3E650)
#define DKJBGINLBPP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB3E740)
#define DKJBGINLBPP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB3E670)
#define DKJBGINLBPP_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1FB3E660)
#define DKJBGINLBPP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB3E8B0)
#define DKJBGINLBPP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB3E590)
#define DKJBGINLBPP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB3EA80)
#define DKJBGINLBPP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB3EA50)
#define DKJBGINLBPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB3E5C0)
#define DKJBGINLBPP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB3E8E0)
#define DKJBGINLBPP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB3E940)

inline static constexpr unsigned int DKJBGINLBPP_TypeDefinitionIndex = 36039;

	class DKJBGINLBPP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GEMFJILOPLL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DKJBGINLBPP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DKJBGINLBPP*>**)UnitySDK::FromName("", "DKJBGINLBPP")->GetStaticField(0x2DA00);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJBGINLBPP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DKJBGINLBPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKJBGINLBPP*))((::PBYTE)hIl2Cpp + DKJBGINLBPP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKJBGINLBPP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DKJBGINLBPP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DKJBGINLBPP*>*(*)())((::PBYTE)hIl2Cpp + DKJBGINLBPP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJBGINLBPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DKJBGINLBPP* Clone()
		{
			return ((::DKJBGINLBPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJBGINLBPP_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJBGINLBPP_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DKJBGINLBPP_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DKJBGINLBPP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DKJBGINLBPP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DKJBGINLBPP*))((::PBYTE)hIl2Cpp + DKJBGINLBPP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJBGINLBPP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJBGINLBPP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DKJBGINLBPP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJBGINLBPP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DKJBGINLBPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKJBGINLBPP*))((::PBYTE)hIl2Cpp + DKJBGINLBPP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DKJBGINLBPP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
