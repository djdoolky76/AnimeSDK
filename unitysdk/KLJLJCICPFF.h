#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLJLJCICPFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KLJLJCICPFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FBAA9C0)
#define KLJLJCICPFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBAAC90)
#define KLJLJCICPFF_CLONE_OFFSET UNITYSDK_OFFSET(0x1FBAA610)
#define KLJLJCICPFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBAA5E0)
#define KLJLJCICPFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBAA5D0)
#define KLJLJCICPFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FBAA780)
#define KLJLJCICPFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FBAA6A0)
#define KLJLJCICPFF_GCAIBILOLBM_OFFSET UNITYSDK_OFFSET(0x1FBAA670)
#define KLJLJCICPFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FBAA850)
#define KLJLJCICPFF_HHPBELBFBEL_OFFSET UNITYSDK_OFFSET(0x1FBAA660)
#define KLJLJCICPFF_JEKIFLAKBMJ_OFFSET UNITYSDK_OFFSET(0x1FBAA690)
#define KLJLJCICPFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FBAA590)
#define KLJLJCICPFF_LNPKOHGKNCE_OFFSET UNITYSDK_OFFSET(0x1FBAA680)
#define KLJLJCICPFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FBAAB10)
#define KLJLJCICPFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FBAAAD0)
#define KLJLJCICPFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FBAA5C0)
#define KLJLJCICPFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FBAA880)
#define KLJLJCICPFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FBAA8E0)

inline static constexpr unsigned int KLJLJCICPFF_TypeDefinitionIndex = 25781;

	class KLJLJCICPFF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ENJIHLOFHFN; // 0x18
		::System::UInt32 HCKPAAGOJPB; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KLJLJCICPFF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KLJLJCICPFF*>**)UnitySDK::FromName("", "KLJLJCICPFF")->GetStaticField(0x19A70);
		}

		// static const ::System::Object OHAPECBOGIJ; // 0x0
		// static const ::System::Object PCKMDIHALOM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJLJCICPFF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KLJLJCICPFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLJLJCICPFF*))((::PBYTE)hIl2Cpp + KLJLJCICPFF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLJLJCICPFF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KLJLJCICPFF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KLJLJCICPFF*>*(*)())((::PBYTE)hIl2Cpp + KLJLJCICPFF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJLJCICPFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KLJLJCICPFF* Clone()
		{
			return ((::KLJLJCICPFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJLJCICPFF_CLONE_OFFSET))(this);
		}

		::System::UInt32 HHPBELBFBEL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJLJCICPFF_HHPBELBFBEL_OFFSET))(this);
		}

		::System::Void GCAIBILOLBM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLJLJCICPFF_GCAIBILOLBM_OFFSET))(this, a1);
		}

		::System::UInt32 LNPKOHGKNCE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJLJCICPFF_LNPKOHGKNCE_OFFSET))(this);
		}

		::System::Void JEKIFLAKBMJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLJLJCICPFF_JEKIFLAKBMJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLJLJCICPFF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KLJLJCICPFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLJLJCICPFF*))((::PBYTE)hIl2Cpp + KLJLJCICPFF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJLJCICPFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJLJCICPFF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KLJLJCICPFF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJLJCICPFF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KLJLJCICPFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLJLJCICPFF*))((::PBYTE)hIl2Cpp + KLJLJCICPFF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KLJLJCICPFF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
