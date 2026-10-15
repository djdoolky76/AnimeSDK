#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDNIEAKJMCF;
class KJMKOJEHMII;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IDNIEAKJMCF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E631200)
#define IDNIEAKJMCF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E631520)
#define IDNIEAKJMCF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E630C50)
#define IDNIEAKJMCF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E630BE0)
#define IDNIEAKJMCF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E630BD0)
#define IDNIEAKJMCF_DDLGCOIFIAB_OFFSET UNITYSDK_OFFSET(0x1E630D00)
#define IDNIEAKJMCF_ELHFCMBPKIL_OFFSET UNITYSDK_OFFSET(0x1E630CF0)
#define IDNIEAKJMCF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E630E90)
#define IDNIEAKJMCF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E630D10)
#define IDNIEAKJMCF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E630CE0)
#define IDNIEAKJMCF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E631010)
#define IDNIEAKJMCF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E630B90)
#define IDNIEAKJMCF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E631360)
#define IDNIEAKJMCF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6312D0)
#define IDNIEAKJMCF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E630CD0)
#define IDNIEAKJMCF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E630BC0)
#define IDNIEAKJMCF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6310C0)
#define IDNIEAKJMCF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E631120)

inline static constexpr unsigned int IDNIEAKJMCF_TypeDefinitionIndex = 34954;

	class IDNIEAKJMCF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KJMKOJEHMII* HOPDKOBGIGG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::IDNIEAKJMCF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IDNIEAKJMCF*>**)UnitySDK::FromName("", "IDNIEAKJMCF")->GetStaticField(0x47190);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object NLGBNLCIKGN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNIEAKJMCF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IDNIEAKJMCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDNIEAKJMCF*))((::PBYTE)hIl2Cpp + IDNIEAKJMCF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDNIEAKJMCF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IDNIEAKJMCF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IDNIEAKJMCF*>*(*)())((::PBYTE)hIl2Cpp + IDNIEAKJMCF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNIEAKJMCF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IDNIEAKJMCF* Clone()
		{
			return ((::IDNIEAKJMCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNIEAKJMCF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNIEAKJMCF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDNIEAKJMCF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::KJMKOJEHMII* ELHFCMBPKIL()
		{
			return ((::KJMKOJEHMII*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNIEAKJMCF_ELHFCMBPKIL_OFFSET))(this);
		}

		::System::Void DDLGCOIFIAB(::KJMKOJEHMII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJMKOJEHMII*))((::PBYTE)hIl2Cpp + IDNIEAKJMCF_DDLGCOIFIAB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDNIEAKJMCF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IDNIEAKJMCF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDNIEAKJMCF*))((::PBYTE)hIl2Cpp + IDNIEAKJMCF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNIEAKJMCF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNIEAKJMCF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IDNIEAKJMCF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNIEAKJMCF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IDNIEAKJMCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDNIEAKJMCF*))((::PBYTE)hIl2Cpp + IDNIEAKJMCF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IDNIEAKJMCF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
