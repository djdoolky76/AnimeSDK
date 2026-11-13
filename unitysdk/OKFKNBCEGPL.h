#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKFKNBCEGPL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OKFKNBCEGPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F6B0830)
#define OKFKNBCEGPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6B0B00)
#define OKFKNBCEGPL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F6B0480)
#define OKFKNBCEGPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6B0450)
#define OKFKNBCEGPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6B0440)
#define OKFKNBCEGPL_DECLCLGGOGD_OFFSET UNITYSDK_OFFSET(0x1F6B04E0)
#define OKFKNBCEGPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F6B05F0)
#define OKFKNBCEGPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F6B0510)
#define OKFKNBCEGPL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F6B0500)
#define OKFKNBCEGPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F6B06C0)
#define OKFKNBCEGPL_HOFJNIJMEGJ_OFFSET UNITYSDK_OFFSET(0x1F6B04D0)
#define OKFKNBCEGPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F6B0400)
#define OKFKNBCEGPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F6B0980)
#define OKFKNBCEGPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F6B0940)
#define OKFKNBCEGPL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F6B04F0)
#define OKFKNBCEGPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F6B0430)
#define OKFKNBCEGPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F6B06F0)
#define OKFKNBCEGPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F6B0750)

inline static constexpr unsigned int OKFKNBCEGPL_TypeDefinitionIndex = 35676;

	class OKFKNBCEGPL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OEHAKOKDOAA; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::OKFKNBCEGPL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OKFKNBCEGPL*>**)UnitySDK::FromName("", "OKFKNBCEGPL")->GetStaticField(0x1E0D0);
		}

		// static const ::System::Object HBFMDPBHHHE; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFKNBCEGPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OKFKNBCEGPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKFKNBCEGPL*))((::PBYTE)hIl2Cpp + OKFKNBCEGPL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKFKNBCEGPL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OKFKNBCEGPL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OKFKNBCEGPL*>*(*)())((::PBYTE)hIl2Cpp + OKFKNBCEGPL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFKNBCEGPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OKFKNBCEGPL* Clone()
		{
			return ((::OKFKNBCEGPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFKNBCEGPL_CLONE_OFFSET))(this);
		}

		::System::UInt32 HOFJNIJMEGJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFKNBCEGPL_HOFJNIJMEGJ_OFFSET))(this);
		}

		::System::Void DECLCLGGOGD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKFKNBCEGPL_DECLCLGGOGD_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFKNBCEGPL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKFKNBCEGPL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKFKNBCEGPL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OKFKNBCEGPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OKFKNBCEGPL*))((::PBYTE)hIl2Cpp + OKFKNBCEGPL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFKNBCEGPL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFKNBCEGPL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OKFKNBCEGPL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFKNBCEGPL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OKFKNBCEGPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKFKNBCEGPL*))((::PBYTE)hIl2Cpp + OKFKNBCEGPL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OKFKNBCEGPL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
