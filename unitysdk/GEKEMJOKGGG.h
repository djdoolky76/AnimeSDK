#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEKEMJOKGGG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GEKEMJOKGGG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E45B280)
#define GEKEMJOKGGG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E45B550)
#define GEKEMJOKGGG_CFIPDBNKANG_OFFSET UNITYSDK_OFFSET(0x1E45AF30)
#define GEKEMJOKGGG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E45AED0)
#define GEKEMJOKGGG_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E45AF40)
#define GEKEMJOKGGG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E45AEA0)
#define GEKEMJOKGGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E45AE90)
#define GEKEMJOKGGG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E45B040)
#define GEKEMJOKGGG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E45AF60)
#define GEKEMJOKGGG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E45B110)
#define GEKEMJOKGGG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E45AE50)
#define GEKEMJOKGGG_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E45AF50)
#define GEKEMJOKGGG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E45B3D0)
#define GEKEMJOKGGG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E45B390)
#define GEKEMJOKGGG_OEEIFLIJOIF_OFFSET UNITYSDK_OFFSET(0x1E45AF20)
#define GEKEMJOKGGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E45AE80)
#define GEKEMJOKGGG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E45B140)
#define GEKEMJOKGGG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E45B1A0)

inline static constexpr unsigned int GEKEMJOKGGG_TypeDefinitionIndex = 26308;

	class GEKEMJOKGGG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::UInt32 AMKFBNLEOOI; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GEKEMJOKGGG")->GetStaticField(0xDEB0);
		}

		// static const ::System::Object MABEMCMAJAH; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKEMJOKGGG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GEKEMJOKGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEKEMJOKGGG*))((::PBYTE)hIl2Cpp + GEKEMJOKGGG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEKEMJOKGGG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GEKEMJOKGGG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKEMJOKGGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GEKEMJOKGGG* Clone()
		{
			return ((::GEKEMJOKGGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKEMJOKGGG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OEEIFLIJOIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKEMJOKGGG_OEEIFLIJOIF_OFFSET))(this);
		}

		::System::Void CFIPDBNKANG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GEKEMJOKGGG_CFIPDBNKANG_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKEMJOKGGG_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GEKEMJOKGGG_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GEKEMJOKGGG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GEKEMJOKGGG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEKEMJOKGGG*))((::PBYTE)hIl2Cpp + GEKEMJOKGGG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKEMJOKGGG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKEMJOKGGG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GEKEMJOKGGG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKEMJOKGGG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GEKEMJOKGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEKEMJOKGGG*))((::PBYTE)hIl2Cpp + GEKEMJOKGGG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GEKEMJOKGGG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
