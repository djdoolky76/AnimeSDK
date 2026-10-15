#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOJFJPFJINM;
class JGAMMPGMCNI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IOJFJPFJINM_ADGLNFILOHI_OFFSET UNITYSDK_OFFSET(0x1E6D7150)
#define IOJFJPFJINM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6D7670)
#define IOJFJPFJINM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D7940)
#define IOJFJPFJINM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6D70D0)
#define IOJFJPFJINM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6D7060)
#define IOJFJPFJINM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D7050)
#define IOJFJPFJINM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6D7310)
#define IOJFJPFJINM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6D7190)
#define IOJFJPFJINM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E6D7180)
#define IOJFJPFJINM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6D7490)
#define IOJFJPFJINM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6D7010)
#define IOJFJPFJINM_KLINCLPEAHO_OFFSET UNITYSDK_OFFSET(0x1E6D7160)
#define IOJFJPFJINM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6D77B0)
#define IOJFJPFJINM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6D7740)
#define IOJFJPFJINM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E6D7170)
#define IOJFJPFJINM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6D7040)
#define IOJFJPFJINM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6D7530)
#define IOJFJPFJINM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6D7590)

inline static constexpr unsigned int IOJFJPFJINM_TypeDefinitionIndex = 33788;

	class IOJFJPFJINM : public ::System::Object
	{
	public:
		::JGAMMPGMCNI* NLIJNNMCAAO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::IOJFJPFJINM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IOJFJPFJINM*>**)UnitySDK::FromName("", "IOJFJPFJINM")->GetStaticField(0x59E40);
		}

		// static const ::System::Object DMAFCIBFMPD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJFJPFJINM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IOJFJPFJINM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOJFJPFJINM*))((::PBYTE)hIl2Cpp + IOJFJPFJINM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOJFJPFJINM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IOJFJPFJINM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IOJFJPFJINM*>*(*)())((::PBYTE)hIl2Cpp + IOJFJPFJINM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJFJPFJINM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IOJFJPFJINM* Clone()
		{
			return ((::IOJFJPFJINM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJFJPFJINM_CLONE_OFFSET))(this);
		}

		::JGAMMPGMCNI* ADGLNFILOHI()
		{
			return ((::JGAMMPGMCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJFJPFJINM_ADGLNFILOHI_OFFSET))(this);
		}

		::System::Void KLINCLPEAHO(::JGAMMPGMCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGAMMPGMCNI*))((::PBYTE)hIl2Cpp + IOJFJPFJINM_KLINCLPEAHO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJFJPFJINM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IOJFJPFJINM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IOJFJPFJINM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IOJFJPFJINM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IOJFJPFJINM*))((::PBYTE)hIl2Cpp + IOJFJPFJINM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJFJPFJINM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJFJPFJINM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IOJFJPFJINM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJFJPFJINM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IOJFJPFJINM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOJFJPFJINM*))((::PBYTE)hIl2Cpp + IOJFJPFJINM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IOJFJPFJINM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
