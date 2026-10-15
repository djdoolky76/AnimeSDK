#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGJLLHMJKPC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IGJLLHMJKPC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E64E580)
#define IGJLLHMJKPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E64E7E0)
#define IGJLLHMJKPC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E64E130)
#define IGJLLHMJKPC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E64E0F0)
#define IGJLLHMJKPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E64E0E0)
#define IGJLLHMJKPC_EBAOCGGBDFK_OFFSET UNITYSDK_OFFSET(0x1E64E1C0)
#define IGJLLHMJKPC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E64E300)
#define IGJLLHMJKPC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E64E1F0)
#define IGJLLHMJKPC_FOFMIHADABG_OFFSET UNITYSDK_OFFSET(0x1E64E1B0)
#define IGJLLHMJKPC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E64E3E0)
#define IGJLLHMJKPC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E64E070)
#define IGJLLHMJKPC_LNIAACBOGKL_OFFSET UNITYSDK_OFFSET(0x1E64E1E0)
#define IGJLLHMJKPC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E64E660)
#define IGJLLHMJKPC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E64E620)
#define IGJLLHMJKPC_ONJCMIFODDA_OFFSET UNITYSDK_OFFSET(0x1E64E1D0)
#define IGJLLHMJKPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E64E0D0)
#define IGJLLHMJKPC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E64E410)
#define IGJLLHMJKPC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E64E470)

	class IGJLLHMJKPC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean NPGMMNFKMKN; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 BEIPFCCPIJB; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IGJLLHMJKPC")->GetStaticField(0x4B2C0);
		}

		// static const ::System::Object DFLDAOLENMB; // 0x0
		// static const ::System::Object GEELPGBGIOO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJLLHMJKPC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IGJLLHMJKPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGJLLHMJKPC*))((::PBYTE)hIl2Cpp + IGJLLHMJKPC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGJLLHMJKPC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IGJLLHMJKPC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJLLHMJKPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IGJLLHMJKPC* Clone()
		{
			return ((::IGJLLHMJKPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJLLHMJKPC_CLONE_OFFSET))(this);
		}

		::System::UInt32 FOFMIHADABG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJLLHMJKPC_FOFMIHADABG_OFFSET))(this);
		}

		::System::Void EBAOCGGBDFK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGJLLHMJKPC_EBAOCGGBDFK_OFFSET))(this, a1);
		}

		::System::Boolean ONJCMIFODDA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJLLHMJKPC_ONJCMIFODDA_OFFSET))(this);
		}

		::System::Void LNIAACBOGKL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IGJLLHMJKPC_LNIAACBOGKL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGJLLHMJKPC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IGJLLHMJKPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGJLLHMJKPC*))((::PBYTE)hIl2Cpp + IGJLLHMJKPC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJLLHMJKPC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJLLHMJKPC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IGJLLHMJKPC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJLLHMJKPC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IGJLLHMJKPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGJLLHMJKPC*))((::PBYTE)hIl2Cpp + IGJLLHMJKPC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IGJLLHMJKPC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
