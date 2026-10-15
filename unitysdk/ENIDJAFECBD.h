#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENIDJAFECBD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ENIDJAFECBD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2C2AA0)
#define ENIDJAFECBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C2D00)
#define ENIDJAFECBD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2C2650)
#define ENIDJAFECBD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2C2610)
#define ENIDJAFECBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C2600)
#define ENIDJAFECBD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2C2820)
#define ENIDJAFECBD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2C2710)
#define ENIDJAFECBD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2C2900)
#define ENIDJAFECBD_IFMBKPGIIOJ_OFFSET UNITYSDK_OFFSET(0x1E2C26E0)
#define ENIDJAFECBD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2C2590)
#define ENIDJAFECBD_KHBGONMDCPI_OFFSET UNITYSDK_OFFSET(0x1E2C26F0)
#define ENIDJAFECBD_KHEHIJFJMIH_OFFSET UNITYSDK_OFFSET(0x1E2C26D0)
#define ENIDJAFECBD_LNCKJIDOBPA_OFFSET UNITYSDK_OFFSET(0x1E2C2700)
#define ENIDJAFECBD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2C2B80)
#define ENIDJAFECBD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2C2B40)
#define ENIDJAFECBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2C25F0)
#define ENIDJAFECBD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2C2930)
#define ENIDJAFECBD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2C2990)

inline static constexpr unsigned int ENIDJAFECBD_TypeDefinitionIndex = 29839;

	class ENIDJAFECBD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean DHAHNCEMJJE; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 OEIJJLNNBHF; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::ENIDJAFECBD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ENIDJAFECBD*>**)UnitySDK::FromName("", "ENIDJAFECBD")->GetStaticField(0x44F00);
		}

		// static const ::System::Object BLNDLLNEPII; // 0x0
		// static const ::System::Object HOLLCCLAJAB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIDJAFECBD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ENIDJAFECBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENIDJAFECBD*))((::PBYTE)hIl2Cpp + ENIDJAFECBD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENIDJAFECBD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ENIDJAFECBD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ENIDJAFECBD*>*(*)())((::PBYTE)hIl2Cpp + ENIDJAFECBD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIDJAFECBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ENIDJAFECBD* Clone()
		{
			return ((::ENIDJAFECBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIDJAFECBD_CLONE_OFFSET))(this);
		}

		::System::UInt32 KHEHIJFJMIH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIDJAFECBD_KHEHIJFJMIH_OFFSET))(this);
		}

		::System::Void IFMBKPGIIOJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ENIDJAFECBD_IFMBKPGIIOJ_OFFSET))(this, a1);
		}

		::System::Boolean KHBGONMDCPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIDJAFECBD_KHBGONMDCPI_OFFSET))(this);
		}

		::System::Void LNCKJIDOBPA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENIDJAFECBD_LNCKJIDOBPA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENIDJAFECBD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ENIDJAFECBD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENIDJAFECBD*))((::PBYTE)hIl2Cpp + ENIDJAFECBD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIDJAFECBD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIDJAFECBD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ENIDJAFECBD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIDJAFECBD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ENIDJAFECBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENIDJAFECBD*))((::PBYTE)hIl2Cpp + ENIDJAFECBD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ENIDJAFECBD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
