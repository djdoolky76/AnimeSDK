#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFLIOADBEDK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define DFLIOADBEDK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1A6540)
#define DFLIOADBEDK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1A6850)
#define DFLIOADBEDK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1A5EA0)
#define DFLIOADBEDK_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E1A5F30)
#define DFLIOADBEDK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1A5E20)
#define DFLIOADBEDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A5E10)
#define DFLIOADBEDK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1A60D0)
#define DFLIOADBEDK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1A5FB0)
#define DFLIOADBEDK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1A5FA0)
#define DFLIOADBEDK_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E1A5F40)
#define DFLIOADBEDK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1A6270)
#define DFLIOADBEDK_GFFLMNPLHJG_OFFSET UNITYSDK_OFFSET(0x1E1A5F80)
#define DFLIOADBEDK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1A5DD0)
#define DFLIOADBEDK_LHOPHLMOHMJ_OFFSET UNITYSDK_OFFSET(0x1E1A5F60)
#define DFLIOADBEDK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1A6750)
#define DFLIOADBEDK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1A66A0)
#define DFLIOADBEDK_NGDLJINJKJP_OFFSET UNITYSDK_OFFSET(0x1E1A5F70)
#define DFLIOADBEDK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1A5F90)
#define DFLIOADBEDK_OGGIEJLNGHO_OFFSET UNITYSDK_OFFSET(0x1E1A5F50)
#define DFLIOADBEDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1A5E00)
#define DFLIOADBEDK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1A6310)
#define DFLIOADBEDK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1A6370)

inline static constexpr unsigned int DFLIOADBEDK_TypeDefinitionIndex = 27916;

	class DFLIOADBEDK : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean BBJIDLMAPDF; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::UInt32 CGCDBPPFNIC; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DFLIOADBEDK")->GetStaticField(0x32EF0);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object EKJIPCEFPOG; // 0x0
		// static const ::System::Object ODKEBLADOMK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLIOADBEDK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DFLIOADBEDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFLIOADBEDK*))((::PBYTE)hIl2Cpp + DFLIOADBEDK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFLIOADBEDK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DFLIOADBEDK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLIOADBEDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DFLIOADBEDK* Clone()
		{
			return ((::DFLIOADBEDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLIOADBEDK_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLIOADBEDK_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + DFLIOADBEDK_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::Boolean OGGIEJLNGHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLIOADBEDK_OGGIEJLNGHO_OFFSET))(this);
		}

		::System::Void LHOPHLMOHMJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFLIOADBEDK_LHOPHLMOHMJ_OFFSET))(this, a1);
		}

		::System::UInt32 NGDLJINJKJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLIOADBEDK_NGDLJINJKJP_OFFSET))(this);
		}

		::System::Void GFFLMNPLHJG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFLIOADBEDK_GFFLMNPLHJG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLIOADBEDK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFLIOADBEDK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFLIOADBEDK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DFLIOADBEDK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFLIOADBEDK*))((::PBYTE)hIl2Cpp + DFLIOADBEDK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLIOADBEDK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLIOADBEDK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DFLIOADBEDK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLIOADBEDK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DFLIOADBEDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFLIOADBEDK*))((::PBYTE)hIl2Cpp + DFLIOADBEDK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DFLIOADBEDK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
