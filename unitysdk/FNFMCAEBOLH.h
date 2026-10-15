#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNFMCAEBOLH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FNFMCAEBOLH_AEACNOLJFLF_OFFSET UNITYSDK_OFFSET(0x1E3EF590)
#define FNFMCAEBOLH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3EF8F0)
#define FNFMCAEBOLH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3EFBC0)
#define FNFMCAEBOLH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3EF4F0)
#define FNFMCAEBOLH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3EF4C0)
#define FNFMCAEBOLH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3EF4B0)
#define FNFMCAEBOLH_EPGHHDPDFFE_OFFSET UNITYSDK_OFFSET(0x1E3EF560)
#define FNFMCAEBOLH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3EF6B0)
#define FNFMCAEBOLH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3EF5A0)
#define FNFMCAEBOLH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3EF780)
#define FNFMCAEBOLH_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x1E3EF580)
#define FNFMCAEBOLH_HOFCCLFHKHP_OFFSET UNITYSDK_OFFSET(0x1E3EF570)
#define FNFMCAEBOLH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3EF440)
#define FNFMCAEBOLH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3EFA40)
#define FNFMCAEBOLH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3EFA00)
#define FNFMCAEBOLH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3EF4A0)
#define FNFMCAEBOLH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3EF7B0)
#define FNFMCAEBOLH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3EF810)

inline static constexpr unsigned int FNFMCAEBOLH_TypeDefinitionIndex = 25311;

	class FNFMCAEBOLH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BFOBOOGAHKB; // 0x18
		::System::UInt32 DLCNIEFINAG; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FNFMCAEBOLH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FNFMCAEBOLH*>**)UnitySDK::FromName("", "FNFMCAEBOLH")->GetStaticField(0x653B0);
		}

		// static const ::System::Object FFKCHFAJCDL; // 0x0
		// static const ::System::Object HOHDLIKKMBH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFMCAEBOLH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FNFMCAEBOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNFMCAEBOLH*))((::PBYTE)hIl2Cpp + FNFMCAEBOLH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNFMCAEBOLH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FNFMCAEBOLH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FNFMCAEBOLH*>*(*)())((::PBYTE)hIl2Cpp + FNFMCAEBOLH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFMCAEBOLH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FNFMCAEBOLH* Clone()
		{
			return ((::FNFMCAEBOLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFMCAEBOLH_CLONE_OFFSET))(this);
		}

		::System::UInt32 EPGHHDPDFFE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFMCAEBOLH_EPGHHDPDFFE_OFFSET))(this);
		}

		::System::Void HOFCCLFHKHP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNFMCAEBOLH_HOFCCLFHKHP_OFFSET))(this, a1);
		}

		::System::UInt32 HIDEJDELEEB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFMCAEBOLH_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Void AEACNOLJFLF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNFMCAEBOLH_AEACNOLJFLF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FNFMCAEBOLH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FNFMCAEBOLH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNFMCAEBOLH*))((::PBYTE)hIl2Cpp + FNFMCAEBOLH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFMCAEBOLH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFMCAEBOLH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FNFMCAEBOLH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFMCAEBOLH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FNFMCAEBOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNFMCAEBOLH*))((::PBYTE)hIl2Cpp + FNFMCAEBOLH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FNFMCAEBOLH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
