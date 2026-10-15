#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGOPLKFEJAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define FGOPLKFEJAP_ALKAFBCALDK_OFFSET UNITYSDK_OFFSET(0x1E356460)
#define FGOPLKFEJAP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E356B20)
#define FGOPLKFEJAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E356EA0)
#define FGOPLKFEJAP_CFGGIMODPCJ_OFFSET UNITYSDK_OFFSET(0x1E356450)
#define FGOPLKFEJAP_CJONELLHKMC_OFFSET UNITYSDK_OFFSET(0x1E356470)
#define FGOPLKFEJAP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E356390)
#define FGOPLKFEJAP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3562F0)
#define FGOPLKFEJAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3562E0)
#define FGOPLKFEJAP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3566B0)
#define FGOPLKFEJAP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E356480)
#define FGOPLKFEJAP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3568E0)
#define FGOPLKFEJAP_ILGFNIKKCCA_OFFSET UNITYSDK_OFFSET(0x1E356440)
#define FGOPLKFEJAP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3562A0)
#define FGOPLKFEJAP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E356C90)
#define FGOPLKFEJAP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E356BB0)
#define FGOPLKFEJAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3562D0)
#define FGOPLKFEJAP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3569E0)
#define FGOPLKFEJAP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E356A40)

inline static constexpr unsigned int FGOPLKFEJAP_TypeDefinitionIndex = 32756;

	class FGOPLKFEJAP : public ::System::Object
	{
	public:
		::Proto::ItemList* LEANGDCBGPB; // 0x10
		::Proto::ItemList* OPMLHBNDENF; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FGOPLKFEJAP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FGOPLKFEJAP*>**)UnitySDK::FromName("", "FGOPLKFEJAP")->GetStaticField(0x55B50);
		}

		// static const ::System::Object JBNOCJKJGPK; // 0x0
		// static const ::System::Object EHKOKGLGJOJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGOPLKFEJAP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FGOPLKFEJAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGOPLKFEJAP*))((::PBYTE)hIl2Cpp + FGOPLKFEJAP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGOPLKFEJAP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FGOPLKFEJAP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FGOPLKFEJAP*>*(*)())((::PBYTE)hIl2Cpp + FGOPLKFEJAP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGOPLKFEJAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FGOPLKFEJAP* Clone()
		{
			return ((::FGOPLKFEJAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGOPLKFEJAP_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* ILGFNIKKCCA()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGOPLKFEJAP_ILGFNIKKCCA_OFFSET))(this);
		}

		::System::Void CFGGIMODPCJ(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + FGOPLKFEJAP_CFGGIMODPCJ_OFFSET))(this, a1);
		}

		::Proto::ItemList* ALKAFBCALDK()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGOPLKFEJAP_ALKAFBCALDK_OFFSET))(this);
		}

		::System::Void CJONELLHKMC(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + FGOPLKFEJAP_CJONELLHKMC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FGOPLKFEJAP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FGOPLKFEJAP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FGOPLKFEJAP*))((::PBYTE)hIl2Cpp + FGOPLKFEJAP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGOPLKFEJAP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGOPLKFEJAP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FGOPLKFEJAP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGOPLKFEJAP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FGOPLKFEJAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGOPLKFEJAP*))((::PBYTE)hIl2Cpp + FGOPLKFEJAP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FGOPLKFEJAP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
