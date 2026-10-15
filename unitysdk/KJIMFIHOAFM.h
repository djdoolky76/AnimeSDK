#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJIMFIHOAFM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KJIMFIHOAFM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E86E0F0)
#define KJIMFIHOAFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E86E310)
#define KJIMFIHOAFM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E86DD40)
#define KJIMFIHOAFM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E86DD10)
#define KJIMFIHOAFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E86DD00)
#define KJIMFIHOAFM_EBNIHELLMGJ_OFFSET UNITYSDK_OFFSET(0x1E86DD90)
#define KJIMFIHOAFM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E86DE70)
#define KJIMFIHOAFM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E86DDA0)
#define KJIMFIHOAFM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E86DFE0)
#define KJIMFIHOAFM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E86DCC0)
#define KJIMFIHOAFM_LMDEHJOALHN_OFFSET UNITYSDK_OFFSET(0x1E86DD80)
#define KJIMFIHOAFM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E86E1B0)
#define KJIMFIHOAFM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E86E180)
#define KJIMFIHOAFM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E86DCF0)
#define KJIMFIHOAFM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E86E010)
#define KJIMFIHOAFM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E86E070)

inline static constexpr unsigned int KJIMFIHOAFM_TypeDefinitionIndex = 31133;

	class KJIMFIHOAFM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KGHDHDBLGAO; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KJIMFIHOAFM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KJIMFIHOAFM*>**)UnitySDK::FromName("", "KJIMFIHOAFM")->GetStaticField(0x1CAA0);
		}

		// static const ::System::Object JLOGLBHDPMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIMFIHOAFM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KJIMFIHOAFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJIMFIHOAFM*))((::PBYTE)hIl2Cpp + KJIMFIHOAFM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJIMFIHOAFM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KJIMFIHOAFM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KJIMFIHOAFM*>*(*)())((::PBYTE)hIl2Cpp + KJIMFIHOAFM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIMFIHOAFM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KJIMFIHOAFM* Clone()
		{
			return ((::KJIMFIHOAFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIMFIHOAFM_CLONE_OFFSET))(this);
		}

		::System::UInt32 LMDEHJOALHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIMFIHOAFM_LMDEHJOALHN_OFFSET))(this);
		}

		::System::Void EBNIHELLMGJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJIMFIHOAFM_EBNIHELLMGJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJIMFIHOAFM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KJIMFIHOAFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJIMFIHOAFM*))((::PBYTE)hIl2Cpp + KJIMFIHOAFM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIMFIHOAFM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIMFIHOAFM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KJIMFIHOAFM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIMFIHOAFM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KJIMFIHOAFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJIMFIHOAFM*))((::PBYTE)hIl2Cpp + KJIMFIHOAFM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KJIMFIHOAFM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
