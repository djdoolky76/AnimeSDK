#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPGMIPJINKJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BPGMIPJINKJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E019150)
#define BPGMIPJINKJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E019370)
#define BPGMIPJINKJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E018DA0)
#define BPGMIPJINKJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E018D70)
#define BPGMIPJINKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E018D60)
#define BPGMIPJINKJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E018ED0)
#define BPGMIPJINKJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E018E00)
#define BPGMIPJINKJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E019040)
#define BPGMIPJINKJ_IKKLCDDNEBD_OFFSET UNITYSDK_OFFSET(0x1E018DF0)
#define BPGMIPJINKJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E018D20)
#define BPGMIPJINKJ_LHMPAIBIHFI_OFFSET UNITYSDK_OFFSET(0x1E018DE0)
#define BPGMIPJINKJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E019210)
#define BPGMIPJINKJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0191E0)
#define BPGMIPJINKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E018D50)
#define BPGMIPJINKJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E019070)
#define BPGMIPJINKJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0190D0)

inline static constexpr unsigned int BPGMIPJINKJ_TypeDefinitionIndex = 31584;

	class BPGMIPJINKJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BPDPDDPHKDP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BPGMIPJINKJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BPGMIPJINKJ*>**)UnitySDK::FromName("", "BPGMIPJINKJ")->GetStaticField(0x5EFC0);
		}

		// static const ::System::Object ABDLFEHJGGM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGMIPJINKJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BPGMIPJINKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPGMIPJINKJ*))((::PBYTE)hIl2Cpp + BPGMIPJINKJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPGMIPJINKJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BPGMIPJINKJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BPGMIPJINKJ*>*(*)())((::PBYTE)hIl2Cpp + BPGMIPJINKJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGMIPJINKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BPGMIPJINKJ* Clone()
		{
			return ((::BPGMIPJINKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGMIPJINKJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 LHMPAIBIHFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGMIPJINKJ_LHMPAIBIHFI_OFFSET))(this);
		}

		::System::Void IKKLCDDNEBD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPGMIPJINKJ_IKKLCDDNEBD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPGMIPJINKJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BPGMIPJINKJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPGMIPJINKJ*))((::PBYTE)hIl2Cpp + BPGMIPJINKJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGMIPJINKJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGMIPJINKJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BPGMIPJINKJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGMIPJINKJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BPGMIPJINKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPGMIPJINKJ*))((::PBYTE)hIl2Cpp + BPGMIPJINKJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BPGMIPJINKJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
