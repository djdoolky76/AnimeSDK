#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCMHLOEGFBM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define DCMHLOEGFBM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1755D0)
#define DCMHLOEGFBM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E175990)
#define DCMHLOEGFBM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E174FE0)
#define DCMHLOEGFBM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E174F70)
#define DCMHLOEGFBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E174F60)
#define DCMHLOEGFBM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E175210)
#define DCMHLOEGFBM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1750E0)
#define DCMHLOEGFBM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1753A0)
#define DCMHLOEGFBM_GLJIMHLMNLP_OFFSET UNITYSDK_OFFSET(0x1E1750A0)
#define DCMHLOEGFBM_HGNKPBGLALL_OFFSET UNITYSDK_OFFSET(0x1E175090)
#define DCMHLOEGFBM_IIHMFDMFOPO_OFFSET UNITYSDK_OFFSET(0x1E1750D0)
#define DCMHLOEGFBM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E174EF0)
#define DCMHLOEGFBM_LMBAHHKNPEH_OFFSET UNITYSDK_OFFSET(0x1E1750B0)
#define DCMHLOEGFBM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1757B0)
#define DCMHLOEGFBM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E175710)
#define DCMHLOEGFBM_MKMAMKNLJGM_OFFSET UNITYSDK_OFFSET(0x1E1750C0)
#define DCMHLOEGFBM_OIGDPPKKNOK_OFFSET UNITYSDK_OFFSET(0x1E175080)
#define DCMHLOEGFBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E174F50)
#define DCMHLOEGFBM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E175430)
#define DCMHLOEGFBM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E175490)

	class DCMHLOEGFBM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* DALKEINMPBH; // 0x18
		::System::UInt32 JCJNOKBENEM; // 0x20
		::System::UInt32 LEFANFLPAHL; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DCMHLOEGFBM")->GetStaticField(0x15390);
		}

		// static const ::System::Object ODNDKKFAKKD; // 0x0
		// static const ::System::Object EMHCMMGELFE; // 0x0
		// static const ::System::Object DPPAFBAHEFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMHLOEGFBM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DCMHLOEGFBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCMHLOEGFBM*))((::PBYTE)hIl2Cpp + DCMHLOEGFBM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCMHLOEGFBM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DCMHLOEGFBM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMHLOEGFBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DCMHLOEGFBM* Clone()
		{
			return ((::DCMHLOEGFBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMHLOEGFBM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OIGDPPKKNOK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMHLOEGFBM_OIGDPPKKNOK_OFFSET))(this);
		}

		::System::Void HGNKPBGLALL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCMHLOEGFBM_HGNKPBGLALL_OFFSET))(this, a1);
		}

		::System::UInt32 GLJIMHLMNLP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMHLOEGFBM_GLJIMHLMNLP_OFFSET))(this);
		}

		::System::Void LMBAHHKNPEH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCMHLOEGFBM_LMBAHHKNPEH_OFFSET))(this, a1);
		}

		::Proto::ItemList* MKMAMKNLJGM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMHLOEGFBM_MKMAMKNLJGM_OFFSET))(this);
		}

		::System::Void IIHMFDMFOPO(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + DCMHLOEGFBM_IIHMFDMFOPO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCMHLOEGFBM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DCMHLOEGFBM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCMHLOEGFBM*))((::PBYTE)hIl2Cpp + DCMHLOEGFBM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMHLOEGFBM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMHLOEGFBM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DCMHLOEGFBM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMHLOEGFBM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DCMHLOEGFBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCMHLOEGFBM*))((::PBYTE)hIl2Cpp + DCMHLOEGFBM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DCMHLOEGFBM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
