#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGOMIHEFHPA;
class HBNLILKKBFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HBNLILKKBFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E501A10)
#define HBNLILKKBFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E501D30)
#define HBNLILKKBFN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E501450)
#define HBNLILKKBFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5013E0)
#define HBNLILKKBFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5013D0)
#define HBNLILKKBFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E501690)
#define HBNLILKKBFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E501510)
#define HBNLILKKBFN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E5014E0)
#define HBNLILKKBFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E501810)
#define HBNLILKKBFN_IGFHAGAIFHH_OFFSET UNITYSDK_OFFSET(0x1E5014F0)
#define HBNLILKKBFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E501390)
#define HBNLILKKBFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E501B70)
#define HBNLILKKBFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E501AE0)
#define HBNLILKKBFN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E5014D0)
#define HBNLILKKBFN_PACMGJMGOHC_OFFSET UNITYSDK_OFFSET(0x1E501500)
#define HBNLILKKBFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5013C0)
#define HBNLILKKBFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5018D0)
#define HBNLILKKBFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E501930)

inline static constexpr unsigned int HBNLILKKBFN_TypeDefinitionIndex = 29793;

	class HBNLILKKBFN : public ::System::Object
	{
	public:
		::BGOMIHEFHPA* NNCHMJDCIAH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HBNLILKKBFN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HBNLILKKBFN*>**)UnitySDK::FromName("", "HBNLILKKBFN")->GetStaticField(0x25BE0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JONFNCINDNG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNLILKKBFN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HBNLILKKBFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBNLILKKBFN*))((::PBYTE)hIl2Cpp + HBNLILKKBFN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBNLILKKBFN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HBNLILKKBFN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HBNLILKKBFN*>*(*)())((::PBYTE)hIl2Cpp + HBNLILKKBFN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNLILKKBFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HBNLILKKBFN* Clone()
		{
			return ((::HBNLILKKBFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNLILKKBFN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNLILKKBFN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBNLILKKBFN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::BGOMIHEFHPA* IGFHAGAIFHH()
		{
			return ((::BGOMIHEFHPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNLILKKBFN_IGFHAGAIFHH_OFFSET))(this);
		}

		::System::Void PACMGJMGOHC(::BGOMIHEFHPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGOMIHEFHPA*))((::PBYTE)hIl2Cpp + HBNLILKKBFN_PACMGJMGOHC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBNLILKKBFN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HBNLILKKBFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBNLILKKBFN*))((::PBYTE)hIl2Cpp + HBNLILKKBFN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNLILKKBFN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNLILKKBFN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HBNLILKKBFN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNLILKKBFN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HBNLILKKBFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBNLILKKBFN*))((::PBYTE)hIl2Cpp + HBNLILKKBFN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HBNLILKKBFN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
