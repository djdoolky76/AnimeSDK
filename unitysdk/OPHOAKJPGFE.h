#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCDIFIIDPIA;
class OPHOAKJPGFE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OPHOAKJPGFE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20367B60)
#define OPHOAKJPGFE_CCTOR_OFFSET UNITYSDK_OFFSET(0x20367F00)
#define OPHOAKJPGFE_CLONE_OFFSET UNITYSDK_OFFSET(0x203675A0)
#define OPHOAKJPGFE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20367510)
#define OPHOAKJPGFE_CTOR_OFFSET UNITYSDK_OFFSET(0x20367500)
#define OPHOAKJPGFE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20367800)
#define OPHOAKJPGFE_EQUALS_OFFSET UNITYSDK_OFFSET(0x20367680)
#define OPHOAKJPGFE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x20367670)
#define OPHOAKJPGFE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20367980)
#define OPHOAKJPGFE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x203674C0)
#define OPHOAKJPGFE_LPNMEAOAJJG_OFFSET UNITYSDK_OFFSET(0x20367640)
#define OPHOAKJPGFE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20367D10)
#define OPHOAKJPGFE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20367C30)
#define OPHOAKJPGFE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x20367660)
#define OPHOAKJPGFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x203674F0)
#define OPHOAKJPGFE_PDDKJBMHINN_OFFSET UNITYSDK_OFFSET(0x20367650)
#define OPHOAKJPGFE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20367A20)
#define OPHOAKJPGFE_WRITETO_OFFSET UNITYSDK_OFFSET(0x20367A80)

inline static constexpr unsigned int OPHOAKJPGFE_TypeDefinitionIndex = 32144;

	class OPHOAKJPGFE : public ::System::Object
	{
	public:
		::BCDIFIIDPIA* EKIBDNGGBGK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OPHOAKJPGFE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OPHOAKJPGFE*>**)UnitySDK::FromName("", "OPHOAKJPGFE")->GetStaticField(0x2A800);
		}

		// static const ::System::Object IOBMMBOEJHF; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHOAKJPGFE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OPHOAKJPGFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPHOAKJPGFE*))((::PBYTE)hIl2Cpp + OPHOAKJPGFE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPHOAKJPGFE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OPHOAKJPGFE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OPHOAKJPGFE*>*(*)())((::PBYTE)hIl2Cpp + OPHOAKJPGFE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHOAKJPGFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OPHOAKJPGFE* Clone()
		{
			return ((::OPHOAKJPGFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHOAKJPGFE_CLONE_OFFSET))(this);
		}

		::BCDIFIIDPIA* LPNMEAOAJJG()
		{
			return ((::BCDIFIIDPIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHOAKJPGFE_LPNMEAOAJJG_OFFSET))(this);
		}

		::System::Void PDDKJBMHINN(::BCDIFIIDPIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCDIFIIDPIA*))((::PBYTE)hIl2Cpp + OPHOAKJPGFE_PDDKJBMHINN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHOAKJPGFE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OPHOAKJPGFE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPHOAKJPGFE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OPHOAKJPGFE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OPHOAKJPGFE*))((::PBYTE)hIl2Cpp + OPHOAKJPGFE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHOAKJPGFE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHOAKJPGFE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OPHOAKJPGFE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHOAKJPGFE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OPHOAKJPGFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPHOAKJPGFE*))((::PBYTE)hIl2Cpp + OPHOAKJPGFE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OPHOAKJPGFE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
