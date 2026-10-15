#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELLOBCEGLAA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ELLOBCEGLAA_ABNMKPIJPBN_OFFSET UNITYSDK_OFFSET(0x1E2D6490)
#define ELLOBCEGLAA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2D6830)
#define ELLOBCEGLAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D6A50)
#define ELLOBCEGLAA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2D6420)
#define ELLOBCEGLAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2D63F0)
#define ELLOBCEGLAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D63E0)
#define ELLOBCEGLAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2D65B0)
#define ELLOBCEGLAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2D64B0)
#define ELLOBCEGLAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2D6720)
#define ELLOBCEGLAA_GIIOKMPBLHH_OFFSET UNITYSDK_OFFSET(0x1E2D64A0)
#define ELLOBCEGLAA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2D6370)
#define ELLOBCEGLAA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2D68F0)
#define ELLOBCEGLAA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2D68C0)
#define ELLOBCEGLAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2D63D0)
#define ELLOBCEGLAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2D6750)
#define ELLOBCEGLAA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2D67B0)

inline static constexpr unsigned int ELLOBCEGLAA_TypeDefinitionIndex = 25205;

	class ELLOBCEGLAA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AOJPINAJACM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ELLOBCEGLAA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ELLOBCEGLAA*>**)UnitySDK::FromName("", "ELLOBCEGLAA")->GetStaticField(0x516B0);
		}

		// static const ::System::Object FPGNKBBJINF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLOBCEGLAA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ELLOBCEGLAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELLOBCEGLAA*))((::PBYTE)hIl2Cpp + ELLOBCEGLAA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELLOBCEGLAA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ELLOBCEGLAA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ELLOBCEGLAA*>*(*)())((::PBYTE)hIl2Cpp + ELLOBCEGLAA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLOBCEGLAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ELLOBCEGLAA* Clone()
		{
			return ((::ELLOBCEGLAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLOBCEGLAA_CLONE_OFFSET))(this);
		}

		::System::UInt32 ABNMKPIJPBN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLOBCEGLAA_ABNMKPIJPBN_OFFSET))(this);
		}

		::System::Void GIIOKMPBLHH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ELLOBCEGLAA_GIIOKMPBLHH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ELLOBCEGLAA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ELLOBCEGLAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ELLOBCEGLAA*))((::PBYTE)hIl2Cpp + ELLOBCEGLAA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLOBCEGLAA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLOBCEGLAA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ELLOBCEGLAA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLOBCEGLAA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ELLOBCEGLAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELLOBCEGLAA*))((::PBYTE)hIl2Cpp + ELLOBCEGLAA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ELLOBCEGLAA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
