#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFJKOCDOAEH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HFJKOCDOAEH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E56D3A0)
#define HFJKOCDOAEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E56D670)
#define HFJKOCDOAEH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E56CFF0)
#define HFJKOCDOAEH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E56CFC0)
#define HFJKOCDOAEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E56CFB0)
#define HFJKOCDOAEH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E56D160)
#define HFJKOCDOAEH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E56D080)
#define HFJKOCDOAEH_FEJBEAKEEDG_OFFSET UNITYSDK_OFFSET(0x1E56D070)
#define HFJKOCDOAEH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E56D230)
#define HFJKOCDOAEH_IPCHOHLCJKO_OFFSET UNITYSDK_OFFSET(0x1E56D050)
#define HFJKOCDOAEH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E56CF70)
#define HFJKOCDOAEH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E56D4F0)
#define HFJKOCDOAEH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E56D4B0)
#define HFJKOCDOAEH_MKJCOIIFKDI_OFFSET UNITYSDK_OFFSET(0x1E56D040)
#define HFJKOCDOAEH_NDGPBKGJHPJ_OFFSET UNITYSDK_OFFSET(0x1E56D060)
#define HFJKOCDOAEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E56CFA0)
#define HFJKOCDOAEH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E56D260)
#define HFJKOCDOAEH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E56D2C0)

inline static constexpr unsigned int HFJKOCDOAEH_TypeDefinitionIndex = 33598;

	class HFJKOCDOAEH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FEALMCMAMPD; // 0x18
		::System::UInt32 JKMHOILMIMH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HFJKOCDOAEH")->GetStaticField(0x35930);
		}

		// static const ::System::Object JMPHMAAPDKJ; // 0x0
		// static const ::System::Object GMDKPEFKKBK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJKOCDOAEH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HFJKOCDOAEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFJKOCDOAEH*))((::PBYTE)hIl2Cpp + HFJKOCDOAEH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFJKOCDOAEH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HFJKOCDOAEH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJKOCDOAEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HFJKOCDOAEH* Clone()
		{
			return ((::HFJKOCDOAEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJKOCDOAEH_CLONE_OFFSET))(this);
		}

		::System::UInt32 MKJCOIIFKDI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJKOCDOAEH_MKJCOIIFKDI_OFFSET))(this);
		}

		::System::Void IPCHOHLCJKO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HFJKOCDOAEH_IPCHOHLCJKO_OFFSET))(this, a1);
		}

		::System::UInt32 NDGPBKGJHPJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJKOCDOAEH_NDGPBKGJHPJ_OFFSET))(this);
		}

		::System::Void FEJBEAKEEDG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HFJKOCDOAEH_FEJBEAKEEDG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFJKOCDOAEH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HFJKOCDOAEH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFJKOCDOAEH*))((::PBYTE)hIl2Cpp + HFJKOCDOAEH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJKOCDOAEH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJKOCDOAEH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HFJKOCDOAEH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJKOCDOAEH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HFJKOCDOAEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFJKOCDOAEH*))((::PBYTE)hIl2Cpp + HFJKOCDOAEH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HFJKOCDOAEH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
