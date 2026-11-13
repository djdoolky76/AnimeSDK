#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHKOAOLFBFI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PHKOAOLFBFI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2025FD80)
#define PHKOAOLFBFI_CCTOR_OFFSET UNITYSDK_OFFSET(0x2025FE20)
#define PHKOAOLFBFI_CLONE_OFFSET UNITYSDK_OFFSET(0x2025FA70)
#define PHKOAOLFBFI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2025FA40)
#define PHKOAOLFBFI_CTOR_OFFSET UNITYSDK_OFFSET(0x2025FA30)
#define PHKOAOLFBFI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2025FB80)
#define PHKOAOLFBFI_EQUALS_OFFSET UNITYSDK_OFFSET(0x2025FAB0)
#define PHKOAOLFBFI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2025FCE0)
#define PHKOAOLFBFI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2025F9F0)
#define PHKOAOLFBFI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2025FDD0)
#define PHKOAOLFBFI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2025FDA0)
#define PHKOAOLFBFI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2025FA20)
#define PHKOAOLFBFI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2025FD10)
#define PHKOAOLFBFI_WRITETO_OFFSET UNITYSDK_OFFSET(0x2025FD70)

inline static constexpr unsigned int PHKOAOLFBFI_TypeDefinitionIndex = 32142;

	class PHKOAOLFBFI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::PHKOAOLFBFI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PHKOAOLFBFI*>**)UnitySDK::FromName("", "PHKOAOLFBFI")->GetStaticField(0x3ABA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKOAOLFBFI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PHKOAOLFBFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHKOAOLFBFI*))((::PBYTE)hIl2Cpp + PHKOAOLFBFI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHKOAOLFBFI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PHKOAOLFBFI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PHKOAOLFBFI*>*(*)())((::PBYTE)hIl2Cpp + PHKOAOLFBFI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKOAOLFBFI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PHKOAOLFBFI* Clone()
		{
			return ((::PHKOAOLFBFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKOAOLFBFI_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PHKOAOLFBFI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PHKOAOLFBFI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PHKOAOLFBFI*))((::PBYTE)hIl2Cpp + PHKOAOLFBFI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKOAOLFBFI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKOAOLFBFI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PHKOAOLFBFI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKOAOLFBFI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PHKOAOLFBFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHKOAOLFBFI*))((::PBYTE)hIl2Cpp + PHKOAOLFBFI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PHKOAOLFBFI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
