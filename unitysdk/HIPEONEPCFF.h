#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONMMBJHCHIN.h"
#include "unitysdk/System/Object.h"
class HIPEONEPCFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIPEONEPCFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E572AD0)
#define HIPEONEPCFF_CBBOHNAEMBN_OFFSET UNITYSDK_OFFSET(0x1E572580)
#define HIPEONEPCFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E572E20)
#define HIPEONEPCFF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E572500)
#define HIPEONEPCFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5724B0)
#define HIPEONEPCFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5724A0)
#define HIPEONEPCFF_EIOGEBGMJEI_OFFSET UNITYSDK_OFFSET(0x1E5725F0)
#define HIPEONEPCFF_EOGAKLEODAP_OFFSET UNITYSDK_OFFSET(0x1E572570)
#define HIPEONEPCFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E572710)
#define HIPEONEPCFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E572600)
#define HIPEONEPCFF_FMJFCDNCODB_OFFSET UNITYSDK_OFFSET(0x1E572590)
#define HIPEONEPCFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E572820)
#define HIPEONEPCFF_GFNBDKJJOCC_OFFSET UNITYSDK_OFFSET(0x1E5725E0)
#define HIPEONEPCFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E572460)
#define HIPEONEPCFF_LNAJIHJMOII_OFFSET UNITYSDK_OFFSET(0x1E572560)
#define HIPEONEPCFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E572C50)
#define HIPEONEPCFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E572BF0)
#define HIPEONEPCFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E572490)
#define HIPEONEPCFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5728E0)
#define HIPEONEPCFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E572940)

inline static constexpr unsigned int HIPEONEPCFF_TypeDefinitionIndex = 32080;

	class HIPEONEPCFF : public ::System::Object
	{
	public:
		::System::String* APJJPMIKPIK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::ONMMBJHCHIN INJGECDAJIA; // 0x20
		::System::Boolean KANHAPIFLOM; // 0x24
		static ::Google::Protobuf::MessageParser_1<::HIPEONEPCFF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HIPEONEPCFF*>**)UnitySDK::FromName("", "HIPEONEPCFF")->GetStaticField(0x34DE0);
		}

		// static const ::System::Object BCGONOOIJBD; // 0x0
		// static const ::System::Object AHCJNILFHBO; // 0x0
		// static const ::System::Object OPKAOFANLJI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPEONEPCFF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HIPEONEPCFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIPEONEPCFF*))((::PBYTE)hIl2Cpp + HIPEONEPCFF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIPEONEPCFF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HIPEONEPCFF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HIPEONEPCFF*>*(*)())((::PBYTE)hIl2Cpp + HIPEONEPCFF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPEONEPCFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HIPEONEPCFF* Clone()
		{
			return ((::HIPEONEPCFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPEONEPCFF_CLONE_OFFSET))(this);
		}

		::ONMMBJHCHIN LNAJIHJMOII()
		{
			return ((::ONMMBJHCHIN(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPEONEPCFF_LNAJIHJMOII_OFFSET))(this);
		}

		::System::Void EOGAKLEODAP(::ONMMBJHCHIN a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONMMBJHCHIN))((::PBYTE)hIl2Cpp + HIPEONEPCFF_EOGAKLEODAP_OFFSET))(this, a1);
		}

		::System::String* CBBOHNAEMBN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPEONEPCFF_CBBOHNAEMBN_OFFSET))(this);
		}

		::System::Void FMJFCDNCODB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HIPEONEPCFF_FMJFCDNCODB_OFFSET))(this, a1);
		}

		::System::Boolean GFNBDKJJOCC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPEONEPCFF_GFNBDKJJOCC_OFFSET))(this);
		}

		::System::Void EIOGEBGMJEI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HIPEONEPCFF_EIOGEBGMJEI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIPEONEPCFF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HIPEONEPCFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIPEONEPCFF*))((::PBYTE)hIl2Cpp + HIPEONEPCFF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPEONEPCFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPEONEPCFF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HIPEONEPCFF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPEONEPCFF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HIPEONEPCFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIPEONEPCFF*))((::PBYTE)hIl2Cpp + HIPEONEPCFF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HIPEONEPCFF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
