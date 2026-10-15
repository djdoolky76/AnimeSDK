#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EILODDMBANJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EILODDMBANJ_AFADJMFGCGN_OFFSET UNITYSDK_OFFSET(0x1E2AC120)
#define EILODDMBANJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2AC480)
#define EILODDMBANJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2AC750)
#define EILODDMBANJ_CLHOECGMLFH_OFFSET UNITYSDK_OFFSET(0x1E2AC130)
#define EILODDMBANJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2AC0D0)
#define EILODDMBANJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2AC0A0)
#define EILODDMBANJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AC090)
#define EILODDMBANJ_DKDLBLLMPNE_OFFSET UNITYSDK_OFFSET(0x1E2AC150)
#define EILODDMBANJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2AC240)
#define EILODDMBANJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2AC160)
#define EILODDMBANJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2AC310)
#define EILODDMBANJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2AC050)
#define EILODDMBANJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2AC5D0)
#define EILODDMBANJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2AC590)
#define EILODDMBANJ_MNLDMBGAJIF_OFFSET UNITYSDK_OFFSET(0x1E2AC140)
#define EILODDMBANJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2AC080)
#define EILODDMBANJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2AC340)
#define EILODDMBANJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2AC3A0)

	class EILODDMBANJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DFKHBNCHKBI; // 0x18
		::System::UInt32 PDKNJCIEBHA; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EILODDMBANJ")->GetStaticField(0x49E30);
		}

		// static const ::System::Object AFBDHEMJEPP; // 0x0
		// static const ::System::Object JLAAHBJNEML; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILODDMBANJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EILODDMBANJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EILODDMBANJ*))((::PBYTE)hIl2Cpp + EILODDMBANJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EILODDMBANJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EILODDMBANJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILODDMBANJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EILODDMBANJ* Clone()
		{
			return ((::EILODDMBANJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILODDMBANJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 AFADJMFGCGN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EILODDMBANJ_AFADJMFGCGN_OFFSET))(this);
		}

		::System::Void CLHOECGMLFH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EILODDMBANJ_CLHOECGMLFH_OFFSET))(this, a1);
		}

		::System::UInt32 MNLDMBGAJIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EILODDMBANJ_MNLDMBGAJIF_OFFSET))(this);
		}

		::System::Void DKDLBLLMPNE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EILODDMBANJ_DKDLBLLMPNE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EILODDMBANJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EILODDMBANJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EILODDMBANJ*))((::PBYTE)hIl2Cpp + EILODDMBANJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EILODDMBANJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILODDMBANJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EILODDMBANJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EILODDMBANJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EILODDMBANJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EILODDMBANJ*))((::PBYTE)hIl2Cpp + EILODDMBANJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EILODDMBANJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
