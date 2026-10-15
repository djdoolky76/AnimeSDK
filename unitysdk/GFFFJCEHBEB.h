#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFFFJCEHBEB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GFFFJCEHBEB_BMMFJCHEBEP_OFFSET UNITYSDK_OFFSET(0x1E43AB90)
#define GFFFJCEHBEB_BNIGIFEHBAN_OFFSET UNITYSDK_OFFSET(0x1E43AB80)
#define GFFFJCEHBEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E43AEC0)
#define GFFFJCEHBEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E43B190)
#define GFFFJCEHBEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E43AB10)
#define GFFFJCEHBEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E43AAE0)
#define GFFFJCEHBEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E43AAD0)
#define GFFFJCEHBEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E43AC80)
#define GFFFJCEHBEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E43ABA0)
#define GFFFJCEHBEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E43AD50)
#define GFFFJCEHBEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E43AA90)
#define GFFFJCEHBEB_KBGGDCBJOKK_OFFSET UNITYSDK_OFFSET(0x1E43AB60)
#define GFFFJCEHBEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E43B010)
#define GFFFJCEHBEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E43AFD0)
#define GFFFJCEHBEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E43AAC0)
#define GFFFJCEHBEB_POLGFPNLGEC_OFFSET UNITYSDK_OFFSET(0x1E43AB70)
#define GFFFJCEHBEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E43AD80)
#define GFFFJCEHBEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E43ADE0)

inline static constexpr unsigned int GFFFJCEHBEB_TypeDefinitionIndex = 34234;

	class GFFFJCEHBEB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JIDPMKCLNJJ; // 0x18
		::System::UInt32 DGEBDPGMDGE; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::GFFFJCEHBEB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GFFFJCEHBEB*>**)UnitySDK::FromName("", "GFFFJCEHBEB")->GetStaticField(0x12F60);
		}

		// static const ::System::Object MFJMMNKOIPN; // 0x0
		// static const ::System::Object AMKANJMGAED; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFFJCEHBEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GFFFJCEHBEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFFFJCEHBEB*))((::PBYTE)hIl2Cpp + GFFFJCEHBEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFFFJCEHBEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GFFFJCEHBEB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GFFFJCEHBEB*>*(*)())((::PBYTE)hIl2Cpp + GFFFJCEHBEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFFJCEHBEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFFFJCEHBEB* Clone()
		{
			return ((::GFFFJCEHBEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFFJCEHBEB_CLONE_OFFSET))(this);
		}

		::System::UInt32 KBGGDCBJOKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFFJCEHBEB_KBGGDCBJOKK_OFFSET))(this);
		}

		::System::Void POLGFPNLGEC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFFFJCEHBEB_POLGFPNLGEC_OFFSET))(this, a1);
		}

		::System::UInt32 BNIGIFEHBAN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFFJCEHBEB_BNIGIFEHBAN_OFFSET))(this);
		}

		::System::Void BMMFJCHEBEP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFFFJCEHBEB_BMMFJCHEBEP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFFFJCEHBEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GFFFJCEHBEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFFFJCEHBEB*))((::PBYTE)hIl2Cpp + GFFFJCEHBEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFFJCEHBEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFFJCEHBEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GFFFJCEHBEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFFJCEHBEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GFFFJCEHBEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFFFJCEHBEB*))((::PBYTE)hIl2Cpp + GFFFJCEHBEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GFFFJCEHBEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
