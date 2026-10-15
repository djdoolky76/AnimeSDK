#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CICKIFGMKPF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CICKIFGMKPF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0A1790)
#define CICKIFGMKPF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A19F0)
#define CICKIFGMKPF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0A13A0)
#define CICKIFGMKPF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0A1360)
#define CICKIFGMKPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A1350)
#define CICKIFGMKPF_EDBHKLKNOGG_OFFSET UNITYSDK_OFFSET(0x1E0A1400)
#define CICKIFGMKPF_EILPOOIECLM_OFFSET UNITYSDK_OFFSET(0x1E0A1410)
#define CICKIFGMKPF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0A1510)
#define CICKIFGMKPF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0A1430)
#define CICKIFGMKPF_FCCBPNELKAN_OFFSET UNITYSDK_OFFSET(0x1E0A1420)
#define CICKIFGMKPF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0A15F0)
#define CICKIFGMKPF_JDHKLNKEDNE_OFFSET UNITYSDK_OFFSET(0x1E0A13F0)
#define CICKIFGMKPF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0A1310)
#define CICKIFGMKPF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0A1870)
#define CICKIFGMKPF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0A1830)
#define CICKIFGMKPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0A1340)
#define CICKIFGMKPF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0A1620)
#define CICKIFGMKPF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0A1680)

inline static constexpr unsigned int CICKIFGMKPF_TypeDefinitionIndex = 32976;

	class CICKIFGMKPF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NIAOPCJHKCG; // 0x18
		::System::Boolean LDDIJMLJJJO; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::CICKIFGMKPF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CICKIFGMKPF*>**)UnitySDK::FromName("", "CICKIFGMKPF")->GetStaticField(0x16430);
		}

		// static const ::System::Object DDLLCPNOFNC; // 0x0
		// static const ::System::Object FDDDLMBHDMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CICKIFGMKPF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CICKIFGMKPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CICKIFGMKPF*))((::PBYTE)hIl2Cpp + CICKIFGMKPF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CICKIFGMKPF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CICKIFGMKPF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CICKIFGMKPF*>*(*)())((::PBYTE)hIl2Cpp + CICKIFGMKPF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CICKIFGMKPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CICKIFGMKPF* Clone()
		{
			return ((::CICKIFGMKPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CICKIFGMKPF_CLONE_OFFSET))(this);
		}

		::System::Boolean JDHKLNKEDNE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CICKIFGMKPF_JDHKLNKEDNE_OFFSET))(this);
		}

		::System::Void EDBHKLKNOGG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CICKIFGMKPF_EDBHKLKNOGG_OFFSET))(this, a1);
		}

		::System::UInt32 EILPOOIECLM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CICKIFGMKPF_EILPOOIECLM_OFFSET))(this);
		}

		::System::Void FCCBPNELKAN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CICKIFGMKPF_FCCBPNELKAN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CICKIFGMKPF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CICKIFGMKPF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CICKIFGMKPF*))((::PBYTE)hIl2Cpp + CICKIFGMKPF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CICKIFGMKPF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CICKIFGMKPF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CICKIFGMKPF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CICKIFGMKPF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CICKIFGMKPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CICKIFGMKPF*))((::PBYTE)hIl2Cpp + CICKIFGMKPF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CICKIFGMKPF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
