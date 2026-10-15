#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHPAECJCOCG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NHPAECJCOCG_AFADJMFGCGN_OFFSET UNITYSDK_OFFSET(0x1EAF5DA0)
#define NHPAECJCOCG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAF6370)
#define NHPAECJCOCG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF6600)
#define NHPAECJCOCG_CLHOECGMLFH_OFFSET UNITYSDK_OFFSET(0x1EAF5DB0)
#define NHPAECJCOCG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAF5D40)
#define NHPAECJCOCG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAF5CF0)
#define NHPAECJCOCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF5CE0)
#define NHPAECJCOCG_DKDLBLLMPNE_OFFSET UNITYSDK_OFFSET(0x1EAF5E10)
#define NHPAECJCOCG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAF5E50)
#define NHPAECJCOCG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAF5E20)
#define NHPAECJCOCG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAF6070)
#define NHPAECJCOCG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAF5CA0)
#define NHPAECJCOCG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAF6450)
#define NHPAECJCOCG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAF63F0)
#define NHPAECJCOCG_MNLDMBGAJIF_OFFSET UNITYSDK_OFFSET(0x1EAF5E00)
#define NHPAECJCOCG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAF5CD0)
#define NHPAECJCOCG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAF6210)
#define NHPAECJCOCG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAF6270)

inline static constexpr unsigned int NHPAECJCOCG_TypeDefinitionIndex = 25551;

	class NHPAECJCOCG : public ::System::Object
	{
	public:
		::System::String* PDKNJCIEBHA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Double DFKHBNCHKBI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NHPAECJCOCG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NHPAECJCOCG*>**)UnitySDK::FromName("", "NHPAECJCOCG")->GetStaticField(0x2FCC0);
		}

		// static const ::System::Object AFBDHEMJEPP; // 0x0
		// static const ::System::Object JLAAHBJNEML; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPAECJCOCG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NHPAECJCOCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHPAECJCOCG*))((::PBYTE)hIl2Cpp + NHPAECJCOCG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHPAECJCOCG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NHPAECJCOCG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NHPAECJCOCG*>*(*)())((::PBYTE)hIl2Cpp + NHPAECJCOCG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPAECJCOCG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NHPAECJCOCG* Clone()
		{
			return ((::NHPAECJCOCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPAECJCOCG_CLONE_OFFSET))(this);
		}

		::System::String* AFADJMFGCGN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPAECJCOCG_AFADJMFGCGN_OFFSET))(this);
		}

		::System::Void CLHOECGMLFH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NHPAECJCOCG_CLHOECGMLFH_OFFSET))(this, a1);
		}

		::System::Double MNLDMBGAJIF()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPAECJCOCG_MNLDMBGAJIF_OFFSET))(this);
		}

		::System::Void DKDLBLLMPNE(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + NHPAECJCOCG_DKDLBLLMPNE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NHPAECJCOCG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NHPAECJCOCG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NHPAECJCOCG*))((::PBYTE)hIl2Cpp + NHPAECJCOCG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPAECJCOCG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPAECJCOCG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NHPAECJCOCG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPAECJCOCG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NHPAECJCOCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHPAECJCOCG*))((::PBYTE)hIl2Cpp + NHPAECJCOCG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NHPAECJCOCG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
