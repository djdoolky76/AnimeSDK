#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLGKHDMKGID;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CLGKHDMKGID_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0CB3C0)
#define CLGKHDMKGID_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0CB5E0)
#define CLGKHDMKGID_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0CB010)
#define CLGKHDMKGID_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0CAFE0)
#define CLGKHDMKGID_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CAFD0)
#define CLGKHDMKGID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0CB140)
#define CLGKHDMKGID_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0CB070)
#define CLGKHDMKGID_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1E0CB050)
#define CLGKHDMKGID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0CB2B0)
#define CLGKHDMKGID_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0CAF90)
#define CLGKHDMKGID_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0CB480)
#define CLGKHDMKGID_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0CB450)
#define CLGKHDMKGID_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1E0CB060)
#define CLGKHDMKGID_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0CAFC0)
#define CLGKHDMKGID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0CB2E0)
#define CLGKHDMKGID_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0CB340)

inline static constexpr unsigned int CLGKHDMKGID_TypeDefinitionIndex = 27232;

	class CLGKHDMKGID : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OPPNMFMNMGC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CLGKHDMKGID*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CLGKHDMKGID*>**)UnitySDK::FromName("", "CLGKHDMKGID")->GetStaticField(0x1B3E0);
		}

		// static const ::System::Object BOIGPPCIPFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGKHDMKGID_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CLGKHDMKGID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLGKHDMKGID*))((::PBYTE)hIl2Cpp + CLGKHDMKGID_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLGKHDMKGID_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CLGKHDMKGID*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CLGKHDMKGID*>*(*)())((::PBYTE)hIl2Cpp + CLGKHDMKGID_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGKHDMKGID_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CLGKHDMKGID* Clone()
		{
			return ((::CLGKHDMKGID*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGKHDMKGID_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGKHDMKGID_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLGKHDMKGID_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLGKHDMKGID_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CLGKHDMKGID* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CLGKHDMKGID*))((::PBYTE)hIl2Cpp + CLGKHDMKGID_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGKHDMKGID_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGKHDMKGID_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLGKHDMKGID_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGKHDMKGID_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CLGKHDMKGID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLGKHDMKGID*))((::PBYTE)hIl2Cpp + CLGKHDMKGID_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLGKHDMKGID_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
