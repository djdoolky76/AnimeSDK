#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDKFOIFIAFD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GDKFOIFIAFD_BIOOHPIHADO_OFFSET UNITYSDK_OFFSET(0x1E44CE50)
#define GDKFOIFIAFD_BMDGCNADLKC_OFFSET UNITYSDK_OFFSET(0x1E44CE40)
#define GDKFOIFIAFD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E44D190)
#define GDKFOIFIAFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E44D460)
#define GDKFOIFIAFD_CLCNPIJOIBL_OFFSET UNITYSDK_OFFSET(0x1E44CE60)
#define GDKFOIFIAFD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E44CDE0)
#define GDKFOIFIAFD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E44CDB0)
#define GDKFOIFIAFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E44CDA0)
#define GDKFOIFIAFD_EEBLEFFIHBP_OFFSET UNITYSDK_OFFSET(0x1E44CE30)
#define GDKFOIFIAFD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E44CF50)
#define GDKFOIFIAFD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E44CE70)
#define GDKFOIFIAFD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E44D020)
#define GDKFOIFIAFD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E44CD60)
#define GDKFOIFIAFD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E44D2E0)
#define GDKFOIFIAFD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E44D2A0)
#define GDKFOIFIAFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E44CD90)
#define GDKFOIFIAFD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E44D050)
#define GDKFOIFIAFD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E44D0B0)

inline static constexpr unsigned int GDKFOIFIAFD_TypeDefinitionIndex = 32416;

	class GDKFOIFIAFD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MGPCOLIAECE; // 0x18
		::System::UInt32 PLKGEBACJMA; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GDKFOIFIAFD")->GetStaticField(0x11130);
		}

		// static const ::System::Object OEAKKPCOOJF; // 0x0
		// static const ::System::Object BOGFCKKNGJB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKFOIFIAFD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GDKFOIFIAFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDKFOIFIAFD*))((::PBYTE)hIl2Cpp + GDKFOIFIAFD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDKFOIFIAFD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GDKFOIFIAFD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKFOIFIAFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GDKFOIFIAFD* Clone()
		{
			return ((::GDKFOIFIAFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKFOIFIAFD_CLONE_OFFSET))(this);
		}

		::System::UInt32 EEBLEFFIHBP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKFOIFIAFD_EEBLEFFIHBP_OFFSET))(this);
		}

		::System::Void BMDGCNADLKC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDKFOIFIAFD_BMDGCNADLKC_OFFSET))(this, a1);
		}

		::System::UInt32 BIOOHPIHADO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKFOIFIAFD_BIOOHPIHADO_OFFSET))(this);
		}

		::System::Void CLCNPIJOIBL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDKFOIFIAFD_CLCNPIJOIBL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GDKFOIFIAFD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GDKFOIFIAFD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GDKFOIFIAFD*))((::PBYTE)hIl2Cpp + GDKFOIFIAFD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKFOIFIAFD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKFOIFIAFD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GDKFOIFIAFD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKFOIFIAFD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GDKFOIFIAFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDKFOIFIAFD*))((::PBYTE)hIl2Cpp + GDKFOIFIAFD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GDKFOIFIAFD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
