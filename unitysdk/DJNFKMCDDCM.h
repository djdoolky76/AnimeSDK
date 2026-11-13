#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJNFKMCDDCM;
class OIIPJFDNPAH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DJNFKMCDDCM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB37A50)
#define DJNFKMCDDCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB37E00)
#define DJNFKMCDDCM_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB37500)
#define DJNFKMCDDCM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB37490)
#define DJNFKMCDDCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB37480)
#define DJNFKMCDDCM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB37740)
#define DJNFKMCDDCM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB375C0)
#define DJNFKMCDDCM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FB375B0)
#define DJNFKMCDDCM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB378C0)
#define DJNFKMCDDCM_IONOHIGHHDA_OFFSET UNITYSDK_OFFSET(0x1FB37580)
#define DJNFKMCDDCM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB37440)
#define DJNFKMCDDCM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB37C00)
#define DJNFKMCDDCM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB37B20)
#define DJNFKMCDDCM_NENFGIBKHFD_OFFSET UNITYSDK_OFFSET(0x1FB37590)
#define DJNFKMCDDCM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FB375A0)
#define DJNFKMCDDCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB37470)
#define DJNFKMCDDCM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB37910)
#define DJNFKMCDDCM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB37970)

inline static constexpr unsigned int DJNFKMCDDCM_TypeDefinitionIndex = 35819;

	class DJNFKMCDDCM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::OIIPJFDNPAH* OIOEJLJJMNE; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DJNFKMCDDCM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DJNFKMCDDCM*>**)UnitySDK::FromName("", "DJNFKMCDDCM")->GetStaticField(0x2D050);
		}

		// static const ::System::Object CJDOFKHNJAO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNFKMCDDCM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DJNFKMCDDCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJNFKMCDDCM*))((::PBYTE)hIl2Cpp + DJNFKMCDDCM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJNFKMCDDCM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DJNFKMCDDCM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DJNFKMCDDCM*>*(*)())((::PBYTE)hIl2Cpp + DJNFKMCDDCM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNFKMCDDCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DJNFKMCDDCM* Clone()
		{
			return ((::DJNFKMCDDCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNFKMCDDCM_CLONE_OFFSET))(this);
		}

		::OIIPJFDNPAH* IONOHIGHHDA()
		{
			return ((::OIIPJFDNPAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNFKMCDDCM_IONOHIGHHDA_OFFSET))(this);
		}

		::System::Void NENFGIBKHFD(::OIIPJFDNPAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIIPJFDNPAH*))((::PBYTE)hIl2Cpp + DJNFKMCDDCM_NENFGIBKHFD_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNFKMCDDCM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJNFKMCDDCM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJNFKMCDDCM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DJNFKMCDDCM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DJNFKMCDDCM*))((::PBYTE)hIl2Cpp + DJNFKMCDDCM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNFKMCDDCM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNFKMCDDCM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DJNFKMCDDCM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNFKMCDDCM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DJNFKMCDDCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJNFKMCDDCM*))((::PBYTE)hIl2Cpp + DJNFKMCDDCM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DJNFKMCDDCM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
