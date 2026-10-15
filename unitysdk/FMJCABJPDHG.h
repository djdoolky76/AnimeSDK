#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMJCABJPDHG;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FMJCABJPDHG_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1E3E71A0)
#define FMJCABJPDHG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3E76E0)
#define FMJCABJPDHG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E7A80)
#define FMJCABJPDHG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3E7100)
#define FMJCABJPDHG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3E7090)
#define FMJCABJPDHG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E7080)
#define FMJCABJPDHG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3E7370)
#define FMJCABJPDHG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3E71E0)
#define FMJCABJPDHG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3E7190)
#define FMJCABJPDHG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3E7500)
#define FMJCABJPDHG_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1E3E71C0)
#define FMJCABJPDHG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3E7040)
#define FMJCABJPDHG_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1E3E71D0)
#define FMJCABJPDHG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3E78C0)
#define FMJCABJPDHG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3E7830)
#define FMJCABJPDHG_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1E3E71B0)
#define FMJCABJPDHG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3E7180)
#define FMJCABJPDHG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3E7070)
#define FMJCABJPDHG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3E7540)
#define FMJCABJPDHG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3E75A0)

	class FMJCABJPDHG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 KBBFPCGLDCN; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FMJCABJPDHG")->GetStaticField(0x64D10);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HNBHJOFPFLM; // 0x0
		// static const ::System::Object CLGAAGPCNGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJCABJPDHG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FMJCABJPDHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMJCABJPDHG*))((::PBYTE)hIl2Cpp + FMJCABJPDHG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMJCABJPDHG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FMJCABJPDHG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJCABJPDHG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FMJCABJPDHG* Clone()
		{
			return ((::FMJCABJPDHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJCABJPDHG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJCABJPDHG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMJCABJPDHG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJCABJPDHG_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + FMJCABJPDHG_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJCABJPDHG_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMJCABJPDHG_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FMJCABJPDHG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FMJCABJPDHG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FMJCABJPDHG*))((::PBYTE)hIl2Cpp + FMJCABJPDHG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJCABJPDHG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJCABJPDHG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FMJCABJPDHG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJCABJPDHG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FMJCABJPDHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMJCABJPDHG*))((::PBYTE)hIl2Cpp + FMJCABJPDHG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FMJCABJPDHG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
