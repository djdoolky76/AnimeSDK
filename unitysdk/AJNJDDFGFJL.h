#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJNJDDFGFJL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AJNJDDFGFJL_ADAHCAJBNOB_OFFSET UNITYSDK_OFFSET(0x1E3C5330)
#define AJNJDDFGFJL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3C5740)
#define AJNJDDFGFJL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C5A80)
#define AJNJDDFGFJL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3C5290)
#define AJNJDDFGFJL_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E3C5350)
#define AJNJDDFGFJL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3C5250)
#define AJNJDDFGFJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C5240)
#define AJNJDDFGFJL_DIJGBBMKBHJ_OFFSET UNITYSDK_OFFSET(0x1E3C5320)
#define AJNJDDFGFJL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3C5420)
#define AJNJDDFGFJL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3C5390)
#define AJNJDDFGFJL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3C5500)
#define AJNJDDFGFJL_JGKHEAFJLOI_OFFSET UNITYSDK_OFFSET(0x1E3C5380)
#define AJNJDDFGFJL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3C51D0)
#define AJNJDDFGFJL_KENPOJKHGJB_OFFSET UNITYSDK_OFFSET(0x1E3C5310)
#define AJNJDDFGFJL_MAEMCJNKMOI_OFFSET UNITYSDK_OFFSET(0x1E3C5370)
#define AJNJDDFGFJL_MDBICAHKDGN_OFFSET UNITYSDK_OFFSET(0x1E3C5340)
#define AJNJDDFGFJL_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E3C5360)
#define AJNJDDFGFJL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3C59E0)
#define AJNJDDFGFJL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3C5990)
#define AJNJDDFGFJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3C5230)
#define AJNJDDFGFJL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3C5550)
#define AJNJDDFGFJL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3C55B0)

inline static constexpr unsigned int AJNJDDFGFJL_TypeDefinitionIndex = 27172;

	class AJNJDDFGFJL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 FGEKJMADECN; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x20
		::System::UInt32 BPHAEJMMPGF; // 0x24
		::System::UInt32 DIHAPDNPDHC; // 0x28
		static ::Google::Protobuf::MessageParser_1<::AJNJDDFGFJL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AJNJDDFGFJL*>**)UnitySDK::FromName("", "AJNJDDFGFJL")->GetStaticField(0x35D40);
		}

		// static const ::System::Object DNDOBKCBHMK; // 0x0
		// static const ::System::Object IDOEGHDABLM; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object OJBCBIEJBOJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNJDDFGFJL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AJNJDDFGFJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJNJDDFGFJL*))((::PBYTE)hIl2Cpp + AJNJDDFGFJL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJNJDDFGFJL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AJNJDDFGFJL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AJNJDDFGFJL*>*(*)())((::PBYTE)hIl2Cpp + AJNJDDFGFJL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNJDDFGFJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AJNJDDFGFJL* Clone()
		{
			return ((::AJNJDDFGFJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNJDDFGFJL_CLONE_OFFSET))(this);
		}

		::System::UInt64 KENPOJKHGJB()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNJDDFGFJL_KENPOJKHGJB_OFFSET))(this);
		}

		::System::Void DIJGBBMKBHJ(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + AJNJDDFGFJL_DIJGBBMKBHJ_OFFSET))(this, a1);
		}

		::System::UInt32 ADAHCAJBNOB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNJDDFGFJL_ADAHCAJBNOB_OFFSET))(this);
		}

		::System::Void MDBICAHKDGN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJNJDDFGFJL_MDBICAHKDGN_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNJDDFGFJL_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJNJDDFGFJL_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 MAEMCJNKMOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNJDDFGFJL_MAEMCJNKMOI_OFFSET))(this);
		}

		::System::Void JGKHEAFJLOI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJNJDDFGFJL_JGKHEAFJLOI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AJNJDDFGFJL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AJNJDDFGFJL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJNJDDFGFJL*))((::PBYTE)hIl2Cpp + AJNJDDFGFJL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNJDDFGFJL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNJDDFGFJL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AJNJDDFGFJL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNJDDFGFJL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AJNJDDFGFJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJNJDDFGFJL*))((::PBYTE)hIl2Cpp + AJNJDDFGFJL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AJNJDDFGFJL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
