#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFFDDJHNJPN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GFFDDJHNJPN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4672B0)
#define GFFDDJHNJPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E467580)
#define GFFDDJHNJPN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E466EB0)
#define GFFDDJHNJPN_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E466F40)
#define GFFDDJHNJPN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E466E80)
#define GFFDDJHNJPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E466E70)
#define GFFDDJHNJPN_EIGGOMFFLGG_OFFSET UNITYSDK_OFFSET(0x1E466F30)
#define GFFDDJHNJPN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E467070)
#define GFFDDJHNJPN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E466F60)
#define GFFDDJHNJPN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E467140)
#define GFFDDJHNJPN_GJFLEDCJGPG_OFFSET UNITYSDK_OFFSET(0x1E466F20)
#define GFFDDJHNJPN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E466E00)
#define GFFDDJHNJPN_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E466F50)
#define GFFDDJHNJPN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E467400)
#define GFFDDJHNJPN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4673C0)
#define GFFDDJHNJPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E466E60)
#define GFFDDJHNJPN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E467170)
#define GFFDDJHNJPN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4671D0)

inline static constexpr unsigned int GFFDDJHNJPN_TypeDefinitionIndex = 34376;

	class GFFDDJHNJPN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::UInt32 JEPIGMEMEKE; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::GFFDDJHNJPN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GFFDDJHNJPN*>**)UnitySDK::FromName("", "GFFDDJHNJPN")->GetStaticField(0x137A0);
		}

		// static const ::System::Object GEPLKKBDGGD; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFDDJHNJPN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GFFDDJHNJPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFFDDJHNJPN*))((::PBYTE)hIl2Cpp + GFFDDJHNJPN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFFDDJHNJPN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GFFDDJHNJPN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GFFDDJHNJPN*>*(*)())((::PBYTE)hIl2Cpp + GFFDDJHNJPN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFDDJHNJPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFFDDJHNJPN* Clone()
		{
			return ((::GFFDDJHNJPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFDDJHNJPN_CLONE_OFFSET))(this);
		}

		::System::UInt32 GJFLEDCJGPG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFDDJHNJPN_GJFLEDCJGPG_OFFSET))(this);
		}

		::System::Void EIGGOMFFLGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFFDDJHNJPN_EIGGOMFFLGG_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFDDJHNJPN_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFFDDJHNJPN_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFFDDJHNJPN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GFFDDJHNJPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFFDDJHNJPN*))((::PBYTE)hIl2Cpp + GFFDDJHNJPN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFDDJHNJPN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFDDJHNJPN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GFFDDJHNJPN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFDDJHNJPN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GFFDDJHNJPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFFDDJHNJPN*))((::PBYTE)hIl2Cpp + GFFDDJHNJPN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GFFDDJHNJPN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
