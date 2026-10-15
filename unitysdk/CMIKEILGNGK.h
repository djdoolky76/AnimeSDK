#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMIKEILGNGK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CMIKEILGNGK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0D4E20)
#define CMIKEILGNGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D51B0)
#define CMIKEILGNGK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0D4810)
#define CMIKEILGNGK_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E0D48B0)
#define CMIKEILGNGK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0D47D0)
#define CMIKEILGNGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D47C0)
#define CMIKEILGNGK_EMMJPJAMEFL_OFFSET UNITYSDK_OFFSET(0x1E0D4890)
#define CMIKEILGNGK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0D4950)
#define CMIKEILGNGK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0D48F0)
#define CMIKEILGNGK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0D4B50)
#define CMIKEILGNGK_IHDPOPKDFKO_OFFSET UNITYSDK_OFFSET(0x1E0D48D0)
#define CMIKEILGNGK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0D4750)
#define CMIKEILGNGK_JLCKFMGKJPB_OFFSET UNITYSDK_OFFSET(0x1E0D48A0)
#define CMIKEILGNGK_LAGHFAAHOBL_OFFSET UNITYSDK_OFFSET(0x1E0D48E0)
#define CMIKEILGNGK_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E0D48C0)
#define CMIKEILGNGK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0D4FA0)
#define CMIKEILGNGK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0D4F50)
#define CMIKEILGNGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0D47B0)
#define CMIKEILGNGK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0D4C70)
#define CMIKEILGNGK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0D4CD0)

inline static constexpr unsigned int CMIKEILGNGK_TypeDefinitionIndex = 25570;

	class CMIKEILGNGK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Double AHNEBPEHFLP; // 0x18
		::System::UInt32 PBPJNDEHDNK; // 0x20
		::System::UInt32 DNKADAFBILN; // 0x24
		static ::Google::Protobuf::MessageParser_1<::CMIKEILGNGK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CMIKEILGNGK*>**)UnitySDK::FromName("", "CMIKEILGNGK")->GetStaticField(0x1C1E0);
		}

		// static const ::System::Object JOKMIFACEIK; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object MELOPNPCNIH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIKEILGNGK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CMIKEILGNGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMIKEILGNGK*))((::PBYTE)hIl2Cpp + CMIKEILGNGK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMIKEILGNGK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CMIKEILGNGK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CMIKEILGNGK*>*(*)())((::PBYTE)hIl2Cpp + CMIKEILGNGK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIKEILGNGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CMIKEILGNGK* Clone()
		{
			return ((::CMIKEILGNGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIKEILGNGK_CLONE_OFFSET))(this);
		}

		::System::UInt32 EMMJPJAMEFL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIKEILGNGK_EMMJPJAMEFL_OFFSET))(this);
		}

		::System::Void JLCKFMGKJPB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CMIKEILGNGK_JLCKFMGKJPB_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIKEILGNGK_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CMIKEILGNGK_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Double IHDPOPKDFKO()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIKEILGNGK_IHDPOPKDFKO_OFFSET))(this);
		}

		::System::Void LAGHFAAHOBL(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CMIKEILGNGK_LAGHFAAHOBL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CMIKEILGNGK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CMIKEILGNGK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CMIKEILGNGK*))((::PBYTE)hIl2Cpp + CMIKEILGNGK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIKEILGNGK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIKEILGNGK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CMIKEILGNGK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIKEILGNGK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CMIKEILGNGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMIKEILGNGK*))((::PBYTE)hIl2Cpp + CMIKEILGNGK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CMIKEILGNGK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
