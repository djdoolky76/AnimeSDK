#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFAAPIGOAEN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define AFAAPIGOAEN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F5E23D0)
#define AFAAPIGOAEN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5E26C0)
#define AFAAPIGOAEN_CLONE_OFFSET UNITYSDK_OFFSET(0x1F5E1D40)
#define AFAAPIGOAEN_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1F5E1E00)
#define AFAAPIGOAEN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F5E1CD0)
#define AFAAPIGOAEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5E1CC0)
#define AFAAPIGOAEN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F5E1F60)
#define AFAAPIGOAEN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F5E1E40)
#define AFAAPIGOAEN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F5E1E30)
#define AFAAPIGOAEN_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1F5E1E10)
#define AFAAPIGOAEN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F5E2100)
#define AFAAPIGOAEN_GFFLMNPLHJG_OFFSET UNITYSDK_OFFSET(0x1F5E1DF0)
#define AFAAPIGOAEN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F5E1C80)
#define AFAAPIGOAEN_LHOPHLMOHMJ_OFFSET UNITYSDK_OFFSET(0x1F5E1DD0)
#define AFAAPIGOAEN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F5E25D0)
#define AFAAPIGOAEN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F5E2520)
#define AFAAPIGOAEN_NGDLJINJKJP_OFFSET UNITYSDK_OFFSET(0x1F5E1DE0)
#define AFAAPIGOAEN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F5E1E20)
#define AFAAPIGOAEN_OGGIEJLNGHO_OFFSET UNITYSDK_OFFSET(0x1F5E1DC0)
#define AFAAPIGOAEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F5E1CB0)
#define AFAAPIGOAEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F5E21A0)
#define AFAAPIGOAEN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F5E2200)

inline static constexpr unsigned int AFAAPIGOAEN_TypeDefinitionIndex = 28512;

	class AFAAPIGOAEN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::System::Boolean BBJIDLMAPDF; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::UInt32 CGCDBPPFNIC; // 0x28
		static ::Google::Protobuf::MessageParser_1<::AFAAPIGOAEN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AFAAPIGOAEN*>**)UnitySDK::FromName("", "AFAAPIGOAEN")->GetStaticField(0x3D0F0);
		}

		// static const ::System::Object EKJIPCEFPOG; // 0x0
		// static const ::System::Object ODKEBLADOMK; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAAPIGOAEN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AFAAPIGOAEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFAAPIGOAEN*))((::PBYTE)hIl2Cpp + AFAAPIGOAEN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFAAPIGOAEN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AFAAPIGOAEN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AFAAPIGOAEN*>*(*)())((::PBYTE)hIl2Cpp + AFAAPIGOAEN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAAPIGOAEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AFAAPIGOAEN* Clone()
		{
			return ((::AFAAPIGOAEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAAPIGOAEN_CLONE_OFFSET))(this);
		}

		::System::Boolean OGGIEJLNGHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAAPIGOAEN_OGGIEJLNGHO_OFFSET))(this);
		}

		::System::Void LHOPHLMOHMJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AFAAPIGOAEN_LHOPHLMOHMJ_OFFSET))(this, a1);
		}

		::System::UInt32 NGDLJINJKJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAAPIGOAEN_NGDLJINJKJP_OFFSET))(this);
		}

		::System::Void GFFLMNPLHJG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFAAPIGOAEN_GFFLMNPLHJG_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAAPIGOAEN_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + AFAAPIGOAEN_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAAPIGOAEN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFAAPIGOAEN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFAAPIGOAEN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AFAAPIGOAEN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AFAAPIGOAEN*))((::PBYTE)hIl2Cpp + AFAAPIGOAEN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAAPIGOAEN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAAPIGOAEN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AFAAPIGOAEN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAAPIGOAEN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AFAAPIGOAEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFAAPIGOAEN*))((::PBYTE)hIl2Cpp + AFAAPIGOAEN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AFAAPIGOAEN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
