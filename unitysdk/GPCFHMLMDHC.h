#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPCFHMLMDHC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GPCFHMLMDHC_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E4C7AB0)
#define GPCFHMLMDHC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4C7E50)
#define GPCFHMLMDHC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C8070)
#define GPCFHMLMDHC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4C7A40)
#define GPCFHMLMDHC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4C7A10)
#define GPCFHMLMDHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C7A00)
#define GPCFHMLMDHC_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E4C7AC0)
#define GPCFHMLMDHC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4C7BD0)
#define GPCFHMLMDHC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4C7AD0)
#define GPCFHMLMDHC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4C7D40)
#define GPCFHMLMDHC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4C7990)
#define GPCFHMLMDHC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4C7F10)
#define GPCFHMLMDHC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4C7EE0)
#define GPCFHMLMDHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4C79F0)
#define GPCFHMLMDHC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4C7D70)
#define GPCFHMLMDHC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4C7DD0)

inline static constexpr unsigned int GPCFHMLMDHC_TypeDefinitionIndex = 29582;

	class GPCFHMLMDHC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NPFBAFODCBI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GPCFHMLMDHC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GPCFHMLMDHC*>**)UnitySDK::FromName("", "GPCFHMLMDHC")->GetStaticField(0x236A0);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCFHMLMDHC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GPCFHMLMDHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPCFHMLMDHC*))((::PBYTE)hIl2Cpp + GPCFHMLMDHC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPCFHMLMDHC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GPCFHMLMDHC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GPCFHMLMDHC*>*(*)())((::PBYTE)hIl2Cpp + GPCFHMLMDHC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCFHMLMDHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GPCFHMLMDHC* Clone()
		{
			return ((::GPCFHMLMDHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCFHMLMDHC_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCFHMLMDHC_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPCFHMLMDHC_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GPCFHMLMDHC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GPCFHMLMDHC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GPCFHMLMDHC*))((::PBYTE)hIl2Cpp + GPCFHMLMDHC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCFHMLMDHC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCFHMLMDHC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GPCFHMLMDHC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCFHMLMDHC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GPCFHMLMDHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPCFHMLMDHC*))((::PBYTE)hIl2Cpp + GPCFHMLMDHC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GPCFHMLMDHC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
