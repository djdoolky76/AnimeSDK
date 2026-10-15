#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFKJKLJJLKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AFKJKLJJLKN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E11A540)
#define AFKJKLJJLKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E11A760)
#define AFKJKLJJLKN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E11A130)
#define AFKJKLJJLKN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E11A100)
#define AFKJKLJJLKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E11A0F0)
#define AFKJKLJJLKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E11A2C0)
#define AFKJKLJJLKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E11A1C0)
#define AFKJKLJJLKN_FMIAOKDHPAC_OFFSET UNITYSDK_OFFSET(0x1E11A1A0)
#define AFKJKLJJLKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E11A430)
#define AFKJKLJJLKN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E11A080)
#define AFKJKLJJLKN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E11A600)
#define AFKJKLJJLKN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E11A5D0)
#define AFKJKLJJLKN_NAFGGFLEPEA_OFFSET UNITYSDK_OFFSET(0x1E11A1B0)
#define AFKJKLJJLKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E11A0E0)
#define AFKJKLJJLKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E11A460)
#define AFKJKLJJLKN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E11A4C0)

inline static constexpr unsigned int AFKJKLJJLKN_TypeDefinitionIndex = 28302;

	class AFKJKLJJLKN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NFJFOGMMFNC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AFKJKLJJLKN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AFKJKLJJLKN*>**)UnitySDK::FromName("", "AFKJKLJJLKN")->GetStaticField(0x2E9B0);
		}

		// static const ::System::Object NLFCPACABCI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKJKLJJLKN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AFKJKLJJLKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFKJKLJJLKN*))((::PBYTE)hIl2Cpp + AFKJKLJJLKN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFKJKLJJLKN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AFKJKLJJLKN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AFKJKLJJLKN*>*(*)())((::PBYTE)hIl2Cpp + AFKJKLJJLKN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKJKLJJLKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AFKJKLJJLKN* Clone()
		{
			return ((::AFKJKLJJLKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKJKLJJLKN_CLONE_OFFSET))(this);
		}

		::System::UInt32 FMIAOKDHPAC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKJKLJJLKN_FMIAOKDHPAC_OFFSET))(this);
		}

		::System::Void NAFGGFLEPEA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFKJKLJJLKN_NAFGGFLEPEA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFKJKLJJLKN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AFKJKLJJLKN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AFKJKLJJLKN*))((::PBYTE)hIl2Cpp + AFKJKLJJLKN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKJKLJJLKN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKJKLJJLKN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AFKJKLJJLKN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKJKLJJLKN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AFKJKLJJLKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFKJKLJJLKN*))((::PBYTE)hIl2Cpp + AFKJKLJJLKN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AFKJKLJJLKN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
