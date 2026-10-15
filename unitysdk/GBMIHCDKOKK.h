#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBMIHCDKOKK;
class HGNAHHFBMMN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GBMIHCDKOKK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E432080)
#define GBMIHCDKOKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4323F0)
#define GBMIHCDKOKK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E431B10)
#define GBMIHCDKOKK_COLFKPNJIGF_OFFSET UNITYSDK_OFFSET(0x1E431BB0)
#define GBMIHCDKOKK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E431A80)
#define GBMIHCDKOKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E431A70)
#define GBMIHCDKOKK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E431D70)
#define GBMIHCDKOKK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E431BF0)
#define GBMIHCDKOKK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E431BE0)
#define GBMIHCDKOKK_FEFDOPAECMD_OFFSET UNITYSDK_OFFSET(0x1E431BC0)
#define GBMIHCDKOKK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E431EF0)
#define GBMIHCDKOKK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E431A30)
#define GBMIHCDKOKK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E432210)
#define GBMIHCDKOKK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E432150)
#define GBMIHCDKOKK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E431BD0)
#define GBMIHCDKOKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E431A60)
#define GBMIHCDKOKK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E431F40)
#define GBMIHCDKOKK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E431FA0)

inline static constexpr unsigned int GBMIHCDKOKK_TypeDefinitionIndex = 31650;

	class GBMIHCDKOKK : public ::System::Object
	{
	public:
		::HGNAHHFBMMN* HCDNDOJHBFG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GBMIHCDKOKK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GBMIHCDKOKK*>**)UnitySDK::FromName("", "GBMIHCDKOKK")->GetStaticField(0xDC60);
		}

		// static const ::System::Object CBBCFDAIOJI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMIHCDKOKK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GBMIHCDKOKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBMIHCDKOKK*))((::PBYTE)hIl2Cpp + GBMIHCDKOKK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBMIHCDKOKK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GBMIHCDKOKK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GBMIHCDKOKK*>*(*)())((::PBYTE)hIl2Cpp + GBMIHCDKOKK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMIHCDKOKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GBMIHCDKOKK* Clone()
		{
			return ((::GBMIHCDKOKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMIHCDKOKK_CLONE_OFFSET))(this);
		}

		::HGNAHHFBMMN* COLFKPNJIGF()
		{
			return ((::HGNAHHFBMMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMIHCDKOKK_COLFKPNJIGF_OFFSET))(this);
		}

		::System::Void FEFDOPAECMD(::HGNAHHFBMMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGNAHHFBMMN*))((::PBYTE)hIl2Cpp + GBMIHCDKOKK_FEFDOPAECMD_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMIHCDKOKK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBMIHCDKOKK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBMIHCDKOKK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GBMIHCDKOKK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBMIHCDKOKK*))((::PBYTE)hIl2Cpp + GBMIHCDKOKK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMIHCDKOKK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMIHCDKOKK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GBMIHCDKOKK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMIHCDKOKK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GBMIHCDKOKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBMIHCDKOKK*))((::PBYTE)hIl2Cpp + GBMIHCDKOKK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GBMIHCDKOKK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
