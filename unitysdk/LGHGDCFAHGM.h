#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGHGDCFAHGM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LGHGDCFAHGM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9539C0)
#define LGHGDCFAHGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E953DC0)
#define LGHGDCFAHGM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E953560)
#define LGHGDCFAHGM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E953520)
#define LGHGDCFAHGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E953510)
#define LGHGDCFAHGM_ECBHKEPFAOB_OFFSET UNITYSDK_OFFSET(0x1E9535C0)
#define LGHGDCFAHGM_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E9535D0)
#define LGHGDCFAHGM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E953680)
#define LGHGDCFAHGM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E953630)
#define LGHGDCFAHGM_FONPMAMOBPO_OFFSET UNITYSDK_OFFSET(0x1E953610)
#define LGHGDCFAHGM_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E9535E0)
#define LGHGDCFAHGM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E953760)
#define LGHGDCFAHGM_IKFOBNADEKN_OFFSET UNITYSDK_OFFSET(0x1E953600)
#define LGHGDCFAHGM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9534D0)
#define LGHGDCFAHGM_JPIINFKDDOK_OFFSET UNITYSDK_OFFSET(0x1E953620)
#define LGHGDCFAHGM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E953D20)
#define LGHGDCFAHGM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E953CC0)
#define LGHGDCFAHGM_NFKLGOPEAHJ_OFFSET UNITYSDK_OFFSET(0x1E9535F0)
#define LGHGDCFAHGM_OFBMNMIBOJC_OFFSET UNITYSDK_OFFSET(0x1E9535B0)
#define LGHGDCFAHGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E953500)
#define LGHGDCFAHGM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9537D0)
#define LGHGDCFAHGM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E953830)

	class LGHGDCFAHGM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 JMEKOAGODAI; // 0x18
		::System::UInt64 BJGLHKAKCPL; // 0x20
		::System::UInt64 FKEOKHELIGO; // 0x28
		::System::UInt32 GEMFJILOPLL; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LGHGDCFAHGM")->GetStaticField(0xE990);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LGHGDCFAHGM_JJGHOBBFNJD_OFFSET))();
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
