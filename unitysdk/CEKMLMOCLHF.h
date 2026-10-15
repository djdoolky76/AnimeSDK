#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEKMLMOCLHF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define CEKMLMOCLHF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0984A0)
#define CEKMLMOCLHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0988A0)
#define CEKMLMOCLHF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E097E80)
#define CEKMLMOCLHF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E097D80)
#define CEKMLMOCLHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E097D30)
#define CEKMLMOCLHF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E097FA0)
#define CEKMLMOCLHF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E097F40)
#define CEKMLMOCLHF_FHEIFCBDCFB_OFFSET UNITYSDK_OFFSET(0x1E097F00)
#define CEKMLMOCLHF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E098190)
#define CEKMLMOCLHF_HDHCMCJDIGL_OFFSET UNITYSDK_OFFSET(0x1E097ED0)
#define CEKMLMOCLHF_IGHHFLHPCDN_OFFSET UNITYSDK_OFFSET(0x1E097F20)
#define CEKMLMOCLHF_JGKCDIFEMPL_OFFSET UNITYSDK_OFFSET(0x1E097F10)
#define CEKMLMOCLHF_JGLKJJBBBIF_OFFSET UNITYSDK_OFFSET(0x1E097EF0)
#define CEKMLMOCLHF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E097CC0)
#define CEKMLMOCLHF_JMNBNEMMFAP_OFFSET UNITYSDK_OFFSET(0x1E097F30)
#define CEKMLMOCLHF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E098750)
#define CEKMLMOCLHF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E098660)
#define CEKMLMOCLHF_NAFNOPGNIII_OFFSET UNITYSDK_OFFSET(0x1E097EE0)
#define CEKMLMOCLHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E097D20)
#define CEKMLMOCLHF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E098280)
#define CEKMLMOCLHF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0982E0)

inline static constexpr unsigned int CEKMLMOCLHF_TypeDefinitionIndex = 28044;

	class CEKMLMOCLHF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Proto::ItemList*>* GLHHMCPDLJH; // 0x18
		::Proto::ItemList* JHKKMAPFKPG; // 0x20
		::System::UInt32 EHCFPHJABDL; // 0x28
		::System::UInt32 AJPNGCJCMEB; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::CEKMLMOCLHF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CEKMLMOCLHF*>**)UnitySDK::FromName("", "CEKMLMOCLHF")->GetStaticField(0x124A0);
		}

		static ::System::Object** StaticGet_GEJBJICMPFD()
		{
			return (::System::Object**)UnitySDK::FromName("", "CEKMLMOCLHF")->GetStaticField(0x124A8);
		}

		// static const ::System::Object CNOFODIOBIE; // 0x0
		// static const ::System::Object FEGJODHHKKJ; // 0x0
		// static const ::System::Object FBCFBAPNOGL; // 0x0
		// static const ::System::Object KFBMOBCOKOB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKMLMOCLHF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CEKMLMOCLHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEKMLMOCLHF*))((::PBYTE)hIl2Cpp + CEKMLMOCLHF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEKMLMOCLHF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CEKMLMOCLHF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CEKMLMOCLHF*>*(*)())((::PBYTE)hIl2Cpp + CEKMLMOCLHF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKMLMOCLHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CEKMLMOCLHF* Clone()
		{
			return ((::CEKMLMOCLHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKMLMOCLHF_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* HDHCMCJDIGL()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKMLMOCLHF_HDHCMCJDIGL_OFFSET))(this);
		}

		::System::Void NAFNOPGNIII(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CEKMLMOCLHF_NAFNOPGNIII_OFFSET))(this, a1);
		}

		::System::UInt32 JGLKJJBBBIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKMLMOCLHF_JGLKJJBBBIF_OFFSET))(this);
		}

		::System::Void FHEIFCBDCFB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEKMLMOCLHF_FHEIFCBDCFB_OFFSET))(this, a1);
		}

		::System::UInt32 JGKCDIFEMPL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKMLMOCLHF_JGKCDIFEMPL_OFFSET))(this);
		}

		::System::Void IGHHFLHPCDN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEKMLMOCLHF_IGHHFLHPCDN_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Proto::ItemList*>* JMNBNEMMFAP()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Proto::ItemList*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKMLMOCLHF_JMNBNEMMFAP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CEKMLMOCLHF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CEKMLMOCLHF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CEKMLMOCLHF*))((::PBYTE)hIl2Cpp + CEKMLMOCLHF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKMLMOCLHF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKMLMOCLHF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CEKMLMOCLHF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKMLMOCLHF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CEKMLMOCLHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEKMLMOCLHF*))((::PBYTE)hIl2Cpp + CEKMLMOCLHF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CEKMLMOCLHF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
