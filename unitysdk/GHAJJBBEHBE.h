#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHAJJBBEHBE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GHAJJBBEHBE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E480F00)
#define GHAJJBBEHBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E481280)
#define GHAJJBBEHBE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E480B10)
#define GHAJJBBEHBE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E480AD0)
#define GHAJJBBEHBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E480AC0)
#define GHAJJBBEHBE_DOMFMMCCBJE_OFFSET UNITYSDK_OFFSET(0x1E480BB0)
#define GHAJJBBEHBE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E480C70)
#define GHAJJBBEHBE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E480BF0)
#define GHAJJBBEHBE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E480D40)
#define GHAJJBBEHBE_HEBCDGLOGJG_OFFSET UNITYSDK_OFFSET(0x1E480B90)
#define GHAJJBBEHBE_IPIMDENCPOE_OFFSET UNITYSDK_OFFSET(0x1E480BC0)
#define GHAJJBBEHBE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E480A50)
#define GHAJJBBEHBE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4810E0)
#define GHAJJBBEHBE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E481090)
#define GHAJJBBEHBE_MHIOKGFIKMA_OFFSET UNITYSDK_OFFSET(0x1E480BD0)
#define GHAJJBBEHBE_PAOBAHCGMNN_OFFSET UNITYSDK_OFFSET(0x1E480BA0)
#define GHAJJBBEHBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E480AB0)
#define GHAJJBBEHBE_PPCKPAHKAPA_OFFSET UNITYSDK_OFFSET(0x1E480BE0)
#define GHAJJBBEHBE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E480D70)
#define GHAJJBBEHBE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E480DD0)

	class GHAJJBBEHBE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HKHDDCMNCJM; // 0x18
		::System::UInt32 BFGJMOAFJAI; // 0x1C
		::System::UInt32 EEEHEIOCDFC; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GHAJJBBEHBE")->GetStaticField(0x164F0);
		}

		// static const ::System::Object MBGMLEAKMEM; // 0x0
		// static const ::System::Object LOPFBLEMPJJ; // 0x0
		// static const ::System::Object FAHFAGPNBME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAJJBBEHBE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GHAJJBBEHBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHAJJBBEHBE*))((::PBYTE)hIl2Cpp + GHAJJBBEHBE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHAJJBBEHBE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GHAJJBBEHBE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAJJBBEHBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GHAJJBBEHBE* Clone()
		{
			return ((::GHAJJBBEHBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAJJBBEHBE_CLONE_OFFSET))(this);
		}

		::System::UInt32 HEBCDGLOGJG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAJJBBEHBE_HEBCDGLOGJG_OFFSET))(this);
		}

		::System::Void PAOBAHCGMNN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHAJJBBEHBE_PAOBAHCGMNN_OFFSET))(this, a1);
		}

		::System::UInt32 DOMFMMCCBJE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAJJBBEHBE_DOMFMMCCBJE_OFFSET))(this);
		}

		::System::Void IPIMDENCPOE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHAJJBBEHBE_IPIMDENCPOE_OFFSET))(this, a1);
		}

		::System::UInt32 MHIOKGFIKMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAJJBBEHBE_MHIOKGFIKMA_OFFSET))(this);
		}

		::System::Void PPCKPAHKAPA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHAJJBBEHBE_PPCKPAHKAPA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHAJJBBEHBE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GHAJJBBEHBE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHAJJBBEHBE*))((::PBYTE)hIl2Cpp + GHAJJBBEHBE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAJJBBEHBE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAJJBBEHBE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GHAJJBBEHBE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAJJBBEHBE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GHAJJBBEHBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHAJJBBEHBE*))((::PBYTE)hIl2Cpp + GHAJJBBEHBE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GHAJJBBEHBE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
