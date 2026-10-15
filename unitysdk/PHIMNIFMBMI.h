#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHIMNIFMBMI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PHIMNIFMBMI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF3CF80)
#define PHIMNIFMBMI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF3D2B0)
#define PHIMNIFMBMI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF3CBC0)
#define PHIMNIFMBMI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF3CB80)
#define PHIMNIFMBMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF3CB70)
#define PHIMNIFMBMI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF3CD30)
#define PHIMNIFMBMI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF3CC50)
#define PHIMNIFMBMI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF3CC20)
#define PHIMNIFMBMI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF3CE00)
#define PHIMNIFMBMI_HBMDDNLCOPK_OFFSET UNITYSDK_OFFSET(0x1DF3CC30)
#define PHIMNIFMBMI_IGEIPOHDFIH_OFFSET UNITYSDK_OFFSET(0x1DF3CC40)
#define PHIMNIFMBMI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF3CB30)
#define PHIMNIFMBMI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF3D130)
#define PHIMNIFMBMI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF3D0F0)
#define PHIMNIFMBMI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF3CC10)
#define PHIMNIFMBMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF3CB60)
#define PHIMNIFMBMI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF3CE40)
#define PHIMNIFMBMI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF3CEA0)

inline static constexpr unsigned int PHIMNIFMBMI_TypeDefinitionIndex = 26647;

	class PHIMNIFMBMI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::Byte _padding0[0x4];
		::System::UInt64 ICJLCENOPKP; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PHIMNIFMBMI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PHIMNIFMBMI*>**)UnitySDK::FromName("", "PHIMNIFMBMI")->GetStaticField(0x3FE40);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object KIPBCONBHCJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIMNIFMBMI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PHIMNIFMBMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHIMNIFMBMI*))((::PBYTE)hIl2Cpp + PHIMNIFMBMI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHIMNIFMBMI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PHIMNIFMBMI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PHIMNIFMBMI*>*(*)())((::PBYTE)hIl2Cpp + PHIMNIFMBMI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIMNIFMBMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PHIMNIFMBMI* Clone()
		{
			return ((::PHIMNIFMBMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIMNIFMBMI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIMNIFMBMI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PHIMNIFMBMI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt64 HBMDDNLCOPK()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIMNIFMBMI_HBMDDNLCOPK_OFFSET))(this);
		}

		::System::Void IGEIPOHDFIH(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + PHIMNIFMBMI_IGEIPOHDFIH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PHIMNIFMBMI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PHIMNIFMBMI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PHIMNIFMBMI*))((::PBYTE)hIl2Cpp + PHIMNIFMBMI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIMNIFMBMI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIMNIFMBMI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PHIMNIFMBMI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIMNIFMBMI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PHIMNIFMBMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHIMNIFMBMI*))((::PBYTE)hIl2Cpp + PHIMNIFMBMI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PHIMNIFMBMI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
