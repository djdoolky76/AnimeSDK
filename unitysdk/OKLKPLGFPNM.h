#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKLKPLGFPNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OKLKPLGFPNM_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1DE71600)
#define OKLKPLGFPNM_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1DE71610)
#define OKLKPLGFPNM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE71970)
#define OKLKPLGFPNM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE71B90)
#define OKLKPLGFPNM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE715C0)
#define OKLKPLGFPNM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE71590)
#define OKLKPLGFPNM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE71580)
#define OKLKPLGFPNM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE716F0)
#define OKLKPLGFPNM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE71620)
#define OKLKPLGFPNM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE71860)
#define OKLKPLGFPNM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE71540)
#define OKLKPLGFPNM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE71A30)
#define OKLKPLGFPNM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE71A00)
#define OKLKPLGFPNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE71570)
#define OKLKPLGFPNM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE71890)
#define OKLKPLGFPNM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE718F0)

inline static constexpr unsigned int OKLKPLGFPNM_TypeDefinitionIndex = 32601;

	class OKLKPLGFPNM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OKLKPLGFPNM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OKLKPLGFPNM*>**)UnitySDK::FromName("", "OKLKPLGFPNM")->GetStaticField(0x20200);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLKPLGFPNM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OKLKPLGFPNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKLKPLGFPNM*))((::PBYTE)hIl2Cpp + OKLKPLGFPNM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKLKPLGFPNM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OKLKPLGFPNM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OKLKPLGFPNM*>*(*)())((::PBYTE)hIl2Cpp + OKLKPLGFPNM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLKPLGFPNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OKLKPLGFPNM* Clone()
		{
			return ((::OKLKPLGFPNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLKPLGFPNM_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLKPLGFPNM_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKLKPLGFPNM_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKLKPLGFPNM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OKLKPLGFPNM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OKLKPLGFPNM*))((::PBYTE)hIl2Cpp + OKLKPLGFPNM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLKPLGFPNM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLKPLGFPNM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OKLKPLGFPNM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLKPLGFPNM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OKLKPLGFPNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKLKPLGFPNM*))((::PBYTE)hIl2Cpp + OKLKPLGFPNM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OKLKPLGFPNM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
