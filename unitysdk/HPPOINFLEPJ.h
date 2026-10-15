#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDJKLJGDCID.h"
#include "unitysdk/HNBGMOIHOAN.h"
#include "unitysdk/System/Object.h"
class HPPOINFLEPJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HPPOINFLEPJ_AIONILPGDFG_OFFSET UNITYSDK_OFFSET(0x1E600E00)
#define HPPOINFLEPJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6012E0)
#define HPPOINFLEPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E601630)
#define HPPOINFLEPJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E600DA0)
#define HPPOINFLEPJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E600D10)
#define HPPOINFLEPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E600CC0)
#define HPPOINFLEPJ_DALEBJOICOF_OFFSET UNITYSDK_OFFSET(0x1E600E20)
#define HPPOINFLEPJ_EPFDENEPLOL_OFFSET UNITYSDK_OFFSET(0x1E600DF0)
#define HPPOINFLEPJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E600EE0)
#define HPPOINFLEPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E600E40)
#define HPPOINFLEPJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E600FE0)
#define HPPOINFLEPJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E600C50)
#define HPPOINFLEPJ_KBLGHGFHJIM_OFFSET UNITYSDK_OFFSET(0x1E600E10)
#define HPPOINFLEPJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E601550)
#define HPPOINFLEPJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6014F0)
#define HPPOINFLEPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E600CB0)
#define HPPOINFLEPJ_PEBHIONNHKD_OFFSET UNITYSDK_OFFSET(0x1E600E30)
#define HPPOINFLEPJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6010E0)
#define HPPOINFLEPJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E601140)

	class HPPOINFLEPJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EJGFMICPCLP; // 0x18
		::HNBGMOIHOAN OHFNMGCGAGG; // 0x20
		::FDJKLJGDCID AGDKNKDOIBJ; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HPPOINFLEPJ")->GetStaticField(0x52820);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_IBOBFDAMEHC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HPPOINFLEPJ")->GetStaticField(0x52828);
		}

		// static const ::System::Object AJPEEDNHODK; // 0x0
		// static const ::System::Object EDHJDCGBECJ; // 0x0
		// static const ::System::Object GPBAGEFEOLJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPOINFLEPJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HPPOINFLEPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPPOINFLEPJ*))((::PBYTE)hIl2Cpp + HPPOINFLEPJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPPOINFLEPJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HPPOINFLEPJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPOINFLEPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HPPOINFLEPJ* Clone()
		{
			return ((::HPPOINFLEPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPOINFLEPJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EPFDENEPLOL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPOINFLEPJ_EPFDENEPLOL_OFFSET))(this);
		}

		::HNBGMOIHOAN AIONILPGDFG()
		{
			return ((::HNBGMOIHOAN(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPOINFLEPJ_AIONILPGDFG_OFFSET))(this);
		}

		::System::Void KBLGHGFHJIM(::HNBGMOIHOAN a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNBGMOIHOAN))((::PBYTE)hIl2Cpp + HPPOINFLEPJ_KBLGHGFHJIM_OFFSET))(this, a1);
		}

		::FDJKLJGDCID DALEBJOICOF()
		{
			return ((::FDJKLJGDCID(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPOINFLEPJ_DALEBJOICOF_OFFSET))(this);
		}

		::System::Void PEBHIONNHKD(::FDJKLJGDCID a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDJKLJGDCID))((::PBYTE)hIl2Cpp + HPPOINFLEPJ_PEBHIONNHKD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HPPOINFLEPJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HPPOINFLEPJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPPOINFLEPJ*))((::PBYTE)hIl2Cpp + HPPOINFLEPJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPOINFLEPJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPOINFLEPJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HPPOINFLEPJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPOINFLEPJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HPPOINFLEPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPPOINFLEPJ*))((::PBYTE)hIl2Cpp + HPPOINFLEPJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HPPOINFLEPJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
