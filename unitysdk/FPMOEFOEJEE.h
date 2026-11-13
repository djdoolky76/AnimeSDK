#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPMOEFOEJEE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FPMOEFOEJEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB99A70)
#define FPMOEFOEJEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB99C90)
#define FPMOEFOEJEE_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB996C0)
#define FPMOEFOEJEE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB99690)
#define FPMOEFOEJEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB99680)
#define FPMOEFOEJEE_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1FB99700)
#define FPMOEFOEJEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB997F0)
#define FPMOEFOEJEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB99720)
#define FPMOEFOEJEE_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1FB99710)
#define FPMOEFOEJEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB99960)
#define FPMOEFOEJEE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB99640)
#define FPMOEFOEJEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB99B30)
#define FPMOEFOEJEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB99B00)
#define FPMOEFOEJEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB99670)
#define FPMOEFOEJEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB99990)
#define FPMOEFOEJEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB999F0)

inline static constexpr unsigned int FPMOEFOEJEE_TypeDefinitionIndex = 33087;

	class FPMOEFOEJEE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GEMFJILOPLL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FPMOEFOEJEE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FPMOEFOEJEE*>**)UnitySDK::FromName("", "FPMOEFOEJEE")->GetStaticField(0x530E0);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMOEFOEJEE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FPMOEFOEJEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPMOEFOEJEE*))((::PBYTE)hIl2Cpp + FPMOEFOEJEE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPMOEFOEJEE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FPMOEFOEJEE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FPMOEFOEJEE*>*(*)())((::PBYTE)hIl2Cpp + FPMOEFOEJEE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMOEFOEJEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FPMOEFOEJEE* Clone()
		{
			return ((::FPMOEFOEJEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMOEFOEJEE_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMOEFOEJEE_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPMOEFOEJEE_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FPMOEFOEJEE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FPMOEFOEJEE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPMOEFOEJEE*))((::PBYTE)hIl2Cpp + FPMOEFOEJEE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMOEFOEJEE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMOEFOEJEE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FPMOEFOEJEE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMOEFOEJEE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FPMOEFOEJEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPMOEFOEJEE*))((::PBYTE)hIl2Cpp + FPMOEFOEJEE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FPMOEFOEJEE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
