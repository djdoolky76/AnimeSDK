#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPELDFBCCEK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EPELDFBCCEK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E309A80)
#define EPELDFBCCEK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E309D50)
#define EPELDFBCCEK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E309680)
#define EPELDFBCCEK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E309650)
#define EPELDFBCCEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E309640)
#define EPELDFBCCEK_EHFFEJPNIIH_OFFSET UNITYSDK_OFFSET(0x1E309720)
#define EPELDFBCCEK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E309840)
#define EPELDFBCCEK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E309730)
#define EPELDFBCCEK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E309910)
#define EPELDFBCCEK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3095D0)
#define EPELDFBCCEK_KFCDHBIOAFD_OFFSET UNITYSDK_OFFSET(0x1E309710)
#define EPELDFBCCEK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E309BD0)
#define EPELDFBCCEK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E309B90)
#define EPELDFBCCEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E309630)
#define EPELDFBCCEK_PKFCDNFPPEK_OFFSET UNITYSDK_OFFSET(0x1E309700)
#define EPELDFBCCEK_PLNCKLJOJME_OFFSET UNITYSDK_OFFSET(0x1E3096F0)
#define EPELDFBCCEK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E309940)
#define EPELDFBCCEK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3099A0)

inline static constexpr unsigned int EPELDFBCCEK_TypeDefinitionIndex = 29603;

	class EPELDFBCCEK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FFEOOHLDDAP; // 0x18
		::System::UInt32 LCOIIMGPOBE; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::EPELDFBCCEK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EPELDFBCCEK*>**)UnitySDK::FromName("", "EPELDFBCCEK")->GetStaticField(0x43960);
		}

		// static const ::System::Object FMIPKDJBPDG; // 0x0
		// static const ::System::Object NMLOMKAPECC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPELDFBCCEK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EPELDFBCCEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPELDFBCCEK*))((::PBYTE)hIl2Cpp + EPELDFBCCEK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPELDFBCCEK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EPELDFBCCEK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EPELDFBCCEK*>*(*)())((::PBYTE)hIl2Cpp + EPELDFBCCEK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPELDFBCCEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EPELDFBCCEK* Clone()
		{
			return ((::EPELDFBCCEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPELDFBCCEK_CLONE_OFFSET))(this);
		}

		::System::UInt32 PLNCKLJOJME()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPELDFBCCEK_PLNCKLJOJME_OFFSET))(this);
		}

		::System::Void PKFCDNFPPEK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPELDFBCCEK_PKFCDNFPPEK_OFFSET))(this, a1);
		}

		::System::UInt32 KFCDHBIOAFD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPELDFBCCEK_KFCDHBIOAFD_OFFSET))(this);
		}

		::System::Void EHFFEJPNIIH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPELDFBCCEK_EHFFEJPNIIH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPELDFBCCEK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EPELDFBCCEK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPELDFBCCEK*))((::PBYTE)hIl2Cpp + EPELDFBCCEK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPELDFBCCEK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPELDFBCCEK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EPELDFBCCEK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPELDFBCCEK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EPELDFBCCEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPELDFBCCEK*))((::PBYTE)hIl2Cpp + EPELDFBCCEK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EPELDFBCCEK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
