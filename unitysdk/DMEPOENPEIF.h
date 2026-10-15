#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMEPOENPEIF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DMEPOENPEIF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1EB1D0)
#define DMEPOENPEIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1EB3F0)
#define DMEPOENPEIF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1EAE20)
#define DMEPOENPEIF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1EADF0)
#define DMEPOENPEIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1EADE0)
#define DMEPOENPEIF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1EAF50)
#define DMEPOENPEIF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1EAE80)
#define DMEPOENPEIF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1EB0C0)
#define DMEPOENPEIF_JGIBLBEMEOA_OFFSET UNITYSDK_OFFSET(0x1E1EAE70)
#define DMEPOENPEIF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1EADA0)
#define DMEPOENPEIF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1EB290)
#define DMEPOENPEIF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1EB260)
#define DMEPOENPEIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1EADD0)
#define DMEPOENPEIF_PHJEIEMLKMJ_OFFSET UNITYSDK_OFFSET(0x1E1EAE60)
#define DMEPOENPEIF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1EB0F0)
#define DMEPOENPEIF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1EB150)

	class DMEPOENPEIF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LLAAKEBDCKJ; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DMEPOENPEIF")->GetStaticField(0x3ED40);
		}

		// static const ::System::Object EBEJMDEOJAI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEPOENPEIF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DMEPOENPEIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMEPOENPEIF*))((::PBYTE)hIl2Cpp + DMEPOENPEIF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMEPOENPEIF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DMEPOENPEIF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEPOENPEIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DMEPOENPEIF* Clone()
		{
			return ((::DMEPOENPEIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEPOENPEIF_CLONE_OFFSET))(this);
		}

		::System::UInt32 PHJEIEMLKMJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEPOENPEIF_PHJEIEMLKMJ_OFFSET))(this);
		}

		::System::Void JGIBLBEMEOA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMEPOENPEIF_JGIBLBEMEOA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DMEPOENPEIF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DMEPOENPEIF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DMEPOENPEIF*))((::PBYTE)hIl2Cpp + DMEPOENPEIF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEPOENPEIF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEPOENPEIF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DMEPOENPEIF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEPOENPEIF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DMEPOENPEIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMEPOENPEIF*))((::PBYTE)hIl2Cpp + DMEPOENPEIF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DMEPOENPEIF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
