#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALBOKFLDIIH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALBOKFLDIIH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3D4720)
#define ALBOKFLDIIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3D4980)
#define ALBOKFLDIIH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3D4330)
#define ALBOKFLDIIH_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E3D4380)
#define ALBOKFLDIIH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3D42F0)
#define ALBOKFLDIIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D42E0)
#define ALBOKFLDIIH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3D44A0)
#define ALBOKFLDIIH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3D43C0)
#define ALBOKFLDIIH_FDMJPNPGFMP_OFFSET UNITYSDK_OFFSET(0x1E3D43A0)
#define ALBOKFLDIIH_FOKJAPODECN_OFFSET UNITYSDK_OFFSET(0x1E3D43B0)
#define ALBOKFLDIIH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3D4580)
#define ALBOKFLDIIH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3D42A0)
#define ALBOKFLDIIH_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E3D4390)
#define ALBOKFLDIIH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3D4800)
#define ALBOKFLDIIH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3D47C0)
#define ALBOKFLDIIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3D42D0)
#define ALBOKFLDIIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3D45B0)
#define ALBOKFLDIIH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3D4610)

inline static constexpr unsigned int ALBOKFLDIIH_TypeDefinitionIndex = 33466;

	class ALBOKFLDIIH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::Boolean BJJIDCJCOAN; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ALBOKFLDIIH")->GetStaticField(0x37860);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object HKEKJPMLKCP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBOKFLDIIH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALBOKFLDIIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALBOKFLDIIH*))((::PBYTE)hIl2Cpp + ALBOKFLDIIH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALBOKFLDIIH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ALBOKFLDIIH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBOKFLDIIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALBOKFLDIIH* Clone()
		{
			return ((::ALBOKFLDIIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBOKFLDIIH_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBOKFLDIIH_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALBOKFLDIIH_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean FDMJPNPGFMP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBOKFLDIIH_FDMJPNPGFMP_OFFSET))(this);
		}

		::System::Void FOKJAPODECN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ALBOKFLDIIH_FOKJAPODECN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALBOKFLDIIH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALBOKFLDIIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALBOKFLDIIH*))((::PBYTE)hIl2Cpp + ALBOKFLDIIH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBOKFLDIIH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBOKFLDIIH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALBOKFLDIIH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBOKFLDIIH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALBOKFLDIIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALBOKFLDIIH*))((::PBYTE)hIl2Cpp + ALBOKFLDIIH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALBOKFLDIIH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
