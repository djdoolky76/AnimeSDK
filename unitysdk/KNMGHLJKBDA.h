#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNMGHLJKBDA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KNMGHLJKBDA_AGEKDECKNGG_OFFSET UNITYSDK_OFFSET(0x1E8A6E90)
#define KNMGHLJKBDA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8A7330)
#define KNMGHLJKBDA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A77C0)
#define KNMGHLJKBDA_CHGHEAPFJNJ_OFFSET UNITYSDK_OFFSET(0x1E8A6EC0)
#define KNMGHLJKBDA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8A6E00)
#define KNMGHLJKBDA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8A6DC0)
#define KNMGHLJKBDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A6DB0)
#define KNMGHLJKBDA_EJDIMEGMAKG_OFFSET UNITYSDK_OFFSET(0x1E8A6F20)
#define KNMGHLJKBDA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8A6FE0)
#define KNMGHLJKBDA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8A6F40)
#define KNMGHLJKBDA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8A7030)
#define KNMGHLJKBDA_GFFLMNPLHJG_OFFSET UNITYSDK_OFFSET(0x1E8A6EB0)
#define KNMGHLJKBDA_GOIACKBBPOD_OFFSET UNITYSDK_OFFSET(0x1E8A6F30)
#define KNMGHLJKBDA_IDNFENJBNPP_OFFSET UNITYSDK_OFFSET(0x1E8A6E80)
#define KNMGHLJKBDA_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1E8A6F10)
#define KNMGHLJKBDA_ILKAEBEJKJK_OFFSET UNITYSDK_OFFSET(0x1E8A6EE0)
#define KNMGHLJKBDA_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1E8A6F00)
#define KNMGHLJKBDA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8A6D40)
#define KNMGHLJKBDA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8A76F0)
#define KNMGHLJKBDA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8A7680)
#define KNMGHLJKBDA_NGDLJINJKJP_OFFSET UNITYSDK_OFFSET(0x1E8A6EA0)
#define KNMGHLJKBDA_NGGKLAFKMCM_OFFSET UNITYSDK_OFFSET(0x1E8A6EF0)
#define KNMGHLJKBDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8A6DA0)
#define KNMGHLJKBDA_PLEKFEEAHOD_OFFSET UNITYSDK_OFFSET(0x1E8A6ED0)
#define KNMGHLJKBDA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8A7080)
#define KNMGHLJKBDA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8A70E0)

	class KNMGHLJKBDA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 DEJFOEHNFJA; // 0x18
		::System::UInt32 ABGGFEAJHAH; // 0x20
		::System::UInt32 GMPNCOBOFDM; // 0x24
		::System::UInt32 CGCDBPPFNIC; // 0x28
		::System::UInt32 EMHBAOIIKLC; // 0x2C
		::System::UInt32 ILAKPIDBPPK; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KNMGHLJKBDA")->GetStaticField(0x24920);
		}

		// static const ::System::Object EIDJNEEOOCF; // 0x0
		// static const ::System::Object ODKEBLADOMK; // 0x0
		// static const ::System::Object HNCINKBJDIN; // 0x0
		// static const ::System::Object GHEKHKOBIEL; // 0x0
		// static const ::System::Object GDFHGOOLLFD; // 0x0
		// static const ::System::Object NINHOJDICNH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGHLJKBDA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KNMGHLJKBDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNMGHLJKBDA*))((::PBYTE)hIl2Cpp + KNMGHLJKBDA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNMGHLJKBDA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KNMGHLJKBDA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGHLJKBDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KNMGHLJKBDA* Clone()
		{
			return ((::KNMGHLJKBDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGHLJKBDA_CLONE_OFFSET))(this);
		}

		::System::UInt64 IDNFENJBNPP()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGHLJKBDA_IDNFENJBNPP_OFFSET))(this);
		}

		::System::Void AGEKDECKNGG(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + KNMGHLJKBDA_AGEKDECKNGG_OFFSET))(this, a1);
		}

		::System::UInt32 NGDLJINJKJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGHLJKBDA_NGDLJINJKJP_OFFSET))(this);
		}

		::System::Void GFFLMNPLHJG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNMGHLJKBDA_GFFLMNPLHJG_OFFSET))(this, a1);
		}

		::System::UInt32 CHGHEAPFJNJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGHLJKBDA_CHGHEAPFJNJ_OFFSET))(this);
		}

		::System::Void PLEKFEEAHOD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNMGHLJKBDA_PLEKFEEAHOD_OFFSET))(this, a1);
		}

		::System::UInt32 ILKAEBEJKJK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGHLJKBDA_ILKAEBEJKJK_OFFSET))(this);
		}

		::System::Void NGGKLAFKMCM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNMGHLJKBDA_NGGKLAFKMCM_OFFSET))(this, a1);
		}

		::System::UInt32 JBIOGKPHKKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGHLJKBDA_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNMGHLJKBDA_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::UInt32 EJDIMEGMAKG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGHLJKBDA_EJDIMEGMAKG_OFFSET))(this);
		}

		::System::Void GOIACKBBPOD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNMGHLJKBDA_GOIACKBBPOD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNMGHLJKBDA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KNMGHLJKBDA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KNMGHLJKBDA*))((::PBYTE)hIl2Cpp + KNMGHLJKBDA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGHLJKBDA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGHLJKBDA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KNMGHLJKBDA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGHLJKBDA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KNMGHLJKBDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNMGHLJKBDA*))((::PBYTE)hIl2Cpp + KNMGHLJKBDA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KNMGHLJKBDA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
