#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGOJLBNJKCN.h"
#include "unitysdk/System/Object.h"
class LCGFKNIAMBE;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LCGFKNIAMBE_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1E8ECAB0)
#define LCGFKNIAMBE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8ECFE0)
#define LCGFKNIAMBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8ED3E0)
#define LCGFKNIAMBE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8EC9E0)
#define LCGFKNIAMBE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8EC960)
#define LCGFKNIAMBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8EC950)
#define LCGFKNIAMBE_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E8ECA90)
#define LCGFKNIAMBE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8ECC20)
#define LCGFKNIAMBE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8ECB10)
#define LCGFKNIAMBE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8ECA80)
#define LCGFKNIAMBE_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E8ECAA0)
#define LCGFKNIAMBE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8ECD30)
#define LCGFKNIAMBE_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1E8ECAE0)
#define LCGFKNIAMBE_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1E8ECAD0)
#define LCGFKNIAMBE_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1E8ECAF0)
#define LCGFKNIAMBE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8EC910)
#define LCGFKNIAMBE_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1E8ECB00)
#define LCGFKNIAMBE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8ED300)
#define LCGFKNIAMBE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8ED260)
#define LCGFKNIAMBE_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1E8ECAC0)
#define LCGFKNIAMBE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8ECA70)
#define LCGFKNIAMBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8EC940)
#define LCGFKNIAMBE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8ECD80)
#define LCGFKNIAMBE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8ECDE0)

	class LCGFKNIAMBE : public ::System::Object
	{
	public:
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::OGOJLBNJKCN GMPNCOBOFDM; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::UInt32 KBBFPCGLDCN; // 0x28
		::System::UInt32 GEMFJILOPLL; // 0x2C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LCGFKNIAMBE")->GetStaticField(0x32CB0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object HNBHJOFPFLM; // 0x0
		// static const ::System::Object GDFHGOOLLFD; // 0x0
		// static const ::System::Object CLGAAGPCNGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGFKNIAMBE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LCGFKNIAMBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCGFKNIAMBE*))((::PBYTE)hIl2Cpp + LCGFKNIAMBE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCGFKNIAMBE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LCGFKNIAMBE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGFKNIAMBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LCGFKNIAMBE* Clone()
		{
			return ((::LCGFKNIAMBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGFKNIAMBE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGFKNIAMBE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LCGFKNIAMBE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGFKNIAMBE_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LCGFKNIAMBE_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGFKNIAMBE_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + LCGFKNIAMBE_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::OGOJLBNJKCN JBIOGKPHKKC()
		{
			return ((::OGOJLBNJKCN(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGFKNIAMBE_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::OGOJLBNJKCN a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGOJLBNJKCN))((::PBYTE)hIl2Cpp + LCGFKNIAMBE_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGFKNIAMBE_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LCGFKNIAMBE_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LCGFKNIAMBE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LCGFKNIAMBE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LCGFKNIAMBE*))((::PBYTE)hIl2Cpp + LCGFKNIAMBE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGFKNIAMBE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGFKNIAMBE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LCGFKNIAMBE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGFKNIAMBE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LCGFKNIAMBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCGFKNIAMBE*))((::PBYTE)hIl2Cpp + LCGFKNIAMBE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LCGFKNIAMBE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
