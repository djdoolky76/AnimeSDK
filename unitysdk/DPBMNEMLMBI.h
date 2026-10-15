#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPBMNEMLMBI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PileItem; }
namespace System { class Object; }
namespace System { class String; }

#define DPBMNEMLMBI_CACOAPFOAAM_OFFSET UNITYSDK_OFFSET(0x1E209B30)
#define DPBMNEMLMBI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E209F90)
#define DPBMNEMLMBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E20A300)
#define DPBMNEMLMBI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E209AE0)
#define DPBMNEMLMBI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E209A50)
#define DPBMNEMLMBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E209A10)
#define DPBMNEMLMBI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E209C90)
#define DPBMNEMLMBI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E209B40)
#define DPBMNEMLMBI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E209B20)
#define DPBMNEMLMBI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E209DC0)
#define DPBMNEMLMBI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2099D0)
#define DPBMNEMLMBI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E20A140)
#define DPBMNEMLMBI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E20A0A0)
#define DPBMNEMLMBI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E209B10)
#define DPBMNEMLMBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E209A00)
#define DPBMNEMLMBI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E209E30)
#define DPBMNEMLMBI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E209E90)

inline static constexpr unsigned int DPBMNEMLMBI_TypeDefinitionIndex = 26318;

	class DPBMNEMLMBI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* MIEINLKPIMJ; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DPBMNEMLMBI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DPBMNEMLMBI*>**)UnitySDK::FromName("", "DPBMNEMLMBI")->GetStaticField(0x44270);
		}

		static ::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>** StaticGet_EDEMPAMDAFD()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>**)UnitySDK::FromName("", "DPBMNEMLMBI")->GetStaticField(0x44278);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DFABHHAPAEA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBMNEMLMBI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DPBMNEMLMBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPBMNEMLMBI*))((::PBYTE)hIl2Cpp + DPBMNEMLMBI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPBMNEMLMBI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DPBMNEMLMBI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DPBMNEMLMBI*>*(*)())((::PBYTE)hIl2Cpp + DPBMNEMLMBI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBMNEMLMBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DPBMNEMLMBI* Clone()
		{
			return ((::DPBMNEMLMBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBMNEMLMBI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBMNEMLMBI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DPBMNEMLMBI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* CACOAPFOAAM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBMNEMLMBI_CACOAPFOAAM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPBMNEMLMBI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DPBMNEMLMBI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DPBMNEMLMBI*))((::PBYTE)hIl2Cpp + DPBMNEMLMBI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBMNEMLMBI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBMNEMLMBI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DPBMNEMLMBI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBMNEMLMBI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DPBMNEMLMBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPBMNEMLMBI*))((::PBYTE)hIl2Cpp + DPBMNEMLMBI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DPBMNEMLMBI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
