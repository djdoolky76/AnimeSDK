#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLPENACKJJE;
class OBIMHNFFLEM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OBIMHNFFLEM_AFJGHICACON_OFFSET UNITYSDK_OFFSET(0x1EBAF9A0)
#define OBIMHNFFLEM_BODJOHPCDJO_OFFSET UNITYSDK_OFFSET(0x1EBAF990)
#define OBIMHNFFLEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EBAFE60)
#define OBIMHNFFLEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBB0170)
#define OBIMHNFFLEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EBAF940)
#define OBIMHNFFLEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBAF810)
#define OBIMHNFFLEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBAF780)
#define OBIMHNFFLEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EBAFA30)
#define OBIMHNFFLEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EBAF9D0)
#define OBIMHNFFLEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EBAFB80)
#define OBIMHNFFLEM_HONGLJECAAC_OFFSET UNITYSDK_OFFSET(0x1EBAF9B0)
#define OBIMHNFFLEM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EBAF710)
#define OBIMHNFFLEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EBB0020)
#define OBIMHNFFLEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EBAFF90)
#define OBIMHNFFLEM_ODFJCCLFJNF_OFFSET UNITYSDK_OFFSET(0x1EBAF9C0)
#define OBIMHNFFLEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EBAF770)
#define OBIMHNFFLEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBAFCC0)
#define OBIMHNFFLEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EBAFD20)

	class OBIMHNFFLEM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::CLPENACKJJE*>* BFEOPMGKICK; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AFNHANNCAMC; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 ODCKBAEKGJG; // 0x28
		static ::System::Object** StaticGet_HKOMKMGHLIO()
		{
			return (::System::Object**)UnitySDK::FromName("", "OBIMHNFFLEM")->GetStaticField(0x10630);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_FCNMONMFJEF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OBIMHNFFLEM")->GetStaticField(0x10638);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OBIMHNFFLEM")->GetStaticField(0x10640);
		}

		// static const ::System::Object BDHJLOLMAKK; // 0x0
		// static const ::System::Object GEJEJNNMGGP; // 0x0
		// static const ::System::Object BNDFLMPFBCL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIMHNFFLEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OBIMHNFFLEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBIMHNFFLEM*))((::PBYTE)hIl2Cpp + OBIMHNFFLEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBIMHNFFLEM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OBIMHNFFLEM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIMHNFFLEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OBIMHNFFLEM* Clone()
		{
			return ((::OBIMHNFFLEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIMHNFFLEM_CLONE_OFFSET))(this);
		}

		::System::UInt32 BODJOHPCDJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIMHNFFLEM_BODJOHPCDJO_OFFSET))(this);
		}

		::System::Void AFJGHICACON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBIMHNFFLEM_AFJGHICACON_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HONGLJECAAC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIMHNFFLEM_HONGLJECAAC_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::CLPENACKJJE*>* ODFJCCLFJNF()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::CLPENACKJJE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIMHNFFLEM_ODFJCCLFJNF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBIMHNFFLEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OBIMHNFFLEM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OBIMHNFFLEM*))((::PBYTE)hIl2Cpp + OBIMHNFFLEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIMHNFFLEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIMHNFFLEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OBIMHNFFLEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIMHNFFLEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OBIMHNFFLEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBIMHNFFLEM*))((::PBYTE)hIl2Cpp + OBIMHNFFLEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OBIMHNFFLEM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
