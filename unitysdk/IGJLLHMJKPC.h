#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGJLLHMJKPC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IGJLLHMJKPC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F96E800)
#define IGJLLHMJKPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F96EA60)
#define IGJLLHMJKPC_CLONE_OFFSET UNITYSDK_OFFSET(0x1F96E3B0)
#define IGJLLHMJKPC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F96E370)
#define IGJLLHMJKPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1F96E360)
#define IGJLLHMJKPC_EBAOCGGBDFK_OFFSET UNITYSDK_OFFSET(0x1F96E460)
#define IGJLLHMJKPC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F96E580)
#define IGJLLHMJKPC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F96E470)
#define IGJLLHMJKPC_FOFMIHADABG_OFFSET UNITYSDK_OFFSET(0x1F96E450)
#define IGJLLHMJKPC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F96E660)
#define IGJLLHMJKPC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F96E2F0)
#define IGJLLHMJKPC_LNIAACBOGKL_OFFSET UNITYSDK_OFFSET(0x1F96E440)
#define IGJLLHMJKPC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F96E8E0)
#define IGJLLHMJKPC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F96E8A0)
#define IGJLLHMJKPC_ONJCMIFODDA_OFFSET UNITYSDK_OFFSET(0x1F96E430)
#define IGJLLHMJKPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F96E350)
#define IGJLLHMJKPC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F96E690)
#define IGJLLHMJKPC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F96E6F0)

inline static constexpr unsigned int IGJLLHMJKPC_TypeDefinitionIndex = 28279;

	class IGJLLHMJKPC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean NPGMMNFKMKN; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 BEIPFCCPIJB; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::IGJLLHMJKPC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IGJLLHMJKPC*>**)UnitySDK::FromName("", "IGJLLHMJKPC")->GetStaticField(0x49DB0);
		}

		// static const ::System::Object GEELPGBGIOO; // 0x0
		// static const ::System::Object DFLDAOLENMB; // 0x0
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

		static ::Google::Protobuf::MessageParser_1<::IGJLLHMJKPC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IGJLLHMJKPC*>*(*)())((::PBYTE)hIl2Cpp + IGJLLHMJKPC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJLLHMJKPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IGJLLHMJKPC* Clone()
		{
			return ((::IGJLLHMJKPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJLLHMJKPC_CLONE_OFFSET))(this);
		}

		::System::Boolean ONJCMIFODDA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJLLHMJKPC_ONJCMIFODDA_OFFSET))(this);
		}

		::System::Void LNIAACBOGKL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IGJLLHMJKPC_LNIAACBOGKL_OFFSET))(this, a1);
		}

		::System::UInt32 FOFMIHADABG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJLLHMJKPC_FOFMIHADABG_OFFSET))(this);
		}

		::System::Void EBAOCGGBDFK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGJLLHMJKPC_EBAOCGGBDFK_OFFSET))(this, a1);
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
