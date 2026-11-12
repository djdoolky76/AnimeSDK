#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEGNOIJMBCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JEGNOIJMBCA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA28CC0)
#define JEGNOIJMBCA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA28EE0)
#define JEGNOIJMBCA_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA28910)
#define JEGNOIJMBCA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA288E0)
#define JEGNOIJMBCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA288D0)
#define JEGNOIJMBCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA28A40)
#define JEGNOIJMBCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA28970)
#define JEGNOIJMBCA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FA28960)
#define JEGNOIJMBCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA28BB0)
#define JEGNOIJMBCA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA28890)
#define JEGNOIJMBCA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA28D80)
#define JEGNOIJMBCA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA28D50)
#define JEGNOIJMBCA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FA28950)
#define JEGNOIJMBCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA288C0)
#define JEGNOIJMBCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA28BE0)
#define JEGNOIJMBCA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA28C40)

inline static constexpr unsigned int JEGNOIJMBCA_TypeDefinitionIndex = 31224;

	class JEGNOIJMBCA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JEGNOIJMBCA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JEGNOIJMBCA*>**)UnitySDK::FromName("", "JEGNOIJMBCA")->GetStaticField(0x61E30);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGNOIJMBCA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JEGNOIJMBCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEGNOIJMBCA*))((::PBYTE)hIl2Cpp + JEGNOIJMBCA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEGNOIJMBCA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JEGNOIJMBCA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JEGNOIJMBCA*>*(*)())((::PBYTE)hIl2Cpp + JEGNOIJMBCA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGNOIJMBCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JEGNOIJMBCA* Clone()
		{
			return ((::JEGNOIJMBCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGNOIJMBCA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGNOIJMBCA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEGNOIJMBCA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEGNOIJMBCA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JEGNOIJMBCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JEGNOIJMBCA*))((::PBYTE)hIl2Cpp + JEGNOIJMBCA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGNOIJMBCA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGNOIJMBCA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JEGNOIJMBCA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGNOIJMBCA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JEGNOIJMBCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEGNOIJMBCA*))((::PBYTE)hIl2Cpp + JEGNOIJMBCA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JEGNOIJMBCA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
