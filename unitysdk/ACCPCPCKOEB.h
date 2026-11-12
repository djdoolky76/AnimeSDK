#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACCPCPCKOEB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define ACCPCPCKOEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EFDBF30)
#define ACCPCPCKOEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFDC320)
#define ACCPCPCKOEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EFDB8F0)
#define ACCPCPCKOEB_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1EFDB9C0)
#define ACCPCPCKOEB_CPCMJBDMODO_OFFSET UNITYSDK_OFFSET(0x1EFDB990)
#define ACCPCPCKOEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EFDB870)
#define ACCPCPCKOEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFDB860)
#define ACCPCPCKOEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EFDBB30)
#define ACCPCPCKOEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EFDBA20)
#define ACCPCPCKOEB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EFDBA10)
#define ACCPCPCKOEB_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1EFDB9D0)
#define ACCPCPCKOEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EFDBC40)
#define ACCPCPCKOEB_GOPLCGGEACN_OFFSET UNITYSDK_OFFSET(0x1EFDB980)
#define ACCPCPCKOEB_HDHIOOHHINM_OFFSET UNITYSDK_OFFSET(0x1EFDB9E0)
#define ACCPCPCKOEB_HFNKNOLMOAG_OFFSET UNITYSDK_OFFSET(0x1EFDB9A0)
#define ACCPCPCKOEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EFDB820)
#define ACCPCPCKOEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EFDC220)
#define ACCPCPCKOEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EFDC170)
#define ACCPCPCKOEB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EFDBA00)
#define ACCPCPCKOEB_OGDJPFPFABK_OFFSET UNITYSDK_OFFSET(0x1EFDB9F0)
#define ACCPCPCKOEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EFDB850)
#define ACCPCPCKOEB_PMNNGMDEDIB_OFFSET UNITYSDK_OFFSET(0x1EFDB9B0)
#define ACCPCPCKOEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EFDBCE0)
#define ACCPCPCKOEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EFDBD40)

inline static constexpr unsigned int ACCPCPCKOEB_TypeDefinitionIndex = 34790;

	class ACCPCPCKOEB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 CKHHCDKNCID; // 0x24
		::System::UInt32 PGEPABHJHCM; // 0x28
		::System::UInt32 IKKLADEKOON; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::ACCPCPCKOEB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ACCPCPCKOEB*>**)UnitySDK::FromName("", "ACCPCPCKOEB")->GetStaticField(0x35CF0);
		}

		// static const ::System::Object MJGKNNHCJCH; // 0x0
		// static const ::System::Object LCKGAJBNODP; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object HIEKGFGLCML; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCPCPCKOEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ACCPCPCKOEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACCPCPCKOEB*))((::PBYTE)hIl2Cpp + ACCPCPCKOEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACCPCPCKOEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ACCPCPCKOEB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ACCPCPCKOEB*>*(*)())((::PBYTE)hIl2Cpp + ACCPCPCKOEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCPCPCKOEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ACCPCPCKOEB* Clone()
		{
			return ((::ACCPCPCKOEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCPCPCKOEB_CLONE_OFFSET))(this);
		}

		::System::UInt32 GOPLCGGEACN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCPCPCKOEB_GOPLCGGEACN_OFFSET))(this);
		}

		::System::Void CPCMJBDMODO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACCPCPCKOEB_CPCMJBDMODO_OFFSET))(this, a1);
		}

		::System::UInt32 HFNKNOLMOAG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCPCPCKOEB_HFNKNOLMOAG_OFFSET))(this);
		}

		::System::Void PMNNGMDEDIB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACCPCPCKOEB_PMNNGMDEDIB_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCPCPCKOEB_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + ACCPCPCKOEB_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 HDHIOOHHINM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCPCPCKOEB_HDHIOOHHINM_OFFSET))(this);
		}

		::System::Void OGDJPFPFABK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACCPCPCKOEB_OGDJPFPFABK_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCPCPCKOEB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACCPCPCKOEB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ACCPCPCKOEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ACCPCPCKOEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ACCPCPCKOEB*))((::PBYTE)hIl2Cpp + ACCPCPCKOEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCPCPCKOEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCPCPCKOEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ACCPCPCKOEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCPCPCKOEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ACCPCPCKOEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACCPCPCKOEB*))((::PBYTE)hIl2Cpp + ACCPCPCKOEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ACCPCPCKOEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
