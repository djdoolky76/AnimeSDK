#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INJCCMKJICJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define INJCCMKJICJ_BBIDGLKIHDE_OFFSET UNITYSDK_OFFSET(0x1E6C3F90)
#define INJCCMKJICJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6C42E0)
#define INJCCMKJICJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C45B0)
#define INJCCMKJICJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6C3F30)
#define INJCCMKJICJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6C3F00)
#define INJCCMKJICJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C3EF0)
#define INJCCMKJICJ_EMPCONOHHGH_OFFSET UNITYSDK_OFFSET(0x1E6C3F80)
#define INJCCMKJICJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6C40A0)
#define INJCCMKJICJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6C3FC0)
#define INJCCMKJICJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6C4170)
#define INJCCMKJICJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6C3EB0)
#define INJCCMKJICJ_KINOJNIIJCB_OFFSET UNITYSDK_OFFSET(0x1E6C3FB0)
#define INJCCMKJICJ_KMKGEILFLBE_OFFSET UNITYSDK_OFFSET(0x1E6C3FA0)
#define INJCCMKJICJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6C4430)
#define INJCCMKJICJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6C43F0)
#define INJCCMKJICJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6C3EE0)
#define INJCCMKJICJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6C41A0)
#define INJCCMKJICJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6C4200)

inline static constexpr unsigned int INJCCMKJICJ_TypeDefinitionIndex = 27573;

	class INJCCMKJICJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MIODIFDMAGM; // 0x18
		::System::UInt32 MNHOLKOFOHJ; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::INJCCMKJICJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::INJCCMKJICJ*>**)UnitySDK::FromName("", "INJCCMKJICJ")->GetStaticField(0x586C0);
		}

		// static const ::System::Object DGKENOLAFMK; // 0x0
		// static const ::System::Object DLFMINGDOIF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INJCCMKJICJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::INJCCMKJICJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INJCCMKJICJ*))((::PBYTE)hIl2Cpp + INJCCMKJICJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INJCCMKJICJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::INJCCMKJICJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::INJCCMKJICJ*>*(*)())((::PBYTE)hIl2Cpp + INJCCMKJICJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + INJCCMKJICJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::INJCCMKJICJ* Clone()
		{
			return ((::INJCCMKJICJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + INJCCMKJICJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 EMPCONOHHGH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INJCCMKJICJ_EMPCONOHHGH_OFFSET))(this);
		}

		::System::Void BBIDGLKIHDE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INJCCMKJICJ_BBIDGLKIHDE_OFFSET))(this, a1);
		}

		::System::UInt32 KMKGEILFLBE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INJCCMKJICJ_KMKGEILFLBE_OFFSET))(this);
		}

		::System::Void KINOJNIIJCB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INJCCMKJICJ_KINOJNIIJCB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INJCCMKJICJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::INJCCMKJICJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INJCCMKJICJ*))((::PBYTE)hIl2Cpp + INJCCMKJICJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INJCCMKJICJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INJCCMKJICJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + INJCCMKJICJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INJCCMKJICJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::INJCCMKJICJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INJCCMKJICJ*))((::PBYTE)hIl2Cpp + INJCCMKJICJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + INJCCMKJICJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
