#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCBHBJEOCHL;
class KCKOECDINAF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KCKOECDINAF_BOJOLCJCLEO_OFFSET UNITYSDK_OFFSET(0x1E7F8E20)
#define KCKOECDINAF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7F9290)
#define KCKOECDINAF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7F9610)
#define KCKOECDINAF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7F8DD0)
#define KCKOECDINAF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7F8D10)
#define KCKOECDINAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F8CC0)
#define KCKOECDINAF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7F8F80)
#define KCKOECDINAF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7F8E30)
#define KCKOECDINAF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7F8E10)
#define KCKOECDINAF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7F90B0)
#define KCKOECDINAF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7F8C80)
#define KCKOECDINAF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7F9440)
#define KCKOECDINAF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7F93A0)
#define KCKOECDINAF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7F8E00)
#define KCKOECDINAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7F8CB0)
#define KCKOECDINAF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7F9120)
#define KCKOECDINAF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7F9180)

inline static constexpr unsigned int KCKOECDINAF_TypeDefinitionIndex = 29001;

	class KCKOECDINAF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::HCBHBJEOCHL*>* CCHMPMNPPME; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KCKOECDINAF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KCKOECDINAF*>**)UnitySDK::FromName("", "KCKOECDINAF")->GetStaticField(0x10070);
		}

		static ::Google::Protobuf::FieldCodec_1<::HCBHBJEOCHL*>** StaticGet_NPADOCMPDGJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::HCBHBJEOCHL*>**)UnitySDK::FromName("", "KCKOECDINAF")->GetStaticField(0x10078);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object PCFIGHGFGOO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKOECDINAF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KCKOECDINAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCKOECDINAF*))((::PBYTE)hIl2Cpp + KCKOECDINAF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCKOECDINAF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KCKOECDINAF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KCKOECDINAF*>*(*)())((::PBYTE)hIl2Cpp + KCKOECDINAF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKOECDINAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KCKOECDINAF* Clone()
		{
			return ((::KCKOECDINAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKOECDINAF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKOECDINAF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KCKOECDINAF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HCBHBJEOCHL*>* BOJOLCJCLEO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HCBHBJEOCHL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKOECDINAF_BOJOLCJCLEO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCKOECDINAF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KCKOECDINAF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KCKOECDINAF*))((::PBYTE)hIl2Cpp + KCKOECDINAF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKOECDINAF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKOECDINAF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KCKOECDINAF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKOECDINAF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KCKOECDINAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCKOECDINAF*))((::PBYTE)hIl2Cpp + KCKOECDINAF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KCKOECDINAF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
