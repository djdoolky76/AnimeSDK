#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKEOBMOKEFD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EKEOBMOKEFD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E292680)
#define EKEOBMOKEFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E292950)
#define EKEOBMOKEFD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E292280)
#define EKEOBMOKEFD_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E292310)
#define EKEOBMOKEFD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E292250)
#define EKEOBMOKEFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E292240)
#define EKEOBMOKEFD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E292440)
#define EKEOBMOKEFD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E292330)
#define EKEOBMOKEFD_FPJLEGMCENK_OFFSET UNITYSDK_OFFSET(0x1E2922F0)
#define EKEOBMOKEFD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E292510)
#define EKEOBMOKEFD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2921D0)
#define EKEOBMOKEFD_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E292320)
#define EKEOBMOKEFD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2927D0)
#define EKEOBMOKEFD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E292790)
#define EKEOBMOKEFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E292230)
#define EKEOBMOKEFD_PMPGMADMADA_OFFSET UNITYSDK_OFFSET(0x1E292300)
#define EKEOBMOKEFD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E292540)
#define EKEOBMOKEFD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2925A0)

inline static constexpr unsigned int EKEOBMOKEFD_TypeDefinitionIndex = 31777;

	class EKEOBMOKEFD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DBDCJHECJOO; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::EKEOBMOKEFD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EKEOBMOKEFD*>**)UnitySDK::FromName("", "EKEOBMOKEFD")->GetStaticField(0x4DB40);
		}

		// static const ::System::Object HACFLGOPALO; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEOBMOKEFD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EKEOBMOKEFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKEOBMOKEFD*))((::PBYTE)hIl2Cpp + EKEOBMOKEFD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKEOBMOKEFD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EKEOBMOKEFD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EKEOBMOKEFD*>*(*)())((::PBYTE)hIl2Cpp + EKEOBMOKEFD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEOBMOKEFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EKEOBMOKEFD* Clone()
		{
			return ((::EKEOBMOKEFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEOBMOKEFD_CLONE_OFFSET))(this);
		}

		::System::UInt32 FPJLEGMCENK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEOBMOKEFD_FPJLEGMCENK_OFFSET))(this);
		}

		::System::Void PMPGMADMADA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EKEOBMOKEFD_PMPGMADMADA_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEOBMOKEFD_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EKEOBMOKEFD_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EKEOBMOKEFD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EKEOBMOKEFD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKEOBMOKEFD*))((::PBYTE)hIl2Cpp + EKEOBMOKEFD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEOBMOKEFD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEOBMOKEFD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EKEOBMOKEFD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEOBMOKEFD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EKEOBMOKEFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKEOBMOKEFD*))((::PBYTE)hIl2Cpp + EKEOBMOKEFD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EKEOBMOKEFD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
