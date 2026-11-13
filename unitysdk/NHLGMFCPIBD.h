#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLJPFFILKIO;
class NHLGMFCPIBD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NHLGMFCPIBD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20412EF0)
#define NHLGMFCPIBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x20413160)
#define NHLGMFCPIBD_CLONE_OFFSET UNITYSDK_OFFSET(0x204128B0)
#define NHLGMFCPIBD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20412830)
#define NHLGMFCPIBD_CTOR_OFFSET UNITYSDK_OFFSET(0x20412820)
#define NHLGMFCPIBD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20412AD0)
#define NHLGMFCPIBD_EQUALS_OFFSET UNITYSDK_OFFSET(0x20412960)
#define NHLGMFCPIBD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20412DA0)
#define NHLGMFCPIBD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x204127E0)
#define NHLGMFCPIBD_KGLIPAJLDMC_OFFSET UNITYSDK_OFFSET(0x20412940)
#define NHLGMFCPIBD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20412FE0)
#define NHLGMFCPIBD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20412F50)
#define NHLGMFCPIBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20412810)
#define NHLGMFCPIBD_PIGCJIAOIKA_OFFSET UNITYSDK_OFFSET(0x20412950)
#define NHLGMFCPIBD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20412E00)
#define NHLGMFCPIBD_WRITETO_OFFSET UNITYSDK_OFFSET(0x20412E60)

inline static constexpr unsigned int NHLGMFCPIBD_TypeDefinitionIndex = 31439;

	class NHLGMFCPIBD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JLJPFFILKIO* KMJKJFJEDBF; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NHLGMFCPIBD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NHLGMFCPIBD*>**)UnitySDK::FromName("", "NHLGMFCPIBD")->GetStaticField(0x61080);
		}

		// static const ::System::Object EEDDEINLCCA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NHLGMFCPIBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHLGMFCPIBD*))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHLGMFCPIBD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NHLGMFCPIBD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NHLGMFCPIBD*>*(*)())((::PBYTE)hIl2Cpp + NHLGMFCPIBD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NHLGMFCPIBD* Clone()
		{
			return ((::NHLGMFCPIBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_CLONE_OFFSET))(this);
		}

		::JLJPFFILKIO* KGLIPAJLDMC()
		{
			return ((::JLJPFFILKIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_KGLIPAJLDMC_OFFSET))(this);
		}

		::System::Void PIGCJIAOIKA(::JLJPFFILKIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLJPFFILKIO*))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_PIGCJIAOIKA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NHLGMFCPIBD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NHLGMFCPIBD*))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NHLGMFCPIBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHLGMFCPIBD*))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
