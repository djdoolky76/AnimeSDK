#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AINBIAHAJKH;
class KJMKOJEHMII;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AINBIAHAJKH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E253440)
#define AINBIAHAJKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E253760)
#define AINBIAHAJKH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E252E70)
#define AINBIAHAJKH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E252E00)
#define AINBIAHAJKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E252DF0)
#define AINBIAHAJKH_DDLGCOIFIAB_OFFSET UNITYSDK_OFFSET(0x1E252F00)
#define AINBIAHAJKH_ELHFCMBPKIL_OFFSET UNITYSDK_OFFSET(0x1E252EF0)
#define AINBIAHAJKH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2530B0)
#define AINBIAHAJKH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E252F30)
#define AINBIAHAJKH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E252F20)
#define AINBIAHAJKH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E253230)
#define AINBIAHAJKH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E252DB0)
#define AINBIAHAJKH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2535A0)
#define AINBIAHAJKH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E253510)
#define AINBIAHAJKH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E252F10)
#define AINBIAHAJKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E252DE0)
#define AINBIAHAJKH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E253300)
#define AINBIAHAJKH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E253360)

inline static constexpr unsigned int AINBIAHAJKH_TypeDefinitionIndex = 34970;

	class AINBIAHAJKH : public ::System::Object
	{
	public:
		::KJMKOJEHMII* HOPDKOBGIGG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::AINBIAHAJKH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AINBIAHAJKH*>**)UnitySDK::FromName("", "AINBIAHAJKH")->GetStaticField(0x3B9E0);
		}

		// static const ::System::Object NLGBNLCIKGN; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINBIAHAJKH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AINBIAHAJKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AINBIAHAJKH*))((::PBYTE)hIl2Cpp + AINBIAHAJKH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AINBIAHAJKH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AINBIAHAJKH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AINBIAHAJKH*>*(*)())((::PBYTE)hIl2Cpp + AINBIAHAJKH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AINBIAHAJKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AINBIAHAJKH* Clone()
		{
			return ((::AINBIAHAJKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AINBIAHAJKH_CLONE_OFFSET))(this);
		}

		::KJMKOJEHMII* ELHFCMBPKIL()
		{
			return ((::KJMKOJEHMII*(*)(::PVOID))((::PBYTE)hIl2Cpp + AINBIAHAJKH_ELHFCMBPKIL_OFFSET))(this);
		}

		::System::Void DDLGCOIFIAB(::KJMKOJEHMII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJMKOJEHMII*))((::PBYTE)hIl2Cpp + AINBIAHAJKH_DDLGCOIFIAB_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AINBIAHAJKH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AINBIAHAJKH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AINBIAHAJKH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AINBIAHAJKH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AINBIAHAJKH*))((::PBYTE)hIl2Cpp + AINBIAHAJKH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AINBIAHAJKH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AINBIAHAJKH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AINBIAHAJKH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AINBIAHAJKH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AINBIAHAJKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AINBIAHAJKH*))((::PBYTE)hIl2Cpp + AINBIAHAJKH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AINBIAHAJKH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
