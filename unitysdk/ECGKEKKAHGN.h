#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECGKEKKAHGN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define ECGKEKKAHGN_ACDKJDECHEP_OFFSET UNITYSDK_OFFSET(0x1E24E9C0)
#define ECGKEKKAHGN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E24EEF0)
#define ECGKEKKAHGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E24F2C0)
#define ECGKEKKAHGN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E24E8F0)
#define ECGKEKKAHGN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E24E880)
#define ECGKEKKAHGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E24E870)
#define ECGKEKKAHGN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E24EB30)
#define ECGKEKKAHGN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E24EA00)
#define ECGKEKKAHGN_FHEIFCBDCFB_OFFSET UNITYSDK_OFFSET(0x1E24E9F0)
#define ECGKEKKAHGN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E24ECC0)
#define ECGKEKKAHGN_IFIDKGEEOFC_OFFSET UNITYSDK_OFFSET(0x1E24E9D0)
#define ECGKEKKAHGN_IGHHFLHPCDN_OFFSET UNITYSDK_OFFSET(0x1E24E9B0)
#define ECGKEKKAHGN_JGKCDIFEMPL_OFFSET UNITYSDK_OFFSET(0x1E24E9A0)
#define ECGKEKKAHGN_JGLKJJBBBIF_OFFSET UNITYSDK_OFFSET(0x1E24E9E0)
#define ECGKEKKAHGN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E24E800)
#define ECGKEKKAHGN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E24F0E0)
#define ECGKEKKAHGN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E24F040)
#define ECGKEKKAHGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E24E860)
#define ECGKEKKAHGN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E24ED50)
#define ECGKEKKAHGN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E24EDB0)

inline static constexpr unsigned int ECGKEKKAHGN_TypeDefinitionIndex = 28050;

	class ECGKEKKAHGN : public ::System::Object
	{
	public:
		::Proto::ItemList* EHCHIBLKBBP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 EHCFPHJABDL; // 0x20
		::System::UInt32 AJPNGCJCMEB; // 0x24
		static ::Google::Protobuf::MessageParser_1<::ECGKEKKAHGN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ECGKEKKAHGN*>**)UnitySDK::FromName("", "ECGKEKKAHGN")->GetStaticField(0x3D9A0);
		}

		// static const ::System::Object FBCFBAPNOGL; // 0x0
		// static const ::System::Object IBJGFEEBBID; // 0x0
		// static const ::System::Object FEGJODHHKKJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGKEKKAHGN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ECGKEKKAHGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECGKEKKAHGN*))((::PBYTE)hIl2Cpp + ECGKEKKAHGN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECGKEKKAHGN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ECGKEKKAHGN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ECGKEKKAHGN*>*(*)())((::PBYTE)hIl2Cpp + ECGKEKKAHGN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGKEKKAHGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ECGKEKKAHGN* Clone()
		{
			return ((::ECGKEKKAHGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGKEKKAHGN_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKCDIFEMPL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGKEKKAHGN_JGKCDIFEMPL_OFFSET))(this);
		}

		::System::Void IGHHFLHPCDN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGKEKKAHGN_IGHHFLHPCDN_OFFSET))(this, a1);
		}

		::Proto::ItemList* ACDKJDECHEP()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGKEKKAHGN_ACDKJDECHEP_OFFSET))(this);
		}

		::System::Void IFIDKGEEOFC(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + ECGKEKKAHGN_IFIDKGEEOFC_OFFSET))(this, a1);
		}

		::System::UInt32 JGLKJJBBBIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGKEKKAHGN_JGLKJJBBBIF_OFFSET))(this);
		}

		::System::Void FHEIFCBDCFB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGKEKKAHGN_FHEIFCBDCFB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECGKEKKAHGN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ECGKEKKAHGN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ECGKEKKAHGN*))((::PBYTE)hIl2Cpp + ECGKEKKAHGN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGKEKKAHGN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGKEKKAHGN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ECGKEKKAHGN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGKEKKAHGN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ECGKEKKAHGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECGKEKKAHGN*))((::PBYTE)hIl2Cpp + ECGKEKKAHGN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ECGKEKKAHGN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
