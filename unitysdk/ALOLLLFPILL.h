#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALOLLLFPILL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALOLLLFPILL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4E7DC0)
#define ALOLLLFPILL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4E7F80)
#define ALOLLLFPILL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4E79A0)
#define ALOLLLFPILL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4E7970)
#define ALOLLLFPILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E7960)
#define ALOLLLFPILL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4E7AF0)
#define ALOLLLFPILL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4E7A10)
#define ALOLLLFPILL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4E7C70)
#define ALOLLLFPILL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4E7920)
#define ALOLLLFPILL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4E7E20)
#define ALOLLLFPILL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4E7DF0)
#define ALOLLLFPILL_MFFNOBPDPIP_OFFSET UNITYSDK_OFFSET(0x1E4E79F0)
#define ALOLLLFPILL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4E7950)
#define ALOLLLFPILL_PJLAFENJPNA_OFFSET UNITYSDK_OFFSET(0x1E4E7A00)
#define ALOLLLFPILL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4E7CA0)
#define ALOLLLFPILL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4E7D00)

inline static constexpr unsigned int ALOLLLFPILL_TypeDefinitionIndex = 32196;

	class ALOLLLFPILL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean OHCDIALNEKO; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ALOLLLFPILL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ALOLLLFPILL*>**)UnitySDK::FromName("", "ALOLLLFPILL")->GetStaticField(0x43490);
		}

		// static const ::System::Object JLKJNOPDKDE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOLLLFPILL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALOLLLFPILL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALOLLLFPILL*))((::PBYTE)hIl2Cpp + ALOLLLFPILL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALOLLLFPILL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ALOLLLFPILL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ALOLLLFPILL*>*(*)())((::PBYTE)hIl2Cpp + ALOLLLFPILL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOLLLFPILL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALOLLLFPILL* Clone()
		{
			return ((::ALOLLLFPILL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOLLLFPILL_CLONE_OFFSET))(this);
		}

		::System::Boolean MFFNOBPDPIP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOLLLFPILL_MFFNOBPDPIP_OFFSET))(this);
		}

		::System::Void PJLAFENJPNA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ALOLLLFPILL_PJLAFENJPNA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALOLLLFPILL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALOLLLFPILL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALOLLLFPILL*))((::PBYTE)hIl2Cpp + ALOLLLFPILL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOLLLFPILL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOLLLFPILL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALOLLLFPILL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOLLLFPILL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALOLLLFPILL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALOLLLFPILL*))((::PBYTE)hIl2Cpp + ALOLLLFPILL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALOLLLFPILL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
