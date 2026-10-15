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

#define INJCCMKJICJ_BBIDGLKIHDE_OFFSET UNITYSDK_OFFSET(0x1E696950)
#define INJCCMKJICJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E696CA0)
#define INJCCMKJICJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E696F70)
#define INJCCMKJICJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6968F0)
#define INJCCMKJICJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6968C0)
#define INJCCMKJICJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6968B0)
#define INJCCMKJICJ_EMPCONOHHGH_OFFSET UNITYSDK_OFFSET(0x1E696940)
#define INJCCMKJICJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E696A60)
#define INJCCMKJICJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E696980)
#define INJCCMKJICJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E696B30)
#define INJCCMKJICJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E696870)
#define INJCCMKJICJ_KINOJNIIJCB_OFFSET UNITYSDK_OFFSET(0x1E696970)
#define INJCCMKJICJ_KMKGEILFLBE_OFFSET UNITYSDK_OFFSET(0x1E696960)
#define INJCCMKJICJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E696DF0)
#define INJCCMKJICJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E696DB0)
#define INJCCMKJICJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6968A0)
#define INJCCMKJICJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E696B60)
#define INJCCMKJICJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E696BC0)

inline static constexpr unsigned int INJCCMKJICJ_TypeDefinitionIndex = 27573;

	class INJCCMKJICJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MIODIFDMAGM; // 0x18
		::System::UInt32 MNHOLKOFOHJ; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::INJCCMKJICJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::INJCCMKJICJ*>**)UnitySDK::FromName("", "INJCCMKJICJ")->GetStaticField(0x53BD0);
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
