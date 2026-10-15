#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLPKGAGBKAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OLPKGAGBKAB_APJDGDGGINK_OFFSET UNITYSDK_OFFSET(0x1DEAD140)
#define OLPKGAGBKAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEAD4A0)
#define OLPKGAGBKAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEAD6C0)
#define OLPKGAGBKAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEAD0F0)
#define OLPKGAGBKAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEAD0C0)
#define OLPKGAGBKAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEAD0B0)
#define OLPKGAGBKAB_DJOPCBMKNEH_OFFSET UNITYSDK_OFFSET(0x1DEAD130)
#define OLPKGAGBKAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEAD220)
#define OLPKGAGBKAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEAD150)
#define OLPKGAGBKAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEAD390)
#define OLPKGAGBKAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEAD070)
#define OLPKGAGBKAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEAD560)
#define OLPKGAGBKAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEAD530)
#define OLPKGAGBKAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEAD0A0)
#define OLPKGAGBKAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEAD3C0)
#define OLPKGAGBKAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEAD420)

inline static constexpr unsigned int OLPKGAGBKAB_TypeDefinitionIndex = 31055;

	class OLPKGAGBKAB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FPHAKFEACJH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OLPKGAGBKAB")->GetStaticField(0x243F0);
		}

		// static const ::System::Object HAFNMPMFJII; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPKGAGBKAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OLPKGAGBKAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLPKGAGBKAB*))((::PBYTE)hIl2Cpp + OLPKGAGBKAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLPKGAGBKAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OLPKGAGBKAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPKGAGBKAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OLPKGAGBKAB* Clone()
		{
			return ((::OLPKGAGBKAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPKGAGBKAB_CLONE_OFFSET))(this);
		}

		::System::UInt32 DJOPCBMKNEH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPKGAGBKAB_DJOPCBMKNEH_OFFSET))(this);
		}

		::System::Void APJDGDGGINK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLPKGAGBKAB_APJDGDGGINK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OLPKGAGBKAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OLPKGAGBKAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OLPKGAGBKAB*))((::PBYTE)hIl2Cpp + OLPKGAGBKAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPKGAGBKAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPKGAGBKAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OLPKGAGBKAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPKGAGBKAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OLPKGAGBKAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLPKGAGBKAB*))((::PBYTE)hIl2Cpp + OLPKGAGBKAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OLPKGAGBKAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
