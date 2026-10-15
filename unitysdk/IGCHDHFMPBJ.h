#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKOPGDPKJHB.h"
#include "unitysdk/System/Object.h"
class IGCHDHFMPBJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IGCHDHFMPBJ_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E648E00)
#define IGCHDHFMPBJ_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E648E10)
#define IGCHDHFMPBJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E649260)
#define IGCHDHFMPBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E649690)
#define IGCHDHFMPBJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E648D00)
#define IGCHDHFMPBJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E648CB0)
#define IGCHDHFMPBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E648CA0)
#define IGCHDHFMPBJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E648ED0)
#define IGCHDHFMPBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E648E20)
#define IGCHDHFMPBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E648FE0)
#define IGCHDHFMPBJ_HIGMHCHDPDL_OFFSET UNITYSDK_OFFSET(0x1E648DA0)
#define IGCHDHFMPBJ_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1E648D90)
#define IGCHDHFMPBJ_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1E648D80)
#define IGCHDHFMPBJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E648C30)
#define IGCHDHFMPBJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E649450)
#define IGCHDHFMPBJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6493F0)
#define IGCHDHFMPBJ_MJDLJPBICHP_OFFSET UNITYSDK_OFFSET(0x1E648DB0)
#define IGCHDHFMPBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E648C90)
#define IGCHDHFMPBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E649090)
#define IGCHDHFMPBJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6490F0)

inline static constexpr unsigned int IGCHDHFMPBJ_TypeDefinitionIndex = 25239;

	class IGCHDHFMPBJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* JDOJAMHCAJD; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x20
		::DKOPGDPKJHB GMPNCOBOFDM; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IGCHDHFMPBJ")->GetStaticField(0x4A800);
		}

		// static const ::System::Object GDFHGOOLLFD; // 0x0
		// static const ::System::Object DBKOHLFBPNI; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCHDHFMPBJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IGCHDHFMPBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGCHDHFMPBJ*))((::PBYTE)hIl2Cpp + IGCHDHFMPBJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGCHDHFMPBJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IGCHDHFMPBJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCHDHFMPBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IGCHDHFMPBJ* Clone()
		{
			return ((::IGCHDHFMPBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCHDHFMPBJ_CLONE_OFFSET))(this);
		}

		::DKOPGDPKJHB JBIOGKPHKKC()
		{
			return ((::DKOPGDPKJHB(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCHDHFMPBJ_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::DKOPGDPKJHB a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKOPGDPKJHB))((::PBYTE)hIl2Cpp + IGCHDHFMPBJ_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::String* HIGMHCHDPDL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCHDHFMPBJ_HIGMHCHDPDL_OFFSET))(this);
		}

		::System::Void MJDLJPBICHP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IGCHDHFMPBJ_MJDLJPBICHP_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCHDHFMPBJ_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGCHDHFMPBJ_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGCHDHFMPBJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IGCHDHFMPBJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGCHDHFMPBJ*))((::PBYTE)hIl2Cpp + IGCHDHFMPBJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCHDHFMPBJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCHDHFMPBJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IGCHDHFMPBJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCHDHFMPBJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IGCHDHFMPBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGCHDHFMPBJ*))((::PBYTE)hIl2Cpp + IGCHDHFMPBJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IGCHDHFMPBJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
