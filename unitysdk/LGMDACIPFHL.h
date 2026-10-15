#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGMDACIPFHL;
class PKOMDBGFMBK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define LGMDACIPFHL_AMEFBODJIHJ_OFFSET UNITYSDK_OFFSET(0x1E956200)
#define LGMDACIPFHL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9566C0)
#define LGMDACIPFHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E956B10)
#define LGMDACIPFHL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9561C0)
#define LGMDACIPFHL_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E956220)
#define LGMDACIPFHL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9560F0)
#define LGMDACIPFHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9560B0)
#define LGMDACIPFHL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E956270)
#define LGMDACIPFHL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E956240)
#define LGMDACIPFHL_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E956230)
#define LGMDACIPFHL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E956450)
#define LGMDACIPFHL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E956070)
#define LGMDACIPFHL_KMANAJJOLLP_OFFSET UNITYSDK_OFFSET(0x1E956210)
#define LGMDACIPFHL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9568F0)
#define LGMDACIPFHL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9567E0)
#define LGMDACIPFHL_MKMAMKNLJGM_OFFSET UNITYSDK_OFFSET(0x1E9561F0)
#define LGMDACIPFHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9560A0)
#define LGMDACIPFHL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E956530)
#define LGMDACIPFHL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E956590)

	class LGMDACIPFHL : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::PKOMDBGFMBK*>* DALKEINMPBH; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 AAGAKAIKGCM; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LGMDACIPFHL")->GetStaticField(0x3C700);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_KHPCDHPFCHE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LGMDACIPFHL")->GetStaticField(0x3C708);
		}

		// static const ::System::Object DPPAFBAHEFH; // 0x0
		// static const ::System::Object MGPGDLIJKLM; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMDACIPFHL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LGMDACIPFHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGMDACIPFHL*))((::PBYTE)hIl2Cpp + LGMDACIPFHL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGMDACIPFHL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LGMDACIPFHL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMDACIPFHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LGMDACIPFHL* Clone()
		{
			return ((::LGMDACIPFHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMDACIPFHL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PKOMDBGFMBK*>* MKMAMKNLJGM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PKOMDBGFMBK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMDACIPFHL_MKMAMKNLJGM_OFFSET))(this);
		}

		::System::UInt32 AMEFBODJIHJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMDACIPFHL_AMEFBODJIHJ_OFFSET))(this);
		}

		::System::Void KMANAJJOLLP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGMDACIPFHL_KMANAJJOLLP_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMDACIPFHL_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + LGMDACIPFHL_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGMDACIPFHL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LGMDACIPFHL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGMDACIPFHL*))((::PBYTE)hIl2Cpp + LGMDACIPFHL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMDACIPFHL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMDACIPFHL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LGMDACIPFHL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMDACIPFHL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LGMDACIPFHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGMDACIPFHL*))((::PBYTE)hIl2Cpp + LGMDACIPFHL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LGMDACIPFHL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
