#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGLBOFKGGLL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DGLBOFKGGLL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E183720)
#define DGLBOFKGGLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E183940)
#define DGLBOFKGGLL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E183310)
#define DGLBOFKGGLL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1832E0)
#define DGLBOFKGGLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1832D0)
#define DGLBOFKGGLL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1834A0)
#define DGLBOFKGGLL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1833A0)
#define DGLBOFKGGLL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E183610)
#define DGLBOFKGGLL_GJAHHJPLKII_OFFSET UNITYSDK_OFFSET(0x1E183390)
#define DGLBOFKGGLL_GLFKMHKKEHM_OFFSET UNITYSDK_OFFSET(0x1E183380)
#define DGLBOFKGGLL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E183260)
#define DGLBOFKGGLL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1837E0)
#define DGLBOFKGGLL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1837B0)
#define DGLBOFKGGLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1832C0)
#define DGLBOFKGGLL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E183640)
#define DGLBOFKGGLL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1836A0)

inline static constexpr unsigned int DGLBOFKGGLL_TypeDefinitionIndex = 31276;

	class DGLBOFKGGLL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GDPGCPKEFKH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DGLBOFKGGLL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DGLBOFKGGLL*>**)UnitySDK::FromName("", "DGLBOFKGGLL")->GetStaticField(0x30450);
		}

		// static const ::System::Object JIPLGBKNGHJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLBOFKGGLL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DGLBOFKGGLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGLBOFKGGLL*))((::PBYTE)hIl2Cpp + DGLBOFKGGLL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGLBOFKGGLL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DGLBOFKGGLL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DGLBOFKGGLL*>*(*)())((::PBYTE)hIl2Cpp + DGLBOFKGGLL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLBOFKGGLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DGLBOFKGGLL* Clone()
		{
			return ((::DGLBOFKGGLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLBOFKGGLL_CLONE_OFFSET))(this);
		}

		::System::UInt32 GLFKMHKKEHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLBOFKGGLL_GLFKMHKKEHM_OFFSET))(this);
		}

		::System::Void GJAHHJPLKII(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DGLBOFKGGLL_GJAHHJPLKII_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DGLBOFKGGLL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DGLBOFKGGLL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DGLBOFKGGLL*))((::PBYTE)hIl2Cpp + DGLBOFKGGLL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLBOFKGGLL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLBOFKGGLL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DGLBOFKGGLL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLBOFKGGLL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DGLBOFKGGLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGLBOFKGGLL*))((::PBYTE)hIl2Cpp + DGLBOFKGGLL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DGLBOFKGGLL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
