#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPNNACGJFHC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CPNNACGJFHC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x204F01A0)
#define CPNNACGJFHC_CCTOR_OFFSET UNITYSDK_OFFSET(0x204F03C0)
#define CPNNACGJFHC_CLONE_OFFSET UNITYSDK_OFFSET(0x204EFD90)
#define CPNNACGJFHC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x204EFD60)
#define CPNNACGJFHC_CTOR_OFFSET UNITYSDK_OFFSET(0x204EFD50)
#define CPNNACGJFHC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x204EFF20)
#define CPNNACGJFHC_EQUALS_OFFSET UNITYSDK_OFFSET(0x204EFE20)
#define CPNNACGJFHC_GBKHGABBEBI_OFFSET UNITYSDK_OFFSET(0x204EFE00)
#define CPNNACGJFHC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x204F0090)
#define CPNNACGJFHC_HDIDNKADOJH_OFFSET UNITYSDK_OFFSET(0x204EFE10)
#define CPNNACGJFHC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x204EFCE0)
#define CPNNACGJFHC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x204F0260)
#define CPNNACGJFHC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x204F0230)
#define CPNNACGJFHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x204EFD40)
#define CPNNACGJFHC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x204F00C0)
#define CPNNACGJFHC_WRITETO_OFFSET UNITYSDK_OFFSET(0x204F0120)

inline static constexpr unsigned int CPNNACGJFHC_TypeDefinitionIndex = 26006;

	class CPNNACGJFHC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LAIFPNMKJDD; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CPNNACGJFHC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CPNNACGJFHC*>**)UnitySDK::FromName("", "CPNNACGJFHC")->GetStaticField(0x19EA0);
		}

		// static const ::System::Object KFBHJAAGIKF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNNACGJFHC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CPNNACGJFHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPNNACGJFHC*))((::PBYTE)hIl2Cpp + CPNNACGJFHC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPNNACGJFHC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CPNNACGJFHC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CPNNACGJFHC*>*(*)())((::PBYTE)hIl2Cpp + CPNNACGJFHC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNNACGJFHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CPNNACGJFHC* Clone()
		{
			return ((::CPNNACGJFHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNNACGJFHC_CLONE_OFFSET))(this);
		}

		::System::UInt32 GBKHGABBEBI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNNACGJFHC_GBKHGABBEBI_OFFSET))(this);
		}

		::System::Void HDIDNKADOJH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPNNACGJFHC_HDIDNKADOJH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPNNACGJFHC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CPNNACGJFHC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPNNACGJFHC*))((::PBYTE)hIl2Cpp + CPNNACGJFHC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNNACGJFHC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNNACGJFHC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CPNNACGJFHC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNNACGJFHC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CPNNACGJFHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPNNACGJFHC*))((::PBYTE)hIl2Cpp + CPNNACGJFHC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CPNNACGJFHC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
