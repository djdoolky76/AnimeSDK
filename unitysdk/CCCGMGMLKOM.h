#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEDABANAJEK.h"
#include "unitysdk/System/Object.h"
class CCCGMGMLKOM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CCCGMGMLKOM_ANIKNPPGIDE_OFFSET UNITYSDK_OFFSET(0x1E071BD0)
#define CCCGMGMLKOM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E071FB0)
#define CCCGMGMLKOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E072370)
#define CCCGMGMLKOM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E071B70)
#define CCCGMGMLKOM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E071B30)
#define CCCGMGMLKOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E071B20)
#define CCCGMGMLKOM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E071D00)
#define CCCGMGMLKOM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E071C20)
#define CCCGMGMLKOM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E071BF0)
#define CCCGMGMLKOM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E071DD0)
#define CCCGMGMLKOM_GFFDLABMLHN_OFFSET UNITYSDK_OFFSET(0x1E071C00)
#define CCCGMGMLKOM_GFFECPKLADN_OFFSET UNITYSDK_OFFSET(0x1E071C10)
#define CCCGMGMLKOM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E071AE0)
#define CCCGMGMLKOM_LBFJLDGLNBI_OFFSET UNITYSDK_OFFSET(0x1E071BC0)
#define CCCGMGMLKOM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0721D0)
#define CCCGMGMLKOM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E072180)
#define CCCGMGMLKOM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E071BE0)
#define CCCGMGMLKOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E071B10)
#define CCCGMGMLKOM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E071E00)
#define CCCGMGMLKOM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E071E60)

inline static constexpr unsigned int CCCGMGMLKOM_TypeDefinitionIndex = 30035;

	class CCCGMGMLKOM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::OEDABANAJEK KLKLECBGCAD; // 0x1C
		::System::UInt32 DCJCOPFDHIN; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CCCGMGMLKOM")->GetStaticField(0xCC00);
		}

		// static const ::System::Object IPPEKMLENLA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object KLNJAHNNBGK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCGMGMLKOM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CCCGMGMLKOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCCGMGMLKOM*))((::PBYTE)hIl2Cpp + CCCGMGMLKOM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCCGMGMLKOM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CCCGMGMLKOM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCGMGMLKOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CCCGMGMLKOM* Clone()
		{
			return ((::CCCGMGMLKOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCGMGMLKOM_CLONE_OFFSET))(this);
		}

		::OEDABANAJEK LBFJLDGLNBI()
		{
			return ((::OEDABANAJEK(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCGMGMLKOM_LBFJLDGLNBI_OFFSET))(this);
		}

		::System::Void ANIKNPPGIDE(::OEDABANAJEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEDABANAJEK))((::PBYTE)hIl2Cpp + CCCGMGMLKOM_ANIKNPPGIDE_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCGMGMLKOM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCCGMGMLKOM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 GFFDLABMLHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCGMGMLKOM_GFFDLABMLHN_OFFSET))(this);
		}

		::System::Void GFFECPKLADN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCCGMGMLKOM_GFFECPKLADN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCCGMGMLKOM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CCCGMGMLKOM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCCGMGMLKOM*))((::PBYTE)hIl2Cpp + CCCGMGMLKOM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCGMGMLKOM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCGMGMLKOM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CCCGMGMLKOM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCGMGMLKOM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CCCGMGMLKOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCCGMGMLKOM*))((::PBYTE)hIl2Cpp + CCCGMGMLKOM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CCCGMGMLKOM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
