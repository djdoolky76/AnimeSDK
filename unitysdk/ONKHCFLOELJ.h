#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONKHCFLOELJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ONKHCFLOELJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEC9680)
#define ONKHCFLOELJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC9840)
#define ONKHCFLOELJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEC9210)
#define ONKHCFLOELJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEC91E0)
#define ONKHCFLOELJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC91D0)
#define ONKHCFLOELJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEC93B0)
#define ONKHCFLOELJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEC92A0)
#define ONKHCFLOELJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEC9530)
#define ONKHCFLOELJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEC9160)
#define ONKHCFLOELJ_KGGMPNLKAKM_OFFSET UNITYSDK_OFFSET(0x1DEC9290)
#define ONKHCFLOELJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEC96E0)
#define ONKHCFLOELJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEC96B0)
#define ONKHCFLOELJ_MFKJNNANIJD_OFFSET UNITYSDK_OFFSET(0x1DEC9280)
#define ONKHCFLOELJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEC91C0)
#define ONKHCFLOELJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEC9560)
#define ONKHCFLOELJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEC95C0)

inline static constexpr unsigned int ONKHCFLOELJ_TypeDefinitionIndex = 32858;

	class ONKHCFLOELJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean FABBLNCOAPP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ONKHCFLOELJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ONKHCFLOELJ*>**)UnitySDK::FromName("", "ONKHCFLOELJ")->GetStaticField(0x2CD90);
		}

		// static const ::System::Object PFHJPBNALLA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKHCFLOELJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ONKHCFLOELJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONKHCFLOELJ*))((::PBYTE)hIl2Cpp + ONKHCFLOELJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONKHCFLOELJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ONKHCFLOELJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ONKHCFLOELJ*>*(*)())((::PBYTE)hIl2Cpp + ONKHCFLOELJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKHCFLOELJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ONKHCFLOELJ* Clone()
		{
			return ((::ONKHCFLOELJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKHCFLOELJ_CLONE_OFFSET))(this);
		}

		::System::Boolean MFKJNNANIJD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKHCFLOELJ_MFKJNNANIJD_OFFSET))(this);
		}

		::System::Void KGGMPNLKAKM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ONKHCFLOELJ_KGGMPNLKAKM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONKHCFLOELJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ONKHCFLOELJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ONKHCFLOELJ*))((::PBYTE)hIl2Cpp + ONKHCFLOELJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKHCFLOELJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKHCFLOELJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ONKHCFLOELJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKHCFLOELJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ONKHCFLOELJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONKHCFLOELJ*))((::PBYTE)hIl2Cpp + ONKHCFLOELJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ONKHCFLOELJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
