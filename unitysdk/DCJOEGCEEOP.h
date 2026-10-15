#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLOHGFCFEEL.h"
#include "unitysdk/System/Object.h"
class DCJOEGCEEOP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DCJOEGCEEOP_ALPGCOPKPPH_OFFSET UNITYSDK_OFFSET(0x1E173290)
#define DCJOEGCEEOP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E173610)
#define DCJOEGCEEOP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E173870)
#define DCJOEGCEEOP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E173240)
#define DCJOEGCEEOP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E173210)
#define DCJOEGCEEOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E173200)
#define DCJOEGCEEOP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E173370)
#define DCJOEGCEEOP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1732A0)
#define DCJOEGCEEOP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1734E0)
#define DCJOEGCEEOP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1731C0)
#define DCJOEGCEEOP_MEDGJHAAICC_OFFSET UNITYSDK_OFFSET(0x1E173280)
#define DCJOEGCEEOP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E173710)
#define DCJOEGCEEOP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1736E0)
#define DCJOEGCEEOP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1731F0)
#define DCJOEGCEEOP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E173510)
#define DCJOEGCEEOP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E173570)

inline static constexpr unsigned int DCJOEGCEEOP_TypeDefinitionIndex = 32114;

	class DCJOEGCEEOP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::BLOHGFCFEEL HNPFKBGJCEG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DCJOEGCEEOP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DCJOEGCEEOP*>**)UnitySDK::FromName("", "DCJOEGCEEOP")->GetStaticField(0x2C770);
		}

		// static const ::System::Object EADJJHLLGCA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJOEGCEEOP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DCJOEGCEEOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCJOEGCEEOP*))((::PBYTE)hIl2Cpp + DCJOEGCEEOP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCJOEGCEEOP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DCJOEGCEEOP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DCJOEGCEEOP*>*(*)())((::PBYTE)hIl2Cpp + DCJOEGCEEOP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJOEGCEEOP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DCJOEGCEEOP* Clone()
		{
			return ((::DCJOEGCEEOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJOEGCEEOP_CLONE_OFFSET))(this);
		}

		::BLOHGFCFEEL MEDGJHAAICC()
		{
			return ((::BLOHGFCFEEL(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJOEGCEEOP_MEDGJHAAICC_OFFSET))(this);
		}

		::System::Void ALPGCOPKPPH(::BLOHGFCFEEL a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLOHGFCFEEL))((::PBYTE)hIl2Cpp + DCJOEGCEEOP_ALPGCOPKPPH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCJOEGCEEOP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DCJOEGCEEOP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCJOEGCEEOP*))((::PBYTE)hIl2Cpp + DCJOEGCEEOP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJOEGCEEOP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJOEGCEEOP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DCJOEGCEEOP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJOEGCEEOP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DCJOEGCEEOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCJOEGCEEOP*))((::PBYTE)hIl2Cpp + DCJOEGCEEOP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DCJOEGCEEOP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
