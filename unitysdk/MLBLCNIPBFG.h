#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLBLCNIPBFG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MLBLCNIPBFG_BIKLNOEMCJO_OFFSET UNITYSDK_OFFSET(0x1EA7FA30)
#define MLBLCNIPBFG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA7FD70)
#define MLBLCNIPBFG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA80040)
#define MLBLCNIPBFG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA7F9C0)
#define MLBLCNIPBFG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA7F990)
#define MLBLCNIPBFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA7F980)
#define MLBLCNIPBFG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA7FB30)
#define MLBLCNIPBFG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA7FA50)
#define MLBLCNIPBFG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA7FC00)
#define MLBLCNIPBFG_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1EA7FA10)
#define MLBLCNIPBFG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA7F940)
#define MLBLCNIPBFG_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1EA7FA20)
#define MLBLCNIPBFG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA7FEC0)
#define MLBLCNIPBFG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA7FE80)
#define MLBLCNIPBFG_OCBHPCJNLGL_OFFSET UNITYSDK_OFFSET(0x1EA7FA40)
#define MLBLCNIPBFG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA7F970)
#define MLBLCNIPBFG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA7FC30)
#define MLBLCNIPBFG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA7FC90)

inline static constexpr unsigned int MLBLCNIPBFG_TypeDefinitionIndex = 31386;

	class MLBLCNIPBFG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KBBFPCGLDCN; // 0x18
		::System::UInt32 EMEDPJEGFNE; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MLBLCNIPBFG")->GetStaticField(0x57C30);
		}

		// static const ::System::Object CLGAAGPCNGI; // 0x0
		// static const ::System::Object AKNOMJNFBPP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBLCNIPBFG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MLBLCNIPBFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLBLCNIPBFG*))((::PBYTE)hIl2Cpp + MLBLCNIPBFG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLBLCNIPBFG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MLBLCNIPBFG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBLCNIPBFG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MLBLCNIPBFG* Clone()
		{
			return ((::MLBLCNIPBFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBLCNIPBFG_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBLCNIPBFG_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLBLCNIPBFG_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::UInt32 BIKLNOEMCJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBLCNIPBFG_BIKLNOEMCJO_OFFSET))(this);
		}

		::System::Void OCBHPCJNLGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLBLCNIPBFG_OCBHPCJNLGL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLBLCNIPBFG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MLBLCNIPBFG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MLBLCNIPBFG*))((::PBYTE)hIl2Cpp + MLBLCNIPBFG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBLCNIPBFG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBLCNIPBFG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MLBLCNIPBFG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBLCNIPBFG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MLBLCNIPBFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLBLCNIPBFG*))((::PBYTE)hIl2Cpp + MLBLCNIPBFG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MLBLCNIPBFG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
