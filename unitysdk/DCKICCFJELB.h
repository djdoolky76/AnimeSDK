#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEDABANAJEK.h"
#include "unitysdk/System/Object.h"
class DCKICCFJELB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DCKICCFJELB_ANIKNPPGIDE_OFFSET UNITYSDK_OFFSET(0x1F44CCD0)
#define DCKICCFJELB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F44D010)
#define DCKICCFJELB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F44D320)
#define DCKICCFJELB_CLONE_OFFSET UNITYSDK_OFFSET(0x1F44CC50)
#define DCKICCFJELB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F44CC20)
#define DCKICCFJELB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F44CC10)
#define DCKICCFJELB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F44CDC0)
#define DCKICCFJELB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F44CCE0)
#define DCKICCFJELB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F44CE90)
#define DCKICCFJELB_GFFDLABMLHN_OFFSET UNITYSDK_OFFSET(0x1F44CCA0)
#define DCKICCFJELB_GFFECPKLADN_OFFSET UNITYSDK_OFFSET(0x1F44CCB0)
#define DCKICCFJELB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F44CBD0)
#define DCKICCFJELB_LBFJLDGLNBI_OFFSET UNITYSDK_OFFSET(0x1F44CCC0)
#define DCKICCFJELB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F44D1A0)
#define DCKICCFJELB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F44D160)
#define DCKICCFJELB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F44CC00)
#define DCKICCFJELB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F44CEC0)
#define DCKICCFJELB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F44CF20)

inline static constexpr unsigned int DCKICCFJELB_TypeDefinitionIndex = 30931;

	class DCKICCFJELB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DCJCOPFDHIN; // 0x18
		::OEDABANAJEK KLKLECBGCAD; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::DCKICCFJELB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DCKICCFJELB*>**)UnitySDK::FromName("", "DCKICCFJELB")->GetStaticField(0x266C0);
		}

		// static const ::System::Object KLNJAHNNBGK; // 0x0
		// static const ::System::Object IPPEKMLENLA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKICCFJELB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DCKICCFJELB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCKICCFJELB*))((::PBYTE)hIl2Cpp + DCKICCFJELB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCKICCFJELB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DCKICCFJELB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DCKICCFJELB*>*(*)())((::PBYTE)hIl2Cpp + DCKICCFJELB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKICCFJELB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DCKICCFJELB* Clone()
		{
			return ((::DCKICCFJELB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKICCFJELB_CLONE_OFFSET))(this);
		}

		::System::UInt32 GFFDLABMLHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKICCFJELB_GFFDLABMLHN_OFFSET))(this);
		}

		::System::Void GFFECPKLADN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCKICCFJELB_GFFECPKLADN_OFFSET))(this, a1);
		}

		::OEDABANAJEK LBFJLDGLNBI()
		{
			return ((::OEDABANAJEK(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKICCFJELB_LBFJLDGLNBI_OFFSET))(this);
		}

		::System::Void ANIKNPPGIDE(::OEDABANAJEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEDABANAJEK))((::PBYTE)hIl2Cpp + DCKICCFJELB_ANIKNPPGIDE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCKICCFJELB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DCKICCFJELB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCKICCFJELB*))((::PBYTE)hIl2Cpp + DCKICCFJELB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKICCFJELB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKICCFJELB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DCKICCFJELB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKICCFJELB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DCKICCFJELB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCKICCFJELB*))((::PBYTE)hIl2Cpp + DCKICCFJELB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DCKICCFJELB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
