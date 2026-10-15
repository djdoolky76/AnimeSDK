#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OAIPMLDNDFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OAIPMLDNDFN_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1EBA6F00)
#define OAIPMLDNDFN_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1EBA6F10)
#define OAIPMLDNDFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EBA7260)
#define OAIPMLDNDFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBA7530)
#define OAIPMLDNDFN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EBA6EB0)
#define OAIPMLDNDFN_CLPCNNEINGD_OFFSET UNITYSDK_OFFSET(0x1EBA6F30)
#define OAIPMLDNDFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBA6E80)
#define OAIPMLDNDFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBA6E70)
#define OAIPMLDNDFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EBA7020)
#define OAIPMLDNDFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EBA6F40)
#define OAIPMLDNDFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EBA70F0)
#define OAIPMLDNDFN_IHBPLMDKAOH_OFFSET UNITYSDK_OFFSET(0x1EBA6F20)
#define OAIPMLDNDFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EBA6E30)
#define OAIPMLDNDFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EBA73B0)
#define OAIPMLDNDFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EBA7370)
#define OAIPMLDNDFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EBA6E60)
#define OAIPMLDNDFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBA7120)
#define OAIPMLDNDFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EBA7180)

inline static constexpr unsigned int OAIPMLDNDFN_TypeDefinitionIndex = 26328;

	class OAIPMLDNDFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MFMHPDFMGIN; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::OAIPMLDNDFN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OAIPMLDNDFN*>**)UnitySDK::FromName("", "OAIPMLDNDFN")->GetStaticField(0xF8A0);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object PJHHJKCAPFG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIPMLDNDFN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OAIPMLDNDFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAIPMLDNDFN*))((::PBYTE)hIl2Cpp + OAIPMLDNDFN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAIPMLDNDFN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OAIPMLDNDFN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OAIPMLDNDFN*>*(*)())((::PBYTE)hIl2Cpp + OAIPMLDNDFN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIPMLDNDFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OAIPMLDNDFN* Clone()
		{
			return ((::OAIPMLDNDFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIPMLDNDFN_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIPMLDNDFN_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OAIPMLDNDFN_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::UInt32 IHBPLMDKAOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIPMLDNDFN_IHBPLMDKAOH_OFFSET))(this);
		}

		::System::Void CLPCNNEINGD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OAIPMLDNDFN_CLPCNNEINGD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OAIPMLDNDFN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OAIPMLDNDFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OAIPMLDNDFN*))((::PBYTE)hIl2Cpp + OAIPMLDNDFN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIPMLDNDFN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIPMLDNDFN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OAIPMLDNDFN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIPMLDNDFN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OAIPMLDNDFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAIPMLDNDFN*))((::PBYTE)hIl2Cpp + OAIPMLDNDFN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OAIPMLDNDFN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
