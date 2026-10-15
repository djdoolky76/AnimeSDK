#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJNFKMCDDCM;
class OIIPJFDNPAH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DJNFKMCDDCM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1D13D0)
#define DJNFKMCDDCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D1780)
#define DJNFKMCDDCM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1D0E90)
#define DJNFKMCDDCM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1D0E20)
#define DJNFKMCDDCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D0E10)
#define DJNFKMCDDCM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1D10D0)
#define DJNFKMCDDCM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1D0F50)
#define DJNFKMCDDCM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1D0F20)
#define DJNFKMCDDCM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1D1250)
#define DJNFKMCDDCM_IONOHIGHHDA_OFFSET UNITYSDK_OFFSET(0x1E1D0F30)
#define DJNFKMCDDCM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1D0DD0)
#define DJNFKMCDDCM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1D1580)
#define DJNFKMCDDCM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1D14A0)
#define DJNFKMCDDCM_NENFGIBKHFD_OFFSET UNITYSDK_OFFSET(0x1E1D0F40)
#define DJNFKMCDDCM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1D0F10)
#define DJNFKMCDDCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1D0E00)
#define DJNFKMCDDCM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1D1290)
#define DJNFKMCDDCM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1D12F0)

	class DJNFKMCDDCM : public ::System::Object
	{
	public:
		::OIIPJFDNPAH* OIOEJLJJMNE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DJNFKMCDDCM")->GetStaticField(0x39A70);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CJDOFKHNJAO; // 0x0
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DJNFKMCDDCM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNFKMCDDCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DJNFKMCDDCM* Clone()
		{
			return ((::DJNFKMCDDCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNFKMCDDCM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNFKMCDDCM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJNFKMCDDCM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::OIIPJFDNPAH* IONOHIGHHDA()
		{
			return ((::OIIPJFDNPAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNFKMCDDCM_IONOHIGHHDA_OFFSET))(this);
		}

		::System::Void NENFGIBKHFD(::OIIPJFDNPAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIIPJFDNPAH*))((::PBYTE)hIl2Cpp + DJNFKMCDDCM_NENFGIBKHFD_OFFSET))(this, a1);
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
