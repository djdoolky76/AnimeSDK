#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLJLJCICPFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KLJLJCICPFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E88F580)
#define KLJLJCICPFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E88F850)
#define KLJLJCICPFF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E88F1D0)
#define KLJLJCICPFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E88F1A0)
#define KLJLJCICPFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E88F190)
#define KLJLJCICPFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E88F340)
#define KLJLJCICPFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E88F260)
#define KLJLJCICPFF_GCAIBILOLBM_OFFSET UNITYSDK_OFFSET(0x1E88F230)
#define KLJLJCICPFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E88F410)
#define KLJLJCICPFF_HHPBELBFBEL_OFFSET UNITYSDK_OFFSET(0x1E88F220)
#define KLJLJCICPFF_JEKIFLAKBMJ_OFFSET UNITYSDK_OFFSET(0x1E88F250)
#define KLJLJCICPFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E88F150)
#define KLJLJCICPFF_LNPKOHGKNCE_OFFSET UNITYSDK_OFFSET(0x1E88F240)
#define KLJLJCICPFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E88F6D0)
#define KLJLJCICPFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E88F690)
#define KLJLJCICPFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E88F180)
#define KLJLJCICPFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E88F440)
#define KLJLJCICPFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E88F4A0)

inline static constexpr unsigned int KLJLJCICPFF_TypeDefinitionIndex = 25303;

	class KLJLJCICPFF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ENJIHLOFHFN; // 0x18
		::System::UInt32 HCKPAAGOJPB; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KLJLJCICPFF")->GetStaticField(0x215B0);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KLJLJCICPFF_JJGHOBBFNJD_OFFSET))();
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
