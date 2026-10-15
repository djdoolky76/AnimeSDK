#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFKMKMPKIEF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MFKMKMPKIEF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA1A860)
#define MFKMKMPKIEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA1AC30)
#define MFKMKMPKIEF_CIOGIFBGEIF_OFFSET UNITYSDK_OFFSET(0x1EA1A480)
#define MFKMKMPKIEF_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA1A410)
#define MFKMKMPKIEF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA1A3D0)
#define MFKMKMPKIEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA1A3C0)
#define MFKMKMPKIEF_DFKFKOGAGHL_OFFSET UNITYSDK_OFFSET(0x1EA1A490)
#define MFKMKMPKIEF_EDFDONCOJEF_OFFSET UNITYSDK_OFFSET(0x1EA1A4B0)
#define MFKMKMPKIEF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA1A5A0)
#define MFKMKMPKIEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA1A4C0)
#define MFKMKMPKIEF_GCMNAFEEDOB_OFFSET UNITYSDK_OFFSET(0x1EA1A470)
#define MFKMKMPKIEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA1A680)
#define MFKMKMPKIEF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA1A380)
#define MFKMKMPKIEF_LCAGJNIBOLN_OFFSET UNITYSDK_OFFSET(0x1EA1A4A0)
#define MFKMKMPKIEF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA1AA90)
#define MFKMKMPKIEF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA1AA40)
#define MFKMKMPKIEF_NKLMJHMJCEB_OFFSET UNITYSDK_OFFSET(0x1EA1A460)
#define MFKMKMPKIEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA1A3B0)
#define MFKMKMPKIEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA1A6C0)
#define MFKMKMPKIEF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA1A720)

inline static constexpr unsigned int MFKMKMPKIEF_TypeDefinitionIndex = 26637;

	class MFKMKMPKIEF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 HOPAGPIGKBP; // 0x18
		::System::UInt32 KOGFKAFJNPB; // 0x20
		::System::UInt32 MHHNPOJHJLB; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MFKMKMPKIEF")->GetStaticField(0x4C850);
		}

		// static const ::System::Object PPBAGFBKGBK; // 0x0
		// static const ::System::Object OPCMCGBECKA; // 0x0
		// static const ::System::Object NPLLNGCEGLA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MFKMKMPKIEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFKMKMPKIEF*))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFKMKMPKIEF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MFKMKMPKIEF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MFKMKMPKIEF* Clone()
		{
			return ((::MFKMKMPKIEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_CLONE_OFFSET))(this);
		}

		::System::UInt32 NKLMJHMJCEB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_NKLMJHMJCEB_OFFSET))(this);
		}

		::System::Void GCMNAFEEDOB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_GCMNAFEEDOB_OFFSET))(this, a1);
		}

		::System::UInt64 CIOGIFBGEIF()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_CIOGIFBGEIF_OFFSET))(this);
		}

		::System::Void DFKFKOGAGHL(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_DFKFKOGAGHL_OFFSET))(this, a1);
		}

		::System::UInt32 LCAGJNIBOLN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_LCAGJNIBOLN_OFFSET))(this);
		}

		::System::Void EDFDONCOJEF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_EDFDONCOJEF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MFKMKMPKIEF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MFKMKMPKIEF*))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MFKMKMPKIEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFKMKMPKIEF*))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
