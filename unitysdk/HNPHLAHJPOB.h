#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNPHLAHJPOB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HNPHLAHJPOB_BNFHBKBDHJL_OFFSET UNITYSDK_OFFSET(0x1E5E3EE0)
#define HNPHLAHJPOB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5E4270)
#define HNPHLAHJPOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5E4540)
#define HNPHLAHJPOB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5E3E70)
#define HNPHLAHJPOB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5E3E40)
#define HNPHLAHJPOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E3E30)
#define HNPHLAHJPOB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5E4030)
#define HNPHLAHJPOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5E3F20)
#define HNPHLAHJPOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5E4100)
#define HNPHLAHJPOB_GNAMNDMKGMP_OFFSET UNITYSDK_OFFSET(0x1E5E3F00)
#define HNPHLAHJPOB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5E3DC0)
#define HNPHLAHJPOB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5E43C0)
#define HNPHLAHJPOB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5E4380)
#define HNPHLAHJPOB_ODEDBIABFIB_OFFSET UNITYSDK_OFFSET(0x1E5E3EF0)
#define HNPHLAHJPOB_OGCGGDEEKIJ_OFFSET UNITYSDK_OFFSET(0x1E5E3F10)
#define HNPHLAHJPOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5E3E20)
#define HNPHLAHJPOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5E4130)
#define HNPHLAHJPOB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5E4190)

inline static constexpr unsigned int HNPHLAHJPOB_TypeDefinitionIndex = 29474;

	class HNPHLAHJPOB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AAKAHKOGOOJ; // 0x18
		::System::UInt32 BJJEIECJFJH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::HNPHLAHJPOB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HNPHLAHJPOB*>**)UnitySDK::FromName("", "HNPHLAHJPOB")->GetStaticField(0x4C9A0);
		}

		// static const ::System::Object ALNJDDJLKNJ; // 0x0
		// static const ::System::Object KJOFBAAHDCO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNPHLAHJPOB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HNPHLAHJPOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNPHLAHJPOB*))((::PBYTE)hIl2Cpp + HNPHLAHJPOB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNPHLAHJPOB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HNPHLAHJPOB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HNPHLAHJPOB*>*(*)())((::PBYTE)hIl2Cpp + HNPHLAHJPOB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNPHLAHJPOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HNPHLAHJPOB* Clone()
		{
			return ((::HNPHLAHJPOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNPHLAHJPOB_CLONE_OFFSET))(this);
		}

		::System::UInt32 BNFHBKBDHJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNPHLAHJPOB_BNFHBKBDHJL_OFFSET))(this);
		}

		::System::Void ODEDBIABFIB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HNPHLAHJPOB_ODEDBIABFIB_OFFSET))(this, a1);
		}

		::System::UInt32 GNAMNDMKGMP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNPHLAHJPOB_GNAMNDMKGMP_OFFSET))(this);
		}

		::System::Void OGCGGDEEKIJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HNPHLAHJPOB_OGCGGDEEKIJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNPHLAHJPOB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HNPHLAHJPOB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HNPHLAHJPOB*))((::PBYTE)hIl2Cpp + HNPHLAHJPOB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNPHLAHJPOB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNPHLAHJPOB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HNPHLAHJPOB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNPHLAHJPOB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HNPHLAHJPOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNPHLAHJPOB*))((::PBYTE)hIl2Cpp + HNPHLAHJPOB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HNPHLAHJPOB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
