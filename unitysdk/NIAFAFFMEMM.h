#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIAFAFFMEMM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NIAFAFFMEMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB247E0)
#define NIAFAFFMEMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB24A00)
#define NIAFAFFMEMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB24430)
#define NIAFAFFMEMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB24400)
#define NIAFAFFMEMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB243F0)
#define NIAFAFFMEMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB24560)
#define NIAFAFFMEMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB24490)
#define NIAFAFFMEMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB246D0)
#define NIAFAFFMEMM_IPLBECBNJLK_OFFSET UNITYSDK_OFFSET(0x1EB24470)
#define NIAFAFFMEMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB243B0)
#define NIAFAFFMEMM_LMLKAECMDNH_OFFSET UNITYSDK_OFFSET(0x1EB24480)
#define NIAFAFFMEMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB248A0)
#define NIAFAFFMEMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB24870)
#define NIAFAFFMEMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB243E0)
#define NIAFAFFMEMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB24700)
#define NIAFAFFMEMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB24760)

inline static constexpr unsigned int NIAFAFFMEMM_TypeDefinitionIndex = 31721;

	class NIAFAFFMEMM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BHFEEGICLMK; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NIAFAFFMEMM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NIAFAFFMEMM*>**)UnitySDK::FromName("", "NIAFAFFMEMM")->GetStaticField(0x60970);
		}

		// static const ::System::Object OEMNIDFIJEO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIAFAFFMEMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NIAFAFFMEMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIAFAFFMEMM*))((::PBYTE)hIl2Cpp + NIAFAFFMEMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIAFAFFMEMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NIAFAFFMEMM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NIAFAFFMEMM*>*(*)())((::PBYTE)hIl2Cpp + NIAFAFFMEMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIAFAFFMEMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NIAFAFFMEMM* Clone()
		{
			return ((::NIAFAFFMEMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIAFAFFMEMM_CLONE_OFFSET))(this);
		}

		::System::UInt32 IPLBECBNJLK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIAFAFFMEMM_IPLBECBNJLK_OFFSET))(this);
		}

		::System::Void LMLKAECMDNH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NIAFAFFMEMM_LMLKAECMDNH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NIAFAFFMEMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NIAFAFFMEMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NIAFAFFMEMM*))((::PBYTE)hIl2Cpp + NIAFAFFMEMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIAFAFFMEMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIAFAFFMEMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NIAFAFFMEMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIAFAFFMEMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NIAFAFFMEMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIAFAFFMEMM*))((::PBYTE)hIl2Cpp + NIAFAFFMEMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NIAFAFFMEMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
