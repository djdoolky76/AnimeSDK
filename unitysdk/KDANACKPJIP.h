#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDANACKPJIP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KDANACKPJIP_BAMLOLEEIML_OFFSET UNITYSDK_OFFSET(0x1E7FC910)
#define KDANACKPJIP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7FCCD0)
#define KDANACKPJIP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7FD050)
#define KDANACKPJIP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7FC8B0)
#define KDANACKPJIP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7FC870)
#define KDANACKPJIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7FC860)
#define KDANACKPJIP_DFPNCEKLIHI_OFFSET UNITYSDK_OFFSET(0x1E7FC930)
#define KDANACKPJIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7FCA40)
#define KDANACKPJIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7FC960)
#define KDANACKPJIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7FCB10)
#define KDANACKPJIP_HFABLFGBGIM_OFFSET UNITYSDK_OFFSET(0x1E7FC950)
#define KDANACKPJIP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7FC820)
#define KDANACKPJIP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7FCEB0)
#define KDANACKPJIP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7FCE60)
#define KDANACKPJIP_OCFGMIMIHAF_OFFSET UNITYSDK_OFFSET(0x1E7FC940)
#define KDANACKPJIP_OKCNPELMAHN_OFFSET UNITYSDK_OFFSET(0x1E7FC920)
#define KDANACKPJIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7FC850)
#define KDANACKPJIP_PNKNFPCPAAI_OFFSET UNITYSDK_OFFSET(0x1E7FC900)
#define KDANACKPJIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7FCB40)
#define KDANACKPJIP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7FCBA0)

	class KDANACKPJIP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HLNJPHLMEPF; // 0x18
		::System::UInt32 IBNEONDCEIM; // 0x1C
		::System::UInt32 FKHIFCDFCKJ; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KDANACKPJIP")->GetStaticField(0x106B0);
		}

		// static const ::System::Object LCICMEPLFGE; // 0x0
		// static const ::System::Object MJKHJDCILPC; // 0x0
		// static const ::System::Object MLCKHDFEDAA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDANACKPJIP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KDANACKPJIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDANACKPJIP*))((::PBYTE)hIl2Cpp + KDANACKPJIP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDANACKPJIP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KDANACKPJIP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDANACKPJIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KDANACKPJIP* Clone()
		{
			return ((::KDANACKPJIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDANACKPJIP_CLONE_OFFSET))(this);
		}

		::System::UInt32 PNKNFPCPAAI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDANACKPJIP_PNKNFPCPAAI_OFFSET))(this);
		}

		::System::Void BAMLOLEEIML(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDANACKPJIP_BAMLOLEEIML_OFFSET))(this, a1);
		}

		::System::UInt32 OKCNPELMAHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDANACKPJIP_OKCNPELMAHN_OFFSET))(this);
		}

		::System::Void DFPNCEKLIHI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDANACKPJIP_DFPNCEKLIHI_OFFSET))(this, a1);
		}

		::System::UInt32 OCFGMIMIHAF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDANACKPJIP_OCFGMIMIHAF_OFFSET))(this);
		}

		::System::Void HFABLFGBGIM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDANACKPJIP_HFABLFGBGIM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDANACKPJIP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KDANACKPJIP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KDANACKPJIP*))((::PBYTE)hIl2Cpp + KDANACKPJIP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDANACKPJIP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDANACKPJIP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KDANACKPJIP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDANACKPJIP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KDANACKPJIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDANACKPJIP*))((::PBYTE)hIl2Cpp + KDANACKPJIP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KDANACKPJIP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
