#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EABIMAPLLLL;
class GAAMBBFPCHB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EABIMAPLLLL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E222110)
#define EABIMAPLLLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E222440)
#define EABIMAPLLLL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E221AF0)
#define EABIMAPLLLL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E221A80)
#define EABIMAPLLLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E221A70)
#define EABIMAPLLLL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E221D00)
#define EABIMAPLLLL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E221B90)
#define EABIMAPLLLL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E221FD0)
#define EABIMAPLLLL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E221A30)
#define EABIMAPLLLL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E222270)
#define EABIMAPLLLL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E222170)
#define EABIMAPLLLL_NMMBFGNHDIH_OFFSET UNITYSDK_OFFSET(0x1E221B80)
#define EABIMAPLLLL_OJECLJEIFLJ_OFFSET UNITYSDK_OFFSET(0x1E221B70)
#define EABIMAPLLLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E221A60)
#define EABIMAPLLLL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E222020)
#define EABIMAPLLLL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E222080)

	class EABIMAPLLLL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GAAMBBFPCHB* GAPDBIBJBAG; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EABIMAPLLLL")->GetStaticField(0x47FB0);
		}

		// static const ::System::Object LHMKKEEFHLB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EABIMAPLLLL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EABIMAPLLLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EABIMAPLLLL*))((::PBYTE)hIl2Cpp + EABIMAPLLLL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EABIMAPLLLL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EABIMAPLLLL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EABIMAPLLLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EABIMAPLLLL* Clone()
		{
			return ((::EABIMAPLLLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EABIMAPLLLL_CLONE_OFFSET))(this);
		}

		::GAAMBBFPCHB* OJECLJEIFLJ()
		{
			return ((::GAAMBBFPCHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EABIMAPLLLL_OJECLJEIFLJ_OFFSET))(this);
		}

		::System::Void NMMBFGNHDIH(::GAAMBBFPCHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAAMBBFPCHB*))((::PBYTE)hIl2Cpp + EABIMAPLLLL_NMMBFGNHDIH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EABIMAPLLLL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EABIMAPLLLL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EABIMAPLLLL*))((::PBYTE)hIl2Cpp + EABIMAPLLLL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EABIMAPLLLL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EABIMAPLLLL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EABIMAPLLLL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EABIMAPLLLL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EABIMAPLLLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EABIMAPLLLL*))((::PBYTE)hIl2Cpp + EABIMAPLLLL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EABIMAPLLLL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
