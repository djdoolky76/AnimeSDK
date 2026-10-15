#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGFLGGDMAGD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LGFLGGDMAGD_CACHJJIOOND_OFFSET UNITYSDK_OFFSET(0x1E923A10)
#define LGFLGGDMAGD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E923D80)
#define LGFLGGDMAGD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E924050)
#define LGFLGGDMAGD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E923980)
#define LGFLGGDMAGD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E923950)
#define LGFLGGDMAGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E923940)
#define LGFLGGDMAGD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E923B40)
#define LGFLGGDMAGD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E923A30)
#define LGFLGGDMAGD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E923C10)
#define LGFLGGDMAGD_IDFPOJEAHHL_OFFSET UNITYSDK_OFFSET(0x1E923A00)
#define LGFLGGDMAGD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9238D0)
#define LGFLGGDMAGD_JKKFGIDGBCO_OFFSET UNITYSDK_OFFSET(0x1E9239F0)
#define LGFLGGDMAGD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E923ED0)
#define LGFLGGDMAGD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E923E90)
#define LGFLGGDMAGD_OIJPAMFCEEH_OFFSET UNITYSDK_OFFSET(0x1E923A20)
#define LGFLGGDMAGD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E923930)
#define LGFLGGDMAGD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E923C40)
#define LGFLGGDMAGD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E923CA0)

inline static constexpr unsigned int LGFLGGDMAGD_TypeDefinitionIndex = 28013;

	class LGFLGGDMAGD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ANKJAOCMODM; // 0x18
		::System::UInt32 FBNENCHBKPP; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::LGFLGGDMAGD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LGFLGGDMAGD*>**)UnitySDK::FromName("", "LGFLGGDMAGD")->GetStaticField(0x34FB0);
		}

		// static const ::System::Object ADJKBKAGGHO; // 0x0
		// static const ::System::Object HEJCIDFCEPM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFLGGDMAGD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LGFLGGDMAGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGFLGGDMAGD*))((::PBYTE)hIl2Cpp + LGFLGGDMAGD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGFLGGDMAGD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LGFLGGDMAGD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LGFLGGDMAGD*>*(*)())((::PBYTE)hIl2Cpp + LGFLGGDMAGD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFLGGDMAGD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LGFLGGDMAGD* Clone()
		{
			return ((::LGFLGGDMAGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFLGGDMAGD_CLONE_OFFSET))(this);
		}

		::System::UInt32 JKKFGIDGBCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFLGGDMAGD_JKKFGIDGBCO_OFFSET))(this);
		}

		::System::Void IDFPOJEAHHL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGFLGGDMAGD_IDFPOJEAHHL_OFFSET))(this, a1);
		}

		::System::UInt32 CACHJJIOOND()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFLGGDMAGD_CACHJJIOOND_OFFSET))(this);
		}

		::System::Void OIJPAMFCEEH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGFLGGDMAGD_OIJPAMFCEEH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGFLGGDMAGD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LGFLGGDMAGD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGFLGGDMAGD*))((::PBYTE)hIl2Cpp + LGFLGGDMAGD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFLGGDMAGD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFLGGDMAGD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LGFLGGDMAGD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFLGGDMAGD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LGFLGGDMAGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGFLGGDMAGD*))((::PBYTE)hIl2Cpp + LGFLGGDMAGD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LGFLGGDMAGD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
