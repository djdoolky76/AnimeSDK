#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPGIGEEAGHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HPGIGEEAGHL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5C7710)
#define HPGIGEEAGHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C7930)
#define HPGIGEEAGHL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5C7360)
#define HPGIGEEAGHL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5C7330)
#define HPGIGEEAGHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C7320)
#define HPGIGEEAGHL_DKDLBLLMPNE_OFFSET UNITYSDK_OFFSET(0x1E5C73B0)
#define HPGIGEEAGHL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5C7490)
#define HPGIGEEAGHL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5C73C0)
#define HPGIGEEAGHL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5C7600)
#define HPGIGEEAGHL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5C72E0)
#define HPGIGEEAGHL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5C77D0)
#define HPGIGEEAGHL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5C77A0)
#define HPGIGEEAGHL_MNLDMBGAJIF_OFFSET UNITYSDK_OFFSET(0x1E5C73A0)
#define HPGIGEEAGHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5C7310)
#define HPGIGEEAGHL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5C7630)
#define HPGIGEEAGHL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5C7690)

inline static constexpr unsigned int HPGIGEEAGHL_TypeDefinitionIndex = 34960;

	class HPGIGEEAGHL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DFKHBNCHKBI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HPGIGEEAGHL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HPGIGEEAGHL*>**)UnitySDK::FromName("", "HPGIGEEAGHL")->GetStaticField(0x3E750);
		}

		// static const ::System::Object JLAAHBJNEML; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGIGEEAGHL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HPGIGEEAGHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPGIGEEAGHL*))((::PBYTE)hIl2Cpp + HPGIGEEAGHL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPGIGEEAGHL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HPGIGEEAGHL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HPGIGEEAGHL*>*(*)())((::PBYTE)hIl2Cpp + HPGIGEEAGHL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGIGEEAGHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HPGIGEEAGHL* Clone()
		{
			return ((::HPGIGEEAGHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGIGEEAGHL_CLONE_OFFSET))(this);
		}

		::System::UInt32 MNLDMBGAJIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGIGEEAGHL_MNLDMBGAJIF_OFFSET))(this);
		}

		::System::Void DKDLBLLMPNE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HPGIGEEAGHL_DKDLBLLMPNE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HPGIGEEAGHL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HPGIGEEAGHL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPGIGEEAGHL*))((::PBYTE)hIl2Cpp + HPGIGEEAGHL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGIGEEAGHL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGIGEEAGHL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HPGIGEEAGHL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGIGEEAGHL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HPGIGEEAGHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPGIGEEAGHL*))((::PBYTE)hIl2Cpp + HPGIGEEAGHL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HPGIGEEAGHL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
