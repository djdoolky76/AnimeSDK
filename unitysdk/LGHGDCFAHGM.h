#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGHGDCFAHGM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LGHGDCFAHGM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E926380)
#define LGHGDCFAHGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E926780)
#define LGHGDCFAHGM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E925F20)
#define LGHGDCFAHGM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E925EE0)
#define LGHGDCFAHGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E925ED0)
#define LGHGDCFAHGM_ECBHKEPFAOB_OFFSET UNITYSDK_OFFSET(0x1E925F80)
#define LGHGDCFAHGM_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E925F90)
#define LGHGDCFAHGM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E926040)
#define LGHGDCFAHGM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E925FF0)
#define LGHGDCFAHGM_FONPMAMOBPO_OFFSET UNITYSDK_OFFSET(0x1E925FD0)
#define LGHGDCFAHGM_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E925FA0)
#define LGHGDCFAHGM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E926120)
#define LGHGDCFAHGM_IKFOBNADEKN_OFFSET UNITYSDK_OFFSET(0x1E925FC0)
#define LGHGDCFAHGM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E925E90)
#define LGHGDCFAHGM_JPIINFKDDOK_OFFSET UNITYSDK_OFFSET(0x1E925FE0)
#define LGHGDCFAHGM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9266E0)
#define LGHGDCFAHGM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E926680)
#define LGHGDCFAHGM_NFKLGOPEAHJ_OFFSET UNITYSDK_OFFSET(0x1E925FB0)
#define LGHGDCFAHGM_OFBMNMIBOJC_OFFSET UNITYSDK_OFFSET(0x1E925F70)
#define LGHGDCFAHGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E925EC0)
#define LGHGDCFAHGM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E926190)
#define LGHGDCFAHGM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9261F0)

inline static constexpr unsigned int LGHGDCFAHGM_TypeDefinitionIndex = 32130;

	class LGHGDCFAHGM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GEMFJILOPLL; // 0x18
		::System::Byte _padding0[0x4];
		::System::UInt64 JMEKOAGODAI; // 0x20
		::System::UInt64 BJGLHKAKCPL; // 0x28
		::System::UInt64 FKEOKHELIGO; // 0x30
		static ::Google::Protobuf::MessageParser_1<::LGHGDCFAHGM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LGHGDCFAHGM*>**)UnitySDK::FromName("", "LGHGDCFAHGM")->GetStaticField(0xD7D0);
		}

		// static const ::System::Object AFBDJOIHOID; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object ODOOBNALOAA; // 0x0
		// static const ::System::Object CHFHIBFOOOK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHGDCFAHGM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LGHGDCFAHGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGHGDCFAHGM*))((::PBYTE)hIl2Cpp + LGHGDCFAHGM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGHGDCFAHGM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LGHGDCFAHGM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LGHGDCFAHGM*>*(*)())((::PBYTE)hIl2Cpp + LGHGDCFAHGM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHGDCFAHGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LGHGDCFAHGM* Clone()
		{
			return ((::LGHGDCFAHGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHGDCFAHGM_CLONE_OFFSET))(this);
		}

		::System::UInt64 OFBMNMIBOJC()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHGDCFAHGM_OFBMNMIBOJC_OFFSET))(this);
		}

		::System::Void ECBHKEPFAOB(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + LGHGDCFAHGM_ECBHKEPFAOB_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHGDCFAHGM_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGHGDCFAHGM_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::UInt64 NFKLGOPEAHJ()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHGDCFAHGM_NFKLGOPEAHJ_OFFSET))(this);
		}

		::System::Void IKFOBNADEKN(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + LGHGDCFAHGM_IKFOBNADEKN_OFFSET))(this, a1);
		}

		::System::UInt64 FONPMAMOBPO()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHGDCFAHGM_FONPMAMOBPO_OFFSET))(this);
		}

		::System::Void JPIINFKDDOK(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + LGHGDCFAHGM_JPIINFKDDOK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGHGDCFAHGM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LGHGDCFAHGM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGHGDCFAHGM*))((::PBYTE)hIl2Cpp + LGHGDCFAHGM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHGDCFAHGM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHGDCFAHGM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LGHGDCFAHGM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHGDCFAHGM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LGHGDCFAHGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGHGDCFAHGM*))((::PBYTE)hIl2Cpp + LGHGDCFAHGM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LGHGDCFAHGM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
