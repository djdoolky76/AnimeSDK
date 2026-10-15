#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMDNHNAEPBE;
class KPNHGDGLICN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KMDNHNAEPBE_AABOOKNIJKN_OFFSET UNITYSDK_OFFSET(0x1E895330)
#define KMDNHNAEPBE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E895820)
#define KMDNHNAEPBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E895C40)
#define KMDNHNAEPBE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8952D0)
#define KMDNHNAEPBE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E895210)
#define KMDNHNAEPBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8951C0)
#define KMDNHNAEPBE_ECAABINLDDB_OFFSET UNITYSDK_OFFSET(0x1E895310)
#define KMDNHNAEPBE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8954B0)
#define KMDNHNAEPBE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E895350)
#define KMDNHNAEPBE_FEGIMNBKFHN_OFFSET UNITYSDK_OFFSET(0x1E895320)
#define KMDNHNAEPBE_GCMLDLLJGDJ_OFFSET UNITYSDK_OFFSET(0x1E895300)
#define KMDNHNAEPBE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8955E0)
#define KMDNHNAEPBE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E895180)
#define KMDNHNAEPBE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E895A50)
#define KMDNHNAEPBE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8959A0)
#define KMDNHNAEPBE_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1E895340)
#define KMDNHNAEPBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8951B0)
#define KMDNHNAEPBE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E895650)
#define KMDNHNAEPBE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8956B0)

inline static constexpr unsigned int KMDNHNAEPBE_TypeDefinitionIndex = 28380;

	class KMDNHNAEPBE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::KPNHGDGLICN*>* CBFGBDBJHID; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 FKAIMIIAGPK; // 0x20
		::System::UInt32 MLCHFINKHHM; // 0x24
		static ::Google::Protobuf::FieldCodec** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KMDNHNAEPBE")->GetStaticField(0x21EC0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KMDNHNAEPBE")->GetStaticField(0x21EC8);
		}

		// static const ::System::Object OJOGFBJAPMA; // 0x0
		// static const ::System::Object HBIJBPKKMNN; // 0x0
		// static const ::System::Object IMGDAOEBONP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDNHNAEPBE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KMDNHNAEPBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMDNHNAEPBE*))((::PBYTE)hIl2Cpp + KMDNHNAEPBE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMDNHNAEPBE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KMDNHNAEPBE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDNHNAEPBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KMDNHNAEPBE* Clone()
		{
			return ((::KMDNHNAEPBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDNHNAEPBE_CLONE_OFFSET))(this);
		}

		::System::UInt32 GCMLDLLJGDJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDNHNAEPBE_GCMLDLLJGDJ_OFFSET))(this);
		}

		::System::Void ECAABINLDDB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMDNHNAEPBE_ECAABINLDDB_OFFSET))(this, a1);
		}

		::System::UInt32 FEGIMNBKFHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDNHNAEPBE_FEGIMNBKFHN_OFFSET))(this);
		}

		::System::Void AABOOKNIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMDNHNAEPBE_AABOOKNIJKN_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KPNHGDGLICN*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KPNHGDGLICN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDNHNAEPBE_MJOEMBBMBON_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMDNHNAEPBE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KMDNHNAEPBE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KMDNHNAEPBE*))((::PBYTE)hIl2Cpp + KMDNHNAEPBE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDNHNAEPBE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDNHNAEPBE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KMDNHNAEPBE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDNHNAEPBE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KMDNHNAEPBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMDNHNAEPBE*))((::PBYTE)hIl2Cpp + KMDNHNAEPBE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KMDNHNAEPBE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
