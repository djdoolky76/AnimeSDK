#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOLAHHGIFHA;
class MHNNEFBOPIE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MHNNEFBOPIE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA38E50)
#define MHNNEFBOPIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA391D0)
#define MHNNEFBOPIE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA38940)
#define MHNNEFBOPIE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA38880)
#define MHNNEFBOPIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA38830)
#define MHNNEFBOPIE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA38B50)
#define MHNNEFBOPIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA389C0)
#define MHNNEFBOPIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA38C80)
#define MHNNEFBOPIE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA387C0)
#define MHNNEFBOPIE_KJILKDCCLNM_OFFSET UNITYSDK_OFFSET(0x1EA389A0)
#define MHNNEFBOPIE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA39000)
#define MHNNEFBOPIE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA38F60)
#define MHNNEFBOPIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA38820)
#define MHNNEFBOPIE_PGAOGGNFFNG_OFFSET UNITYSDK_OFFSET(0x1EA38990)
#define MHNNEFBOPIE_PPMPCAGMGLI_OFFSET UNITYSDK_OFFSET(0x1EA389B0)
#define MHNNEFBOPIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA38CF0)
#define MHNNEFBOPIE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA38D50)

	class MHNNEFBOPIE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JOLAHHGIFHA*>* NEDMGFEPOKH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 LMFIGBEHMJE; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MHNNEFBOPIE")->GetStaticField(0x52730);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_HOGJAOAAPBO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MHNNEFBOPIE")->GetStaticField(0x52738);
		}

		// static const ::System::Object HFNMBCJHMFM; // 0x0
		// static const ::System::Object GJEJNKBBMCD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MHNNEFBOPIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHNNEFBOPIE*))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHNNEFBOPIE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MHNNEFBOPIE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MHNNEFBOPIE* Clone()
		{
			return ((::MHNNEFBOPIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_CLONE_OFFSET))(this);
		}

		::System::UInt32 PGAOGGNFFNG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_PGAOGGNFFNG_OFFSET))(this);
		}

		::System::Void KJILKDCCLNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_KJILKDCCLNM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JOLAHHGIFHA*>* PPMPCAGMGLI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JOLAHHGIFHA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_PPMPCAGMGLI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MHNNEFBOPIE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHNNEFBOPIE*))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MHNNEFBOPIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHNNEFBOPIE*))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MHNNEFBOPIE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
