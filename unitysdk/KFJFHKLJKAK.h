#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFJFHKLJKAK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define KFJFHKLJKAK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E81B1C0)
#define KFJFHKLJKAK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E81B530)
#define KFJFHKLJKAK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E81AB90)
#define KFJFHKLJKAK_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E81AC80)
#define KFJFHKLJKAK_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E81AC20)
#define KFJFHKLJKAK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E81AB10)
#define KFJFHKLJKAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E81AB00)
#define KFJFHKLJKAK_DNGEOHDDIHA_OFFSET UNITYSDK_OFFSET(0x1E81AC70)
#define KFJFHKLJKAK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E81ADA0)
#define KFJFHKLJKAK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E81ACA0)
#define KFJFHKLJKAK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E81AC50)
#define KFJFHKLJKAK_FAHNIHCFNOG_OFFSET UNITYSDK_OFFSET(0x1E81AC60)
#define KFJFHKLJKAK_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E81AC30)
#define KFJFHKLJKAK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E81AF30)
#define KFJFHKLJKAK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E81AAC0)
#define KFJFHKLJKAK_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E81AC90)
#define KFJFHKLJKAK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E81B440)
#define KFJFHKLJKAK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E81B390)
#define KFJFHKLJKAK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E81AC40)
#define KFJFHKLJKAK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E81AAF0)
#define KFJFHKLJKAK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E81AFD0)
#define KFJFHKLJKAK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E81B030)

	class KFJFHKLJKAK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::UInt32 DDKDAHKMBFL; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KFJFHKLJKAK")->GetStaticField(0x13B80);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object OBJDFPPBDAA; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJFHKLJKAK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KFJFHKLJKAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFJFHKLJKAK*))((::PBYTE)hIl2Cpp + KFJFHKLJKAK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFJFHKLJKAK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KFJFHKLJKAK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJFHKLJKAK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KFJFHKLJKAK* Clone()
		{
			return ((::KFJFHKLJKAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJFHKLJKAK_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJFHKLJKAK_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + KFJFHKLJKAK_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJFHKLJKAK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFJFHKLJKAK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 FAHNIHCFNOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJFHKLJKAK_FAHNIHCFNOG_OFFSET))(this);
		}

		::System::Void DNGEOHDDIHA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFJFHKLJKAK_DNGEOHDDIHA_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJFHKLJKAK_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFJFHKLJKAK_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFJFHKLJKAK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KFJFHKLJKAK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KFJFHKLJKAK*))((::PBYTE)hIl2Cpp + KFJFHKLJKAK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJFHKLJKAK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJFHKLJKAK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KFJFHKLJKAK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJFHKLJKAK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KFJFHKLJKAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFJFHKLJKAK*))((::PBYTE)hIl2Cpp + KFJFHKLJKAK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KFJFHKLJKAK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
