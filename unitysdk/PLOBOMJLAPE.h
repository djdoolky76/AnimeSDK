#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLOBOMJLAPE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PLOBOMJLAPE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF76CC0)
#define PLOBOMJLAPE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF76EE0)
#define PLOBOMJLAPE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF76910)
#define PLOBOMJLAPE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF768E0)
#define PLOBOMJLAPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF768D0)
#define PLOBOMJLAPE_DGFHKHPFDJP_OFFSET UNITYSDK_OFFSET(0x1DF76960)
#define PLOBOMJLAPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF76A40)
#define PLOBOMJLAPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF76970)
#define PLOBOMJLAPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF76BB0)
#define PLOBOMJLAPE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF76890)
#define PLOBOMJLAPE_KLGCEOIKOAM_OFFSET UNITYSDK_OFFSET(0x1DF76950)
#define PLOBOMJLAPE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF76D80)
#define PLOBOMJLAPE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF76D50)
#define PLOBOMJLAPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF768C0)
#define PLOBOMJLAPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF76BE0)
#define PLOBOMJLAPE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF76C40)

inline static constexpr unsigned int PLOBOMJLAPE_TypeDefinitionIndex = 26366;

	class PLOBOMJLAPE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ENBHGNLCJGJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PLOBOMJLAPE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PLOBOMJLAPE*>**)UnitySDK::FromName("", "PLOBOMJLAPE")->GetStaticField(0x3DB40);
		}

		// static const ::System::Object GEDMKNBINHK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOBOMJLAPE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PLOBOMJLAPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLOBOMJLAPE*))((::PBYTE)hIl2Cpp + PLOBOMJLAPE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLOBOMJLAPE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PLOBOMJLAPE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PLOBOMJLAPE*>*(*)())((::PBYTE)hIl2Cpp + PLOBOMJLAPE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOBOMJLAPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PLOBOMJLAPE* Clone()
		{
			return ((::PLOBOMJLAPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOBOMJLAPE_CLONE_OFFSET))(this);
		}

		::System::UInt32 KLGCEOIKOAM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOBOMJLAPE_KLGCEOIKOAM_OFFSET))(this);
		}

		::System::Void DGFHKHPFDJP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLOBOMJLAPE_DGFHKHPFDJP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PLOBOMJLAPE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PLOBOMJLAPE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PLOBOMJLAPE*))((::PBYTE)hIl2Cpp + PLOBOMJLAPE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOBOMJLAPE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOBOMJLAPE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PLOBOMJLAPE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOBOMJLAPE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PLOBOMJLAPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLOBOMJLAPE*))((::PBYTE)hIl2Cpp + PLOBOMJLAPE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PLOBOMJLAPE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
