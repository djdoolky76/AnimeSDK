#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEPCOHMCAAJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GEPCOHMCAAJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E45F150)
#define GEPCOHMCAAJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E45F370)
#define GEPCOHMCAAJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E45EDA0)
#define GEPCOHMCAAJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E45ED70)
#define GEPCOHMCAAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E45ED60)
#define GEPCOHMCAAJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E45EED0)
#define GEPCOHMCAAJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E45EE00)
#define GEPCOHMCAAJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E45EDF0)
#define GEPCOHMCAAJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E45F040)
#define GEPCOHMCAAJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E45ED20)
#define GEPCOHMCAAJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E45F210)
#define GEPCOHMCAAJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E45F1E0)
#define GEPCOHMCAAJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E45EDE0)
#define GEPCOHMCAAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E45ED50)
#define GEPCOHMCAAJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E45F070)
#define GEPCOHMCAAJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E45F0D0)

inline static constexpr unsigned int GEPCOHMCAAJ_TypeDefinitionIndex = 27108;

	class GEPCOHMCAAJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GEPCOHMCAAJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GEPCOHMCAAJ*>**)UnitySDK::FromName("", "GEPCOHMCAAJ")->GetStaticField(0x12C40);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GEPCOHMCAAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEPCOHMCAAJ*))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GEPCOHMCAAJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GEPCOHMCAAJ*>*(*)())((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GEPCOHMCAAJ* Clone()
		{
			return ((::GEPCOHMCAAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GEPCOHMCAAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEPCOHMCAAJ*))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GEPCOHMCAAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEPCOHMCAAJ*))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
