#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class PNOENKFAKEK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PNOENKFAKEK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF92D20)
#define PNOENKFAKEK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF93040)
#define PNOENKFAKEK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF92780)
#define PNOENKFAKEK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF92710)
#define PNOENKFAKEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF92700)
#define PNOENKFAKEK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF929C0)
#define PNOENKFAKEK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF92840)
#define PNOENKFAKEK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF92830)
#define PNOENKFAKEK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF92B40)
#define PNOENKFAKEK_IFKGDPPBDEJ_OFFSET UNITYSDK_OFFSET(0x1DF92800)
#define PNOENKFAKEK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF926C0)
#define PNOENKFAKEK_JOAFKOHBCGK_OFFSET UNITYSDK_OFFSET(0x1DF92810)
#define PNOENKFAKEK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF92E80)
#define PNOENKFAKEK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF92DF0)
#define PNOENKFAKEK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF92820)
#define PNOENKFAKEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF926F0)
#define PNOENKFAKEK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF92BE0)
#define PNOENKFAKEK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF92C40)

inline static constexpr unsigned int PNOENKFAKEK_TypeDefinitionIndex = 28032;

	class PNOENKFAKEK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CAGKEDMHEOI* FALCONHOFNM; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PNOENKFAKEK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PNOENKFAKEK*>**)UnitySDK::FromName("", "PNOENKFAKEK")->GetStaticField(0x43100);
		}

		// static const ::System::Object FGDMAHNNGPI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOENKFAKEK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PNOENKFAKEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNOENKFAKEK*))((::PBYTE)hIl2Cpp + PNOENKFAKEK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNOENKFAKEK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PNOENKFAKEK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PNOENKFAKEK*>*(*)())((::PBYTE)hIl2Cpp + PNOENKFAKEK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOENKFAKEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PNOENKFAKEK* Clone()
		{
			return ((::PNOENKFAKEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOENKFAKEK_CLONE_OFFSET))(this);
		}

		::CAGKEDMHEOI* IFKGDPPBDEJ()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOENKFAKEK_IFKGDPPBDEJ_OFFSET))(this);
		}

		::System::Void JOAFKOHBCGK(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + PNOENKFAKEK_JOAFKOHBCGK_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOENKFAKEK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNOENKFAKEK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNOENKFAKEK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PNOENKFAKEK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNOENKFAKEK*))((::PBYTE)hIl2Cpp + PNOENKFAKEK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOENKFAKEK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOENKFAKEK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PNOENKFAKEK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOENKFAKEK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PNOENKFAKEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNOENKFAKEK*))((::PBYTE)hIl2Cpp + PNOENKFAKEK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PNOENKFAKEK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
