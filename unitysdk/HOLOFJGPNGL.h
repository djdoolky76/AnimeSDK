#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HOLOFJGPNGL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HOLOFJGPNGL_AOFBBABEJCB_OFFSET UNITYSDK_OFFSET(0x1E5C0920)
#define HOLOFJGPNGL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5C0C70)
#define HOLOFJGPNGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C0F40)
#define HOLOFJGPNGL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5C08C0)
#define HOLOFJGPNGL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5C0890)
#define HOLOFJGPNGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C0880)
#define HOLOFJGPNGL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5C0A30)
#define HOLOFJGPNGL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5C0950)
#define HOLOFJGPNGL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5C0B00)
#define HOLOFJGPNGL_IPLBECBNJLK_OFFSET UNITYSDK_OFFSET(0x1E5C0930)
#define HOLOFJGPNGL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5C0840)
#define HOLOFJGPNGL_LMLKAECMDNH_OFFSET UNITYSDK_OFFSET(0x1E5C0940)
#define HOLOFJGPNGL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5C0DC0)
#define HOLOFJGPNGL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5C0D80)
#define HOLOFJGPNGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5C0870)
#define HOLOFJGPNGL_PPBHLLMLNLH_OFFSET UNITYSDK_OFFSET(0x1E5C0910)
#define HOLOFJGPNGL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5C0B30)
#define HOLOFJGPNGL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5C0B90)

inline static constexpr unsigned int HOLOFJGPNGL_TypeDefinitionIndex = 34121;

	class HOLOFJGPNGL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DKLCPIAINIK; // 0x18
		::System::UInt32 BHFEEGICLMK; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::HOLOFJGPNGL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HOLOFJGPNGL*>**)UnitySDK::FromName("", "HOLOFJGPNGL")->GetStaticField(0x13730);
		}

		// static const ::System::Object JFFKLDOPFOJ; // 0x0
		// static const ::System::Object OEMNIDFIJEO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLOFJGPNGL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HOLOFJGPNGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOLOFJGPNGL*))((::PBYTE)hIl2Cpp + HOLOFJGPNGL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOLOFJGPNGL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HOLOFJGPNGL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HOLOFJGPNGL*>*(*)())((::PBYTE)hIl2Cpp + HOLOFJGPNGL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLOFJGPNGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HOLOFJGPNGL* Clone()
		{
			return ((::HOLOFJGPNGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLOFJGPNGL_CLONE_OFFSET))(this);
		}

		::System::UInt32 PPBHLLMLNLH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLOFJGPNGL_PPBHLLMLNLH_OFFSET))(this);
		}

		::System::Void AOFBBABEJCB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HOLOFJGPNGL_AOFBBABEJCB_OFFSET))(this, a1);
		}

		::System::UInt32 IPLBECBNJLK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLOFJGPNGL_IPLBECBNJLK_OFFSET))(this);
		}

		::System::Void LMLKAECMDNH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HOLOFJGPNGL_LMLKAECMDNH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOLOFJGPNGL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HOLOFJGPNGL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HOLOFJGPNGL*))((::PBYTE)hIl2Cpp + HOLOFJGPNGL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLOFJGPNGL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLOFJGPNGL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HOLOFJGPNGL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLOFJGPNGL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HOLOFJGPNGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOLOFJGPNGL*))((::PBYTE)hIl2Cpp + HOLOFJGPNGL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HOLOFJGPNGL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
