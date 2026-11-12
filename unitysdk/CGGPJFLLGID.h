#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGGPJFLLGID;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CGGPJFLLGID_BCNLAHMHJFH_OFFSET UNITYSDK_OFFSET(0x1F376C50)
#define CGGPJFLLGID_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F376FE0)
#define CGGPJFLLGID_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3772B0)
#define CGGPJFLLGID_CLONE_OFFSET UNITYSDK_OFFSET(0x1F376BE0)
#define CGGPJFLLGID_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1F376C70)
#define CGGPJFLLGID_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F376BB0)
#define CGGPJFLLGID_CTOR_OFFSET UNITYSDK_OFFSET(0x1F376BA0)
#define CGGPJFLLGID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F376DA0)
#define CGGPJFLLGID_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F376C90)
#define CGGPJFLLGID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F376E70)
#define CGGPJFLLGID_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F376B30)
#define CGGPJFLLGID_JKHFJOFLIAH_OFFSET UNITYSDK_OFFSET(0x1F376C60)
#define CGGPJFLLGID_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1F376C80)
#define CGGPJFLLGID_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F377130)
#define CGGPJFLLGID_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F3770F0)
#define CGGPJFLLGID_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F376B90)
#define CGGPJFLLGID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F376EA0)
#define CGGPJFLLGID_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F376F00)

inline static constexpr unsigned int CGGPJFLLGID_TypeDefinitionIndex = 30816;

	class CGGPJFLLGID : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BAHFIEBMLLO; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::CGGPJFLLGID*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CGGPJFLLGID*>**)UnitySDK::FromName("", "CGGPJFLLGID")->GetStaticField(0xB9C0);
		}

		// static const ::System::Object DDAHPJKBBMD; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGPJFLLGID_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CGGPJFLLGID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGGPJFLLGID*))((::PBYTE)hIl2Cpp + CGGPJFLLGID_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGGPJFLLGID_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CGGPJFLLGID*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CGGPJFLLGID*>*(*)())((::PBYTE)hIl2Cpp + CGGPJFLLGID_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGPJFLLGID_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CGGPJFLLGID* Clone()
		{
			return ((::CGGPJFLLGID*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGPJFLLGID_CLONE_OFFSET))(this);
		}

		::System::UInt32 BCNLAHMHJFH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGPJFLLGID_BCNLAHMHJFH_OFFSET))(this);
		}

		::System::Void JKHFJOFLIAH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGGPJFLLGID_JKHFJOFLIAH_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGPJFLLGID_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGGPJFLLGID_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CGGPJFLLGID_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CGGPJFLLGID* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CGGPJFLLGID*))((::PBYTE)hIl2Cpp + CGGPJFLLGID_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGPJFLLGID_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGPJFLLGID_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CGGPJFLLGID_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGPJFLLGID_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CGGPJFLLGID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGGPJFLLGID*))((::PBYTE)hIl2Cpp + CGGPJFLLGID_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CGGPJFLLGID_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
