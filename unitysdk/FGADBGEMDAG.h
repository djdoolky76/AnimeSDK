#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGADBGEMDAG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FGADBGEMDAG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E37A250)
#define FGADBGEMDAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E37A520)
#define FGADBGEMDAG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E379EA0)
#define FGADBGEMDAG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E379E70)
#define FGADBGEMDAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E379E60)
#define FGADBGEMDAG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E37A010)
#define FGADBGEMDAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E379F30)
#define FGADBGEMDAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E37A0E0)
#define FGADBGEMDAG_IKJEIEGDHLC_OFFSET UNITYSDK_OFFSET(0x1E379F00)
#define FGADBGEMDAG_IKNFGKDDGJI_OFFSET UNITYSDK_OFFSET(0x1E379EF0)
#define FGADBGEMDAG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E379E20)
#define FGADBGEMDAG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E37A3A0)
#define FGADBGEMDAG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E37A360)
#define FGADBGEMDAG_OLBJJLMMKHJ_OFFSET UNITYSDK_OFFSET(0x1E379F10)
#define FGADBGEMDAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E379E50)
#define FGADBGEMDAG_PKLHDPKFKPN_OFFSET UNITYSDK_OFFSET(0x1E379F20)
#define FGADBGEMDAG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E37A110)
#define FGADBGEMDAG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E37A170)

inline static constexpr unsigned int FGADBGEMDAG_TypeDefinitionIndex = 28088;

	class FGADBGEMDAG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LHKBDMIENNC; // 0x18
		::System::UInt32 KJIAPIKIDOH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FGADBGEMDAG")->GetStaticField(0x5E220);
		}

		// static const ::System::Object BMKIHDODJPN; // 0x0
		// static const ::System::Object PBIFBICAPII; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGADBGEMDAG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FGADBGEMDAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGADBGEMDAG*))((::PBYTE)hIl2Cpp + FGADBGEMDAG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGADBGEMDAG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FGADBGEMDAG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGADBGEMDAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FGADBGEMDAG* Clone()
		{
			return ((::FGADBGEMDAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGADBGEMDAG_CLONE_OFFSET))(this);
		}

		::System::UInt32 IKNFGKDDGJI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGADBGEMDAG_IKNFGKDDGJI_OFFSET))(this);
		}

		::System::Void IKJEIEGDHLC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGADBGEMDAG_IKJEIEGDHLC_OFFSET))(this, a1);
		}

		::System::UInt32 OLBJJLMMKHJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGADBGEMDAG_OLBJJLMMKHJ_OFFSET))(this);
		}

		::System::Void PKLHDPKFKPN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGADBGEMDAG_PKLHDPKFKPN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FGADBGEMDAG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FGADBGEMDAG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FGADBGEMDAG*))((::PBYTE)hIl2Cpp + FGADBGEMDAG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGADBGEMDAG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGADBGEMDAG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FGADBGEMDAG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGADBGEMDAG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FGADBGEMDAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGADBGEMDAG*))((::PBYTE)hIl2Cpp + FGADBGEMDAG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FGADBGEMDAG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
