#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LECIGPPCMAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LECIGPPCMAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC438D0)
#define LECIGPPCMAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC43BB0)
#define LECIGPPCMAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC43440)
#define LECIGPPCMAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC433B0)
#define LECIGPPCMAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC43360)
#define LECIGPPCMAB_EILPOOIECLM_OFFSET UNITYSDK_OFFSET(0x1FC43470)
#define LECIGPPCMAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC435A0)
#define LECIGPPCMAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC434A0)
#define LECIGPPCMAB_FCCBPNELKAN_OFFSET UNITYSDK_OFFSET(0x1FC43480)
#define LECIGPPCMAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC43690)
#define LECIGPPCMAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC43320)
#define LECIGPPCMAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC43A00)
#define LECIGPPCMAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC439B0)
#define LECIGPPCMAB_MKPCJENPBJN_OFFSET UNITYSDK_OFFSET(0x1FC43490)
#define LECIGPPCMAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC43350)
#define LECIGPPCMAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC43790)
#define LECIGPPCMAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC437F0)

inline static constexpr unsigned int LECIGPPCMAB_TypeDefinitionIndex = 33901;

	class LECIGPPCMAB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PLLAEOCEDML; // 0x18
		::System::UInt32 NIAOPCJHKCG; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EHFDAHIEHIN()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LECIGPPCMAB")->GetStaticField(0x2C3C0);
		}

		static ::Google::Protobuf::MessageParser_1<::LECIGPPCMAB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LECIGPPCMAB*>**)UnitySDK::FromName("", "LECIGPPCMAB")->GetStaticField(0x2C3C8);
		}

		// static const ::System::Object FDDDLMBHDMC; // 0x0
		// static const ::System::Object AJEKOJPPGEK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIGPPCMAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LECIGPPCMAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LECIGPPCMAB*))((::PBYTE)hIl2Cpp + LECIGPPCMAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LECIGPPCMAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LECIGPPCMAB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LECIGPPCMAB*>*(*)())((::PBYTE)hIl2Cpp + LECIGPPCMAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIGPPCMAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LECIGPPCMAB* Clone()
		{
			return ((::LECIGPPCMAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIGPPCMAB_CLONE_OFFSET))(this);
		}

		::System::UInt32 EILPOOIECLM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIGPPCMAB_EILPOOIECLM_OFFSET))(this);
		}

		::System::Void FCCBPNELKAN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LECIGPPCMAB_FCCBPNELKAN_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MKPCJENPBJN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIGPPCMAB_MKPCJENPBJN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LECIGPPCMAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LECIGPPCMAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LECIGPPCMAB*))((::PBYTE)hIl2Cpp + LECIGPPCMAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIGPPCMAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIGPPCMAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LECIGPPCMAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIGPPCMAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LECIGPPCMAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LECIGPPCMAB*))((::PBYTE)hIl2Cpp + LECIGPPCMAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LECIGPPCMAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
