#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEEAHLMKAAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NEEAHLMKAAB_ADAHCAJBNOB_OFFSET UNITYSDK_OFFSET(0x1EAF1E60)
#define NEEAHLMKAAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAF2250)
#define NEEAHLMKAAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF25B0)
#define NEEAHLMKAAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAF1DA0)
#define NEEAHLMKAAB_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1EAF1E80)
#define NEEAHLMKAAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAF1D60)
#define NEEAHLMKAAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF1D50)
#define NEEAHLMKAAB_DIJGBBMKBHJ_OFFSET UNITYSDK_OFFSET(0x1EAF1E50)
#define NEEAHLMKAAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAF1F30)
#define NEEAHLMKAAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAF1EA0)
#define NEEAHLMKAAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAF2010)
#define NEEAHLMKAAB_JGKHEAFJLOI_OFFSET UNITYSDK_OFFSET(0x1EAF1E30)
#define NEEAHLMKAAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAF1CE0)
#define NEEAHLMKAAB_KENPOJKHGJB_OFFSET UNITYSDK_OFFSET(0x1EAF1E40)
#define NEEAHLMKAAB_MAEMCJNKMOI_OFFSET UNITYSDK_OFFSET(0x1EAF1E20)
#define NEEAHLMKAAB_MDBICAHKDGN_OFFSET UNITYSDK_OFFSET(0x1EAF1E70)
#define NEEAHLMKAAB_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1EAF1E90)
#define NEEAHLMKAAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAF2510)
#define NEEAHLMKAAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAF24C0)
#define NEEAHLMKAAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAF1D40)
#define NEEAHLMKAAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAF2060)
#define NEEAHLMKAAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAF20C0)

inline static constexpr unsigned int NEEAHLMKAAB_TypeDefinitionIndex = 27176;

	class NEEAHLMKAAB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::UInt32 BPHAEJMMPGF; // 0x1C
		::System::UInt32 DIHAPDNPDHC; // 0x20
		::System::Byte _padding0[0x4];
		::System::UInt64 FGEKJMADECN; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NEEAHLMKAAB")->GetStaticField(0x5DBB0);
		}

		// static const ::System::Object OJBCBIEJBOJ; // 0x0
		// static const ::System::Object DNDOBKCBHMK; // 0x0
		// static const ::System::Object IDOEGHDABLM; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEAHLMKAAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NEEAHLMKAAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEEAHLMKAAB*))((::PBYTE)hIl2Cpp + NEEAHLMKAAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEEAHLMKAAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NEEAHLMKAAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEAHLMKAAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NEEAHLMKAAB* Clone()
		{
			return ((::NEEAHLMKAAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEAHLMKAAB_CLONE_OFFSET))(this);
		}

		::System::UInt32 MAEMCJNKMOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEAHLMKAAB_MAEMCJNKMOI_OFFSET))(this);
		}

		::System::Void JGKHEAFJLOI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEEAHLMKAAB_JGKHEAFJLOI_OFFSET))(this, a1);
		}

		::System::UInt64 KENPOJKHGJB()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEAHLMKAAB_KENPOJKHGJB_OFFSET))(this);
		}

		::System::Void DIJGBBMKBHJ(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NEEAHLMKAAB_DIJGBBMKBHJ_OFFSET))(this, a1);
		}

		::System::UInt32 ADAHCAJBNOB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEAHLMKAAB_ADAHCAJBNOB_OFFSET))(this);
		}

		::System::Void MDBICAHKDGN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEEAHLMKAAB_MDBICAHKDGN_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEAHLMKAAB_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEEAHLMKAAB_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEEAHLMKAAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NEEAHLMKAAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NEEAHLMKAAB*))((::PBYTE)hIl2Cpp + NEEAHLMKAAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEAHLMKAAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEAHLMKAAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NEEAHLMKAAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEAHLMKAAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NEEAHLMKAAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEEAHLMKAAB*))((::PBYTE)hIl2Cpp + NEEAHLMKAAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NEEAHLMKAAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
