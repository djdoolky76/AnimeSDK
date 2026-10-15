#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLECNCOBKCJ;
class NCFKHDIKCNI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GLECNCOBKCJ_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E4BE980)
#define GLECNCOBKCJ_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E4BE990)
#define GLECNCOBKCJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4BEF90)
#define GLECNCOBKCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4BF3A0)
#define GLECNCOBKCJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4BE850)
#define GLECNCOBKCJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4BE7C0)
#define GLECNCOBKCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4BE7B0)
#define GLECNCOBKCJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4BEAD0)
#define GLECNCOBKCJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4BE9A0)
#define GLECNCOBKCJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4BEC70)
#define GLECNCOBKCJ_HNFPOLNBBOA_OFFSET UNITYSDK_OFFSET(0x1E4BE940)
#define GLECNCOBKCJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4BE740)
#define GLECNCOBKCJ_JKJHADOOBOI_OFFSET UNITYSDK_OFFSET(0x1E4BE960)
#define GLECNCOBKCJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4BF280)
#define GLECNCOBKCJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4BF150)
#define GLECNCOBKCJ_NALGBAPKEDE_OFFSET UNITYSDK_OFFSET(0x1E4BE920)
#define GLECNCOBKCJ_PBJONBDGMLF_OFFSET UNITYSDK_OFFSET(0x1E4BE930)
#define GLECNCOBKCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4BE7A0)
#define GLECNCOBKCJ_PDDBBEIMCLE_OFFSET UNITYSDK_OFFSET(0x1E4BE970)
#define GLECNCOBKCJ_PDGLCACIBNE_OFFSET UNITYSDK_OFFSET(0x1E4BE950)
#define GLECNCOBKCJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4BEDA0)
#define GLECNCOBKCJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4BEE00)

	class GLECNCOBKCJ : public ::System::Object
	{
	public:
		::NCFKHDIKCNI* IBEKEOJJEGP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x20
		::System::UInt32 PKMMENFBHKA; // 0x24
		::System::UInt32 CAMMBLGHIND; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GLECNCOBKCJ")->GetStaticField(0xDDF0);
		}

		// static const ::System::Object FOOCOAAGDOG; // 0x0
		// static const ::System::Object LEJGOAGDHIH; // 0x0
		// static const ::System::Object HFLKHGGDFLB; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLECNCOBKCJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GLECNCOBKCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLECNCOBKCJ*))((::PBYTE)hIl2Cpp + GLECNCOBKCJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLECNCOBKCJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GLECNCOBKCJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLECNCOBKCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GLECNCOBKCJ* Clone()
		{
			return ((::GLECNCOBKCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLECNCOBKCJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 NALGBAPKEDE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLECNCOBKCJ_NALGBAPKEDE_OFFSET))(this);
		}

		::System::Void PBJONBDGMLF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GLECNCOBKCJ_PBJONBDGMLF_OFFSET))(this, a1);
		}

		::System::UInt32 HNFPOLNBBOA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLECNCOBKCJ_HNFPOLNBBOA_OFFSET))(this);
		}

		::System::Void PDGLCACIBNE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GLECNCOBKCJ_PDGLCACIBNE_OFFSET))(this, a1);
		}

		::NCFKHDIKCNI* JKJHADOOBOI()
		{
			return ((::NCFKHDIKCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLECNCOBKCJ_JKJHADOOBOI_OFFSET))(this);
		}

		::System::Void PDDBBEIMCLE(::NCFKHDIKCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCFKHDIKCNI*))((::PBYTE)hIl2Cpp + GLECNCOBKCJ_PDDBBEIMCLE_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLECNCOBKCJ_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GLECNCOBKCJ_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GLECNCOBKCJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GLECNCOBKCJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GLECNCOBKCJ*))((::PBYTE)hIl2Cpp + GLECNCOBKCJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLECNCOBKCJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLECNCOBKCJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GLECNCOBKCJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLECNCOBKCJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GLECNCOBKCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLECNCOBKCJ*))((::PBYTE)hIl2Cpp + GLECNCOBKCJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GLECNCOBKCJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
